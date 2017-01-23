#include <iostream>

#define ROZMIAR 6

using namespace std;

void sortowanie(int tablica[]);
void wystapienia(int tablica[]);

int main()
{
	int tablica[ROZMIAR] = {1, 1, 5, 6, 1, 6};
	
	cout << "Mysle nad wystapieniami...";

	sortowanie(tablica);
}

void sortowanie(int tablica[])
{
	int a = 0, b = 1, c;

	while (a < ROZMIAR) {
		if (tablica[a] <= tablica[b] && b < ROZMIAR) {
			b++;
		} else if (tablica[a] >= tablica[b] && b < ROZMIAR) {
			c = tablica[a];
			tablica[a] = tablica[b];
			tablica[b] = c;
		} else if (b == ROZMIAR) {
			a++;
			b = a + 1;		
		}
	}
	
	wystapienia(tablica);
}

void wystapienia(int tablica[])
{
	int ile[ROZMIAR];
	
	int a = 0, b = 1, i;

	for (i = 0; i < ROZMIAR; i++) {
		ile[i] = 1;
	}	
	
	i = 0;

	while (a < ROZMIAR) {
		if (tablica[a] == tablica[b] && b < ROZMIAR) {
			ile[i]++;
			b++;
		} else if (tablica[a] != tablica[b] && b < ROZMIAR) {
			b++;
		} else if (b == ROZMIAR) {
			a++;
			b = a + 1;
		}
	}

	i = 0;
	for (a = 0; a < ROZMIAR; a++) {
		i++;
		if (tablica[a] != tablica[a + 1]) {
			cout << "Wartosc " << tablica[a] << " wystapila " << ile[i] << " razy\n";
			i++;
		}
	}
}
