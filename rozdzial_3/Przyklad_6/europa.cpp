#include <iostream>
#include "nagl.h"

using namespace std;

int ile_europejczykow = 8;

void funkcja_francuska()
{
	cout << "Jestem w Paryzu! ***********\n"
		<< "Na swiecie jest " << ile_murzynow << " murzynow, oraz " << ile_europejczykow << " europejczykow\n";
	
	funkcja_egipska();
}

void funkcja_niemiecka(void) //i nagle pojawia siê VOID w argumentach!
{
	cout << "Jestem w Berlinie! **********\n"
		<< "Na swiecie jest " << ile_murzynow << " murzynow, oraz " << ile_europejczykow << " europejczykow\n";
	
	funkcja_kenijska();
}
