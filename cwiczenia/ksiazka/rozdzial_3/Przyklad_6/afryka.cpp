#include <iostream>
#include "nagl.h"

using namespace std;

int ile_murzynow = 9;

int main()
{
	cout << "Poczatek programu\n";
	
	funkcja_francuska();
	funkcja_niemiecka();
	
	cout << "Koniec programu\n";
}

void funkcja_egipska()
{
	cout << "Jestem w Kairze!-------- \n"
		<< "Na swiecie jest " << ile_murzynow << " murzynow, oraz " << ile_europejczykow << " europejczykow\n";
}

void funkcja_kenijska()
{
	cout << "Jestem w Nairobi!-------- \n"
		<< "Na swiecie jest " << ile_murzynow << " murzynow, oraz " << ile_europejczykow << " europejczykow\n";
}
