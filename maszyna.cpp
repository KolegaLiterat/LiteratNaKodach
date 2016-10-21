#include <iostream>
using namespace std;

int main()
{
	float cena, gotowka, kwota;
	int batonik, ilosc;
 	
	cout << "Jaki chcesz batonik?\n"
		"[1] MARS \n[2] SNICKERS\n[3] BOUNTY\n[4] PRINCE POLO\n[5] KINDER\n"
		"Po prostu wpisz liczbe\n? ";
	cin >> batonik;
	
	switch (batonik) {
		case 1:
		cout << "Twoj wybor to baton MARS, ktory kosztuje 1,49 zl";
		cena = 1.49;
		break;
		
		case 2:
		cout << "Twoj wybor to baton SNICKERS, ktory kosztuje 1,60 zl";
		cena = 1.60;
		break;
		
		case 3:
		cout << "Twoj wybor to baton BOUNTY, ktory kosztuje 1,78 zl";
		cena = 1.78;
		break;
		
		case 4:
		cout << "Twoj wybor to baton PRINCE POLO, ktory kosztuje 2,29 zl";
		cena = 2.29;
		break;

		case 5:
		cout << "Twoj wybor to baton KINDER, ktory kosztuje 2,54 zl";
		cena = 2.54;
		break;

		default:
		cout << "Wybierz cyfre od 1 do 5!";
		exit (0);
	}	  	
		
	cout << "\nIle chcesz batonikow? ";
	cin >> ilosc;
	
	if (ilosc < 0) {
		cout << "\nSkoro nie chcesz batonikow, to zadnych nie dostaniesz!";
		exit (0);
	} else {
		cout << "\n" << ilosc << " batonikow bedzie kosztowalo " << ilosc * cena << " zl.";
	}
	
	cout << "\nPrzszedl czas zaplaty! Wrzuc pieniadze!\n? ";
	cin >> kwota;
	
	if (kwota < 0) {
		cout << "\nKRADNIESZ PINIONDZE Z AUTOMATU Z BATONAMI!\n"
			"NIE WSTYD CI?????";
		exit (0);
	}
	
	while (kwota < ilosc * cena) {
		cout << "\nBarakuje jeszcze " << ilosc * cena - kwota << " zl.\nWRZUC WINCYJ!\n? ";
		cin >> gotowka;
		kwota = kwota + gotowka;	
	}
	
	if (kwota > ilosc * cena) {
		cout << "\nOto twoje " << ilosc << " batonikow i Towja reszta " << kwota - ilosc * cena << " zl\n";
		while (ilosc > 0) {
			cout << "=";
			ilosc--;
		}
	} else if (kwota = ilosc * cena) {
		cout << "\nBierz batony, bo reszty NIE MA!\n";
		while (ilosc > 0) {
			cout << "=";
			ilosc--;	
		}	
	} 
}
