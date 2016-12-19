#include <iostream>

using namespace std;

int main()
{
	int tablica[3];
	int i;
	
	for (i = 0; i < 3; i++) {
		cout << "Wpisz dane do tablicy\n";
		cin >> tablica[i];
	}

	do {
		
		cout << "Podaj adres tablicy: \n";
		cin >> i;
		
		if (i >= 3) {
			cout << "Nie ma takiego adresu!";
			break;
			return 0;
		}
		
		cout << "Wartosc wynosci " << tablica[i] << "\n";
	} while (i < 3);
}
