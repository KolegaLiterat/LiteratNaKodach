#include <iostream>

#define ROZMIAR 6
#define KOLUMNY 3
#define WIERSZE 3

using namespace std;

int main()
{
	int tablica[ROZMIAR];
	int k, i, w;
	
	for (i = 0; i < ROZMIAR; i++) {
		cout << "Podaj wartosc:\n";
		cin >> tablica[i];
	}
	
	i = 0;
	for (w = 0; w < WIERSZE; w++) {
		for (k = 0; k < KOLUMNY; k++) {
			cout << "| " << tablica[i] << " |";
			i++;	
		}
		cout << "\n";
	}
}
