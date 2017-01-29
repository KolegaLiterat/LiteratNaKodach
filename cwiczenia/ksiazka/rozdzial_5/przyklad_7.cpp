#include <iostream>

using namespace std;

void funkcja_wska(int *wsk, int rozmiar);
void funkcja_tab(int tab[], int rozmiar);
void funkcja_wsk2(int *wsk, int rozmiar);

int main()
{
	int tafla[4] = {5, 10, 15, 20};
	
	funkcja_tab(tafla, 4);
	funkcja_wska(tafla, 4);
	funkcja_wsk2(tafla, 4);	
}
void funkcja_tab(int tab[], int rozmiar)
{
	int i;
	
	cout << "Wewnatrz funkcji funkcja_tab\n";
	
	for (i = 0; i < rozmiar; i++) {
		cout << tab[i] << "\t";
	}
}
void funkcja_wska(int *wsk, int rozmiar)
{
	int i;
	
	cout << "\nWewnatrz funkcji funkcja_wska\n";
	
	for (i = 0; i < rozmiar; i++) {
		cout << *(wsk++) << "\t";
	}
}
void funkcja_wsk2(int *wsk, int rozmiar)
{
	int i;
	
	cout << "\nWewnatrz funkcji funkcja_wsk2\n";
	
	for (i = 0; i < rozmiar; i++) {
		cout << wsk[i] << "\t";
	}
}
