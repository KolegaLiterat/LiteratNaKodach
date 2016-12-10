#include <iostream>
#include <cstdlib>
#include "nagl.h"

using namespace std;

int losowanie()
{
	int rzut, orz_resz, kto_pierwszy;

	cout << "Przyszedl czas na rozstrzygniecie sporu! Kto zaczyna? Wybierasz orla, czy reszke?\n"
		<< "[1] Orzel\n"
		<< "[2] Reszka\n";
	cin >> orz_resz;
	
	if (orz_resz < 1 || orz_resz > 2) {
		cout << "Pijany Zbig wali Cie w ryj z lapy. Ten atak zabija wilki, wiec i Ty nie masz szans.\n";
		return 0;
	}
	
	rzut = (rand() % 2) + 1;	//rzut rowny 1  wypadl orzel, rzut rowny 2 wypadla reszka;
	
	if ((orz_resz == 1) && (rzut == 1) || (orz_resz == 2) && (rzut == 2)) { 
		cout << "Brawo! Zaczynasz\n";
		kto_pierwszy = 1;
	} else if ((orz_resz == 1) && (rzut == 2) || (orz_resz == 2) && (rzut == 1)) {
		cout << "Zbig zaczyna\n";
		kto_pierwszy = 2;
	}
	
	walka(kto_pierwszy);
}

int walka(int kto_pierwszy)	//wybor rodzaju ataku
{
	int gracz_atak, zbig_atak;	

	if (kto_pierwszy == 1) {
		cout << "Atakuj!\n"
			<< "Do wyboru masz:\n"
			<< "[1] Tarcze (pochlania 4 punkty obrazen)\n"
			<< "[2] Miecz (zadaje 2 punkt obrazen)\n"
			<< "[3] Kule ognia (zadaje 4 punkty obrazen)\n"
			<< "Co wybierasz?\n";
		cin >> gracz_atak;
		
		if (gracz_atak < 0 || gracz_atak > 3) {
			cout << "Skladasz bron i uciekasz! Dobry wybor!\n";
			return 0;
		}

		cout << "Zbig jest gotow\n";
	
		zbig_atak = (rand() % 6) + 1;	//Zbig atakuje od 1 do 6

	} else {
		cout << "Zbig jest gotow do ataku!\n";

		zbig_atak = (rand() % 6) + 1;
		
		cout << "Atakuj!\n"
			<< "Do wyboru masz:\n"
			<< "[1] Tarcze (pochlania 4 punkty obrazen)\n"
			<< "[2] Miecz (zadaje 2 punkt obrazen)\n"
			<< "[3] Kule ognia (zadaje 4 punkty obrazen)\n"
			<< "Co wybierasz?\n";
		cin >> gracz_atak;
		
		if (gracz_atak < 0 || gracz_atak > 3) {
			cout << "Skladasz bron i uciekasz! Dobry wybor!\n";
			return 0;
		}
	}

	zycie(gracz_atak, zbig_atak, kto_pierwszy);
}

int zycie(int gracz_atak, int zbig_atak, int kto_pierwszy)
{
	static int gracz_zycie = 15, zbig_zycie = 15, tura = 1;
	
	switch (gracz_atak) {	//przypisanie obra¿eñ do okreœlonego rodzaju ataku
		case 1:
			cout << "Tarcza! Pochlania ataki Zbiga\n";
			zbig_atak = zbig_atak - 4;
			
			if (zbig_atak < 0) {
			zbig_atak = 0;
			}
			
			gracz_atak = 0;
				break;
		case 2:
			gracz_atak = 2;
				break;
		case 3:
			gracz_atak = 4;
				break;
		default:
			return 0;
				break;
	}

	switch (kto_pierwszy) {	//w³aœciwa walka; przerywana, gdy ktos straci cale zycie
		case 1:
			cout << "Tura " << tura << "\nAtakujesz za " << gracz_atak << " punkty\n";
			
			zbig_zycie -= gracz_atak;
			
			if (zbig_zycie <= 0) {
				cout << "Zwyciestwo! Zbig zostal pokonany " << tura << " turach.\n";
				return 0;
			}
			
			tura++;
			
			cout << "Tura " << tura << "\nZbig atakuje za " << zbig_atak << " punkty\n";
			
			gracz_zycie -= zbig_atak;
			
			if (gracz_zycie <= 0) {
				cout << "Porazka! Zbig Cie pokonal! W " << tura << " turach.\n";
				return 0;
			}

			tura++;
				break;
		case 2:
			cout << "Tura " << tura << "\nZbig atakuje za " << zbig_atak << " punkty\n";
			
			gracz_zycie -= zbig_atak;
			
			if (gracz_zycie <= 0) {
				cout << "Porazka! Zbig Cie pokonal! W " << tura << " turach.\n";
				return 0;
			}

			tura++;
			
			cout << "Tura " << tura << "\nAtakujesz za " << gracz_atak << " punkty\n";
			
			zbig_zycie -= gracz_atak;
			
			if (zbig_zycie <= 0) {
				cout << "Zwyciestwo! Zbig zostal pokonay w " << tura << " turach.\n";
				return 0;
			}

			tura++;
				break;
		default:
			return 0;
				break;	
	}
	
	if (gracz_zycie > 0 && zbig_zycie > 0) {	//powrot do wyobru oreza
		cout << "Wynik stracia:\nZycie gracza: " << gracz_zycie << ". Zycie Zbiga: " << zbig_zycie << ".\n"
			<< "Walczymy dalej!\n\n";
			
			walka(kto_pierwszy);
	}	
}
