#include <iostream>

using namespace std;

int main()
{
	int zmienna = 8, drugi = 4;
	int *wskaznik;
	
	wskaznik = &zmienna;
	
	cout << "Zmienna = " << zmienna
		<< "\n a odczytana przez wskaznik " << *wskaznik << "\n";
	
	zmienna = 10;

	cout << "Zmienna = " << zmienna
		<< "\n a odczytana przez wskaznik " << *wskaznik << "\n";
	
	*wskaznik = 200;
	
	cout << "Zmienna = " << zmienna
		<< "\n a odczytana przez wskaznik " << *wskaznik << "\n";
	
	wskaznik = &drugi;
	
	cout << "Zmienna = " << zmienna
		<< "\n a odczytania przez wskaznik " << *wskaznik << "\n";
}
