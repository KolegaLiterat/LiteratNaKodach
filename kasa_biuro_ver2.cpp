#include <iostream>
using namespace std;

int main()
{
	float kasa; //wypada za³o¿yæ, ¿e bêdzie wartoœæ 0.7
	bool kara = true; //nie mam pojêcia, czy dobrze tego u¿y³em; w ksi¹¿ce brakuje mi dobrego przyk³adu

	cout << "Ile kosztuje utrzymanie biura?\n? "; //wpisanie wartoœci do kasa
	cin >> kasa;
	cout << "\n";
	/* Troche bardziej rozbudowana funkcja, takie male cwiczenie, bo chcialem sprawdzicz czy potrafie cos takiego zrobic;
	Moja walka z tym trwala bardzo dlugo, ale nauczylem sie kliku rzeczy. Przede wszystkim tego, ze mam patrzec na to, co pisze i uklada program w sposob logiczny dlatego:*/	

	if (kasa <= 0) { //sprwadzam, czy wartosc kasa jest wieksza lub rowna od zera
		cout <<	"Przykro mi, ale wartosci ujemnej lub zera nie wpiszesz\n"
			"Zera nie ma bo biuro zawsze coœ kosztuje, a na siebie nie zarabie... (c) Thinker"
			"Kara musi byc..." << endl;
			kara;
	} else if (kasa == 866) {
		cout << "Skad masz takie informacje? O.o\n"
			"Widziales magiczna kartke?" << endl;
	} else if (kasa < 866) { //dopóki wpisana wartoœæ jest mniejsza, ni¿ 866 wyœwietlany jest ten tekst
		cout <<	"Uzytkowniku! Do dobrej odpowiedzi brakuje Ci " << 866 - kasa << "." << " Kara musi byc..." << endl;
		kara; //dostajesz kare
	} else if (kasa > 866) { //dopóki wartoœæ kasa jest wiêksza od 866, wyœwietlany jest ten tekst
		cout <<	"Uzytkowniku! Jest za duzo o " << kasa - 866 << "." << " Kara musi byc..." << endl;
		kara;
	}
	
	if (kara) { //rezygnujê ze switcha; jakoœ nie widzê sensu w sprawdzaniu switchem prawda-fa³sz
		cout << "\n"
			"BACH! MACZUGA W GLOWE!" << endl;
	} else {
		cout << "\n"
			"BRAWO! UCIEKASZ PRZED MACZUGA!" << endl;
	}
}
