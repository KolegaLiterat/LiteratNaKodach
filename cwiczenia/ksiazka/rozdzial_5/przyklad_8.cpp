#include <iostream>

using namespace std;

void pokazywacz(const int *wsk, int ile);
void zmieniacz(int *wsk, int ile);

int main()
{
	int tablica[4] = {110, 120, 130, 140};
	
	pokazywacz(tablica, 4);
	zmieniacz(tablica, 4);
	pokazywacz(tablica, 4);
	
	cout << "Dla potwierdzenia tablica[3] = " << tablica[3] << "\n";
}
void pokazywacz(const int *wsk, int ile)
{
	int i;	
	
	cout << "Dziala pokazywacz\n";
	
	for (i = 0; i < ile; i++, wsk++) {
		cout << "Element nr " << i << " ma wartosc " << *wsk << "\n";
	}
}
void zmieniacz(int *wsk, int ile)
{
	int i;

	cout << "Dziala zmieniacz\n";

	for (i = 0; i < ile; i++, wsk++) {
		*wsk += 500;
		cout << "Element nr " << i << " ma wartosc " << *wsk << "\n";
	}
}
