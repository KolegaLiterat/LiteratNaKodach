#include <iostream>

using namespace std;

int main()
{
	float liczba, pierw_1, pierw_2;
	int iteracja;

	cout << "Podaj liczbe: ";
	cin >> liczba;

	pierw_1 = 0;
	pierw_2 = 1;
	iteracja = 0;

	do {
		pierw_1 = (pierw_2 + liczba/pierw_2)/2;
		pierw_2 = pierw_1;
		pierw_1 = 0;
		iteracja = iteracja + 1;
	} while (pierw_2 * pierw_2 != liczba);

	cout << "Poszukiwany pierwiastek to " << pierw_2 << "\nIlosc iteracji wynosi " << iteracja;
}

//wzor: P1 = (PO + L/P0)/2
