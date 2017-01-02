#include <iostream>

#define ROZMIAR 4
using namespace std;

void sortowanie(int tablica[]);

int main()
{
	int tablica[ROZMIAR] = {123, 45, -6, 11};
	
	int i;

	cout << "Mysle nad sortowaniem...";
	
	sortowanie(tablica);
	
	for (i = 0; i < 4; i++) {
		cout << i << " wartosc w tablicy to " << tablica[i] << "\n";
	}
	
}

void sortowanie(int tablica[])
{
	static	int a = 0, b = 1;
	int c;	

	while (a < ROZMIAR) {
		if (tablica[a] <= tablica[b] && b < ROZMIAR) {
			b++;

			sortowanie(tablica);
		} else if (tablica[a] >= tablica[b] && b < ROZMIAR) {
			c = tablica[a];
			tablica[a] = tablica[b];
			tablica[b] = c;
		
			sortowanie(tablica);
		} else if (b == ROZMIAR) {
			a++;
			b = a + 1;		
		
			sortowanie(tablica);
		}
	}
}
