#include <iostream>

#define ROZMIAR 6
#define KOLUMNY 3
#define WIERSZE 3

using namespace std;

int main()
{
	int tablica[ROZMIAR] = {1, 2, 3, 4, 5, 6};
	int i = 0, k, w = 0; 
	
	/*for (i = 0; i < ROZMIAR; i++) {
		cout << "Podaj wartosc:\n";
		cin >> tablica[i];
	}*/
	
	for (w = 0; w < WIERSZE; w++) {
		for (k = 0; k < KOLUMNY; k++) {
			cout << "| " << tablica[i] << " |";
			i++;
		}
		cout << "\n";
	}
}
