#include <iostream>

using namespace std;

void test(int *kontrola);

int main(int argv, char *argc[])
{
	
	int rozmiar, reszta, obieg, i;
	int j = 0, krok = 1;
	int *licznik, *mianownik;	

	cout << "Ile ulamkow chcesz sprawdzic?:\n";
	cin >> rozmiar;
	
	test(&rozmiar);
	
	licznik = new int[rozmiar - 1];
	mianownik = new int[rozmiar - 1];

	obieg = rozmiar;
	
	while (obieg > 0) {
		if (krok % 2 == 1) {
			for (i = j; i < j + 1; i++) {
				cout << "Podaj licznik:\n";
				cin >> licznik[i];
				
				test(&licznik[i]);				
	
				krok++;
			}	
		} else if (krok % 2 == 0) {
			for (i = j; i < j + 1; i++) {
				cout << "Podaj mianownik:\n";
				cin >> mianownik[i];

				test(&mianownik[i]);				

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
void test(int *kontrola)
{
	if (*kontrola < 0) {
		cout << "Blad! Podana wartosc jest mniejsza od 0!\n";
		exit(0);
	} 
}
