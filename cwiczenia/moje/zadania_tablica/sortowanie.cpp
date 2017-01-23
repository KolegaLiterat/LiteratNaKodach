#include <iostream>

#define ROZMIAR 4
using namespace std;

void sortowanie(int tablica[]);

int main()
{
	int tablica[ROZMIAR] = {-10, 0, -11, 2};
	
	int i;

	cout << "Mysle nad sortowaniem...";
	
	sortowanie(tablica);
	
	for (i = 0; i < 4; i++) {
		cout << i << " wartosc w tablicy to " << tablica[i] << "\n";
	}
	
}

void sortowanie(int tablica[])
{
	int a = 0, b = 1;
	int c;	


	for (a = 0; a < ROZMIAR; a++) {
		if (tablica[a] >= tablica[a + 1]) {
			b = tablica[a];
			tablica[a] = tablica[a + 1];
			tablica[a + 1] = c;
		}
			
	}	


	/*while (a < ROZMIAR) {
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
	}*/
}
