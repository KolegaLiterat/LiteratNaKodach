#include <iostream>

using namespace std;

int main()
{
	int tablica[5];
	int *wsk_czer, *wsk_ziel;
	int i;
	
	wsk_czer = &tablica[3];
	cout << "Mamy piecioelementowa tablice\n"
		"Wskaznik czerwony pokazuje na element o indeksie 3\n"
		"Na ktory element ma pokazywac wskaznik zielony? (0 - 4)\n";
	cin >> i;
	
	if (i < 0 || i > 4) {
		cout << "Nie ma takiego elementu w tej tablicy!\n";
	} else {
		wsk_ziel = &tablica[i];
		cout << "Z przeprowadzonego porownywanie wskaznikow'n"
			"czerwonego z zielonym wynika, ze:\n";
	}

	//to sie uruchamia zawsze, nawet jezeli uzytkownik poda wartosc i, ktora wyleci poza tablice; przyklad jest z ksiazki i troche szkoda, ze nie ma wymyslonej formuly zabezpiecznia tego elementu	
	if (wsk_czer > wsk_ziel) {
		cout << "Zielony pokazuje na element blizej poczatku tablicy\n";
	} else if (wsk_czer < wsk_ziel) {
		cout << "Zielony pokazuje na element o wyzszym indeksie\n";
	} else {
		cout << "Zielony i czerwony pokazuja na to samo\n";
	}
}
