#include <iostream>
using namespace std;

int main()
{
	float kasa; //wypada za�o�y�, �e b�dzie warto�� 0.7
	bool kara = true; //nie mam poj�cia, czy dobrze tego u�y�em; w ksi��ce brakuje mi dobrego przyk�adu

	cout << "Ile kosztuje utrzymanie biura?\n? "; //wpisanie warto�ci do kasa
	cin >> kasa;
	cout << "\n";
	/* Troche bardziej rozbudowana funkcja, takie male cwiczenie, bo chcialem sprawdzicz czy potrafie cos takiego zrobic;
	Moja walka z tym trwala bardzo dlugo, ale nauczylem sie kliku rzeczy. Przede wszystkim tego, ze mam patrzec na to, co pisze i uklada program w sposob logiczny dlatego:*/	

	if (kasa <= 0) { //sprwadzam, czy wartosc kasa jest wieksza lub rowna od zera
		cout <<	"Przykro mi, ale wartosci ujemnej lub zera nie wpiszesz\n"
			"Zera nie ma bo biuro zawsze co� kosztuje, a na siebie nie zarabie... (c) Thinker"
			"Kara musi byc..." << endl;
			kara;
	} else if (kasa == 866) {
		cout << "Skad masz takie informacje? O.o\n"
			"Widziales magiczna kartke?" << endl;
	} else if (kasa < 866) { //dop�ki wpisana warto�� jest mniejsza, ni� 866 wy�wietlany jest ten tekst
		cout <<	"Uzytkowniku! Do dobrej odpowiedzi brakuje Ci " << 866 - kasa << "." << " Kara musi byc..." << endl;
		kara; //dostajesz kare
	} else if (kasa > 866) { //dop�ki warto�� kasa jest wi�ksza od 866, wy�wietlany jest ten tekst
		cout <<	"Uzytkowniku! Jest za duzo o " << kasa - 866 << "." << " Kara musi byc..." << endl;
		kara;
	}
	
	if (kara) { //rezygnuj� ze switcha; jako� nie widz� sensu w sprawdzaniu switchem prawda-fa�sz
		cout << "\n"
			"BACH! MACZUGA W GLOWE!" << endl;
	} else {
		cout << "\n"
			"BRAWO! UCIEKASZ PRZED MACZUGA!" << endl;
	}
}
