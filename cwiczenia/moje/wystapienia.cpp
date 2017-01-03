#include <iostream>

#define ROZMIAR 10

using namespace std;

void wystapienia(int tablica[]);

int main()
{
	int tablica[ROZMIAR] = {-1, -1, -1, -1, 2, 5, 1, 8, 9, -1};
	
	cout << "Mysle nad wystapieniami\n";
	
	wystapienia(tablica);
}

void wystapienia(int tablica[])
{
	int ile[ROZMIAR];
		
	int a = 0, b = 1, c;
	
	for (c = 0; c < ROZMIAR; c++) {
		ile[c] = 1;
	}
	

	while (a < ROZMIAR) {
		if (tablica[a] == tablica[b] && b < ROZMIAR) {
			ile[a]++;
			b++;	
		} else if (tablica[a] != tablica[b] && b < ROZMIAR) {
			b++;
		} else if (b == ROZMIAR) {
			a++;
		}
	}	

	a = 0;
	
	for (a = 0; a < ROZMIAR; a++) {
		cout << "Wartosc " << tablica[a] << " wystapila " << ile[a] << " razy\n";
	}
}
