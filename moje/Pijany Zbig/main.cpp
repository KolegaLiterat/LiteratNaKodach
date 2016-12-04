#include <iostream>
#include "nagl.h"

using namespace std;

int main()
{
	int gracz_wybor, kto_pierwszy;
	
	cout << "Witaj szlachetny wojowniku! Mysle, ze wystarczajaco dlugo przemierzales puste piwnice zamknietej gorzelni!\n"
		<< "Nerwowo trzaskales puste butelki, zagladales do zakurzonych kufli\n"
		<< "W koncu dotarles do miejsca, w ktorym ostatni raz widziano Zbiga\n"
		<< "Okazalo sie, ze gorzej zniosl ten przydlugi spacer i na dodatek wypil jakies mocno sferemtowane, kraftowe piwo\n"
		<< "Teraz mocno wali z lapy, ma magiczne moce, a czase obrazenia sie go nie imaja\n"
		<< "Musisz go pokonac. Obaj macie po 15 punktow zycia. Czas na zabawe!\n"
		<< "Do wyboru masz:\n"
		<< "[1] Tarcze (pochlania 4 punkty obrazen)\n"
		<< "[2] Miecz (zadaje 2 punkty obrazen)\n"
		<< "[3] Kule ognia (zadaje 4 punkty obrazen)\n"
		<< "Co wybierasz?";
	cin >> gracz_wybor;
	
	kto_pierwszy = losowanie();
	
	cout << "\n" << kto_pierwszy << "\n";
	
	//walka(gracz_wybor, kto_pierwszy);
}
