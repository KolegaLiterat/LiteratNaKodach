#include <iostream>

using namespace std;

int main()
{
	int tablica[3] = {0, 1, 2};
	int *wsk = &tablica[0];
	int i;
	
	cout << "Bez ()\n";
	
	for (i = 0; i < 3; i++) {
		cout << "Wartosc " << *wsk << "\n";
		*wsk++;
	}
	
	cout << "Z ()\n";	

	wsk = &tablica[0];

	for (i = 0; i < 3; i++) {
		cout << "Wartosc " << *wsk << "\n";
		(wsk++);
	}
}
