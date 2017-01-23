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
	int i, wyst = 1;
	
	for (i = 0; i < ROZMIAR; i++) {
		if (tablica[i] == tablica[i + 1]) {
			wyst++;
		} if (tablica[i] != tablica[i + 1]) {
			cout << "Liczba " << tablica[i] << " wystapila " << wyst << " razy.\n";
			wyst = 1;
		} 
	}
}
