#include <iostream>

using namespace std;

void sortowanie(int tablica[]);

int main()
{
	int tablica[4] = {4, 2, 5, 10};
	
	int i;

	cout << "Mysle nad sortowaniem...";
	
	sortowanie(tablica);
	
}

void sortowanie(int tablica[])
{
	static	int a = 0, b = 1;
	int c;	

	if (tablica[a] < tablica[b] && b < 4) {
		b++;

		sortowanie(tablica);
	} else if (tablica[a] > tablica[b] && b < 4) {
		c = tablica[a];
		tablica[a] = tablica[b];
		tablica[b] = c;
		
		sortowanie(tablica);
	} else if (tablica[a] < tablica[b] && tablica[b] > tablica[b + 1] || tablica[b] < tablica[b + 1] && b < 4) {
		a++;
		
		sortowanie(tablica);
	}

	for (a = 0; a < 4; a++) {
		cout << a << " wartosc w tablicy to " << tablica[a] << "\n";
	}

}
