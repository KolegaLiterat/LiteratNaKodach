#include <iostream>

using namespace std;

int kukulka(int ile);

int main()
{	
	int m; //deklaracja zmiennej m; w ksi��ce ma zdefiniowan� warto�� 20, �eby pokaza�, �e po funkcji zmieni si� na 77
	
	cout << "Zaczynamy" << endl;

	m = kukulka(5); //funkcja zostaje wywolana piec razy, czyli ile ma wartosc 5
	cout << "\nNa koniec m = " << m;
}

int kukulka(int ile) //definicja funkcji
{
	for(int i = 0; i < ile; i++) {
		cout << "\nKu-ku!";	
	}
	return 77;
}
