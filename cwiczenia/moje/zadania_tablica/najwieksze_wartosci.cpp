#include <iostream>

using namespace std;

int main()
{
	int tablica[5] = {4, 4, 4, 4, 4};
	int minus = 1, i;
	int *pierwsza = &tablica[4], *druga = &tablica[4 - minus];
	
	//tablica bedzie posortowana od najmniejsze wartosci do najwiekszej; jezeli zostana wpisane dokladnie takie same wartosci to w zerowy element tablicy bedzie dokladnie taki sam, jak ostatni element;
	if (tablica[0] == tablica[4]) {
		cout << "Jedyna wartoscia w tablicy jest " << tablica[0] << "\n";
	} else {
		for (i = 0; i < 5; i++) {
			if (*pierwsza != *druga) {
				cout << "Pierwsza najwieksza wartosc to " << *pierwsza <<
					".\nDruga najwikesza wartosc to " << *druga << "\n";
				break;
			} else if (*pierwsza == *druga) {
				minus++;
				druga = &tablica[4 - minus];
			}
		}
	}
}
