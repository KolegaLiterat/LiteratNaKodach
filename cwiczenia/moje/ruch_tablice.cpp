#include <iostream>
#define ROZMIAR 10

using namespace std;

void ruch(int tablica[], int przod, int tyl);

int main()
{
	int tablica[ROZMIAR];
	int i, przod, tyl;
		
	for (i = 0; i < ROZMIAR; i++) {
		tablica[i] = -2 * 4 + i;
		cout << i << " wartosc wynosci " << tablica[i] << "\n";
	}

	cout << "Poruszamy sie po dziesiecoelementowe tablicy, ktora sklada sie z liczb calkowitych. Podaj od ile pierwszy wartosci chcesz wyswietlic od poczatku:\n";
	cin >> przod;
	cout << "A teraz ile wartosci od konca:\n";
	cin >> tyl;
	
	if (przod > ROZMIAR || przod < 0 || tyl < 0 || tyl > ROZMIAR) {
		cout << "Jestem poza tablica!\n";
		return 0; 
	} else {
		ruch(tablica, przod, tyl);
	}

}
void ruch(int tablica[], int przod, int tyl)
{
	int i;

	cout << "Wyswietlenie wartosci od przodu:\n";
	
	for (i = 0; i < przod; i++) {
		cout << i << " wartosc wynosi " << tablica[i] << "\n"; 
	}
	
	cout << "Wystwietlanie wartosci od konca:\n";
	
	for (i = ROZMIAR - 1; i > ROZMIAR - 1 - tyl; i--) {
		cout << i << " wartosc wynosi " << tablica[i] << "\n";
	}
}
