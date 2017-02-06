#include <iostream>

using namespace std;

#define MAKS_WYBOR 3
#define WYMIARY 2

//tablica ustawiona na szytwno, dlatego wpisuje obie wartosci; moglbym wpisac tylko wartosc kolumn i tez by zadzialalo
void wiersze(int tablica[2][4]);
void macierz(int tablica[2][4]);
void wpisz();

int main()
{
	int tablica[2][4] = {0, 1, 2, 3, 4, 5, 6, 7}; //tablica ma 8 elementow, bo ma dwa wiersze i cztery kolumny, co daje 8 komorek (2 * 4 = 8);
	int wybor;

	
	cout << "Co robimy z tablica?\n"
		"[1] Wyswietlamy wiersze oddzielnie\n"
		"[2] Wyswietlamy macierz\n"
		"[3] Wpisujemy wartosci i je wyswietlamy\n";
	cin >> wybor;
	
	if (wybor < 1 || wybor > MAKS_WYBOR) {
		cout << "Blad! Do podanej wartosci nie zostala przypisana zadna funkcja!\n";
	} else {
		switch (wybor) {
			case 1:
				wiersze(tablica);
				break;
			case 2:
				macierz(tablica);
				break;
			case 3:
				wpisz();
			default:
				return 0;
				break;
		}
	}
}
void wiersze(int tablica[2][4])
{
	int i, j;
	
	cout << "Wiersz 0\n";	

	for (i = 0, j = 0; j < 4; j++) {
		cout << "Wartosc tablicy w adresie " << i << ", " << j << " wynosi " << tablica[i][j] << "\n";
	}

	cout << "Wiersz 1\n";
	
	for (i = 1, j = 0; j < 4; j++) {
		cout << "Wartosc tablicy w adresie " << i << ", " << j << " wynosi " << tablica[i][j] << "\n";
	}

}
void macierz(int tablica[2][4]) 
{
	int i, j;
	
	cout << "Wyswietlenie tablicy w formie macierzy\n";

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 4; j++) {
			cout << "| " << tablica[i][j] << " |";
		}
		cout << "\n";	
	}
		
}
void wpisz()
{
	int i, j;
		
	cout << "Tablica bedzie dwuwymiarowa\n";	

	//nowa tablica z przechowywaniem wartosci do wymiarow; delete w 106 wierszu
	int *w = new int[WYMIARY];

	for (i = 0; i < WYMIARY; i++) {
		cout << "Podaj wymiar:\n";
		cin >> w[i];
		
		if (i <= 0) {
			cout << "Wymiar tablicy nie moze przybierac takiej wartosci!";
			exit(0);
		}
	}
	
	//deklaracja tablicy w oparciu o wczesniej wpisane wartosci
	int tablica_2[w[0]][w[1]];
	
	for (i = 0; i < w[0]; i++) {
		for (j = 0; j < w[1]; j++) {
			cout << "Wpisz wartosc do tablicy:\n";
			cin >> tablica_2[i][j];
		}
	}
	
	//TODO: powiazanie wypisywania poprzez powiazanie z funkcja macierz(), a nie przez petle for ()	
	cout << "Wypisywanie wartosci z tablicy\n";

	for (i = 0; i < w[0]; i++) {
		for (j = 0; j < w[1]; j++) {
			cout << "| " << tablica_2[i][j] << " |";
		}
		cout << "\n";	
	}
	
	//usuniecie tablicy stworzonej w 79 wierszu
	delete[] w;
}
