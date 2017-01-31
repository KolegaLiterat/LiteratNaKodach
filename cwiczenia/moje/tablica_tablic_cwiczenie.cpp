#include <iostream>

using namespace std;

#define MAKS_WYBOR 1

void wiersze();

int main()
{
	int wybor;
	
	cout << "Co robimy z tablica?\n"
		"[1] Wyswietlamy wiersze oddzielnie\n";
	cin >> wybor;
	
	if (wybor < 1 || wybor > MAKS_WYBOR) {
		cout << "Blad! Do podanej wartosci nie zostala przypisana zadna funkcja!\n";
	} else {
		switch (wybor) {
			case 1:
				wiersze();
			break;
			default:
				return 0;
			break;
		}
	}
}
void wiersze()
{
	int tablica[2][4] = {0, 1, 2, 3, 4, 5, 6, 7}; //tablica ma 8 elementow, bo ma dwa wiersze i cztery kolumny, co daje 8 komorek (2 * 4 = 8);
	int i, j;
	
	//wyswietlanie wartosci z pierwszego wiersza
	
	cout << "Wiersz 0\n";	

	for (i = 0, j = 0; j < 4; j++) {
		cout << "Wartosc tablicy w adresie " << i << ", " << j << " wynosi " << tablica[i][j] << "\n";
	}

	cout << "Wiersz 1\n";
	
	for (i = 1, j = 0; j < 4; j++) {
		cout << "Wartosc tablicy w adresie " << i << ", " << j << " wynosi " << tablica[i][j] << "\n";
	}

}
