#include <iostream>
#include <cstdlib>
#include <ctime>
#include "nagl.h"

using namespace std;

int losowanie()
{
	int rzut, orz_resz;

	srand(time(NULL));
	
	cout << "Przyszedl czas na rozstrzygniecie sporo! Kto zaczyna? Wybierasz orla, czy reszke?\n"
		<< "[1] Orzel\n"
		<< "[2] Reszka\n";
	cin >> orz_resz;
	
	rzut = (rand() % 2) + 1;	//rzut rowny 0 wypadl orzel, rzut rowny 1 wypadla reszta;
	
	if ((orz_resz == 1) && (rzut == 1) || (orz_resz == 2) && (rzut == 2)) { 
		cout << "Brawo! Zaczynasz";
		return 1;
	} else if ((orz_resz = 1) && (rzut = 2) || (orz_resz == 2) && (rzut == 1)) {
		cout << "Zbig ju¿ szykuje siê do ataku...";
		return 2;
	}
}
