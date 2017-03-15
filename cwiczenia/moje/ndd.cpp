#include <iostream>

using namespace std;

int main(int argv, char *argc[])
{
	int krok = 1;
	int rozmiar, reszta, obieg, a, b, i, j = 0;
	int *licznik, *mianownik;	

	cout << "Ile ulamkow chcesz sprawdzic?:\n";
	cin >> rozmiar;
	
	licznik = new int[rozmiar - 1];
	mianownik = new int[rozmiar - 1];

	obieg = rozmiar;
	
	while (obieg > 0) {
		if (krok % 2 == 1) {
			for (i = j; i < j + 1; i++) {
				cout << "Podaj licznik:\n";
				cin >> licznik[i];
			
				krok++;
			}	
		} else if (krok % 2 == 0) {
			for (i = j; i < j + 1; i++) {
				cout << "Podaj mianownik:\n";
				cin >> mianownik[i];

				krok++;
			}
	obieg--;
	j++;
		}
	}

	for (i = 0; i < rozmiar; i++) {
		cout << licznik[i] << "/" << mianownik[i] << "\n";
	}
}
