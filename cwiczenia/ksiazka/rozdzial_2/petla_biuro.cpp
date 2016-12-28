#include <iostream>
using namespace std;

int main()
{
	int liczba, suma = 0, wys = 0;

	do {
		cout << "Podaj liczbe:\n? ";
		cin >> liczba;
		wys = wys + 1;
		suma = suma + liczba;
	} while (liczba > 0);
	
	cout << "Suma: " << suma << "\n";
	cout << "Srednia: " << suma / (wys - 1) << "\n";
}

