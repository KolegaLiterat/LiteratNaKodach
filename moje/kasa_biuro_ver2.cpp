#include <iostream>
#define UTRZYMANIE_BIURA 866

using namespace std;

int main()
{
	float kasa; //wypada za�o�y�, �e b�dzie warto�� 0.7
	bool kara = true; //nie mam poj�cia, czy dobrze tego u�y�em; w ksi��ce brakuje mi dobrego przyk�adu

	cout << "Ile kosztujeuje utrzymanie biura?\n? "; //wpisanie warto�ci do kasa
	cin >> kasa;
	cout << "\n";
	/* Troche bardziej rozbudowana funkcja, takie male cwiczenie, bo chcialem sprawdzicz czy potrafie cos takiego zrobic;
	Moja walka z tym trwala bardzo dlugo, ale nauczylem sie kliku rzeczy. Przede wszystkim tego, ze mam patrzec na to, co pisze i uklada program w sposob logiczny dlatego:*/	

	if (kasa <= 0) { //sprwadzam, czy wartosc kasa jest wieksza lub rowna od zera
		cout <<	"Przykro mi, ale wartosci ujemnej lub zera nie wpiszesz\n"
			"Zera nie ma bo biuro zawsze co� kosztuje, a na siebie nie zarabie... (c) Thinker"
			"Kara musi byc..." << endl;
			kara = 1;
	} else if (kasa == UTRZYMANIE_BIURA) {
		cout << "Skad masz takie informacje? O.o\n"
			"Widziales magiczna kartke?" << endl;
		kara = 0;
	} else if (kasa < KOSZT) { //dop�ki wpisana warto�� jest mniejsza, ni� 866 wy�wietlany jest ten tekst
		cout <<	"Uzytkowniku! Do dobrej odpowiedzi brakuje Ci " << UTRZYMANIE_BIURA - kasa << "." << " Kara musi byc..." << endl;
		kara = 1; //dostajesz kare
	} else if (kasa > KOSZT) { //dop�ki warto�� kasa jest wi�ksza od 866, wy�wietlany jest ten tekst
		cout <<	"Uzytkowniku! Jest za duzo o " << kasa - UTRZYMANIE_BIURA << "." << " Kara musi byc..." << endl;
		kara = 1;
	}
	
	if (kara) { //rezygnuj� ze switcha; jako� nie widz� sensu w sprawdzaniu switchem prawda-fa�sz
		cout << "\n"
			"BACH! MACZUGA W GLOWE!" << endl;
	} else {
		cout << "\n"
			"BRAWO! UCIEKASZ PRZED MACZUGA!" << endl;
	}
}
