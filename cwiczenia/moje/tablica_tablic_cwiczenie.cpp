#include <iostream>

using namespace std;

#define MAKS_WYBOR 2

//tablica ustawiona na szytwno, dlatego wpisuje obie wartosci; moglbym wpisac tylko wartosc kolumn i tez by zadzialalo
void wiersze(int tablica[2][4]);
void macierz(int tablica[2][4]);

int main()
{
	int tablica[2][4] = {0, 1, 2, 3, 4, 5, 6, 7}; //tablica ma 8 elementow, bo ma dwa wiersze i cztery kolumny, co daje 8 komorek (2 * 4 = 8);
	int wybor;

	
	cout << "Co robimy z tablica?\n"
		"[1] Wyswietlamy wiersze oddzielnie\n"
		"[2] Wyswietlamy macierz\n";
	cin >> wybor;
	
	if (wybor < 1 || wybor > MAKS_WYBOR) {
		cout << "Blad! Do podanej wartosci nie zostala przypisana zadna funkcja!\n";
	} else {
		switch (wybor) {
			case 1:
				wiersze(tablica);
				break;
			case 2:
				macierz(tablica);
				break;
			default:
				return 0;
				break;
		}
	}
}
void wiersze(int tablica[2][4])
{
	int i, j;
	
	cout << "Wiersz 0\n";	

	for (i = 0, j = 0; j < 4; j++) {
		cout << "Wartosc tablicy w adresie " << i << ", " << j << " wynosi " << tablica[i][j] << "\n";
	}

	cout << "Wiersz 1\n";
	
	for (i = 1, j = 0; j < 4; j++) {
		cout << "Wartosc tablicy w adresie " << i << ", " << j << " wynosi " << tablica[i][j] << "\n";
	}

}
void macierz(int tablica[2][4]) 
{
	int i, j;
	
	cout << "Wyswietlenie tablicy w formie macierzy\n";

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 4; j++) {
			cout << "| " << tablica[i][j] << " |";
		}
		cout << "\n";	
	}
		
}
