/*Zestaw zadañ nie koniecznie ¿yciowych, czyli napisz program, który:

5. prosi o wpisanie przez u¿ytkownika 10 liczb i wypisuje która liczba ile razy wyst¹pi³a.
6. prosi o wpisanie 10 liczb, po czym wypisuje tylko liczby parzyste.
7. prosi o wpisanie 10 liczb i wypisuje drug¹ w kolejnoœci najwiêksz¹ liczbê.
8. wczytuje liczby do macierzy 3x3 i po wszystkim wypisuje macierz.

Powy¿sze zadania proszê zrealizowaæ u¿ywaj¹c przy tym tablic. Liczby dla uproszczenia mog¹ byæ ca³kowite.*/
#include <iostream>

#define ROZMIAR_1 10
#define ROZMIAR_2 7

using namespace std;

//funkcje powiazanie z zadaniami
void zadanie_1();
void zadanie_2();
void zadanie_3i4(int wybor);
void zadanie_5();
void zadanie_6();
void zadanie_7();
void zadanie_8();

//funkcje pomocnicze
void sortowanie(int zadanie_3i4[]);

int main() {
	int wybor;

	cout << "Podaj numer zadania (od 1 - 8)\n";
	cin >> wybor;

	switch (wybor) {
		case 1:
			zadanie_1();
			break;
		case 2:
			zadanie_2();
			break;
		case 3:
			zadanie_3i4(wybor);
			break;
		case 4:
			zadanie_3i4(wybor);
			break;
		case 5:
			//zadanie_5();
			break;
		case 6:
			//zadanie_6();
			break;
		case 7:
			//zadanie_7();
			break;
		case 8:
			//zadanie_8();
			break;
		default:
			cout << "Az tylu zadan nie bylo...\n";
			return 0;
			break;
	}
}

//1. wczytuje 10 liczb do tablicy, po czym wypisuje wszystkie liczby zapisane w tablicy.

void zadanie_1()
{	
	int zadanie_1[ROZMIAR_1];
	int i, liczba = 3;

	cout << "Najpierw wczytanie liczb.\n";	
	
	for (i = 0; i < ROZMIAR_1; i++) {
		cout << "Wczytuje " << i << " wartosc\n";
	
		zadanie_1[i] = liczba;
		liczba++;
	}
	
	cout << "Teraz wyswietlanie wartosci\n";
	
	for (i = 0; i < ROZMIAR_1; i++) {
		cout << i << " wartosc w tablicy to " << zadanie_1[i] << "\n";
	}
}

//2. prosi u¿ytkownika o podanie 7 liczb po czym wypisuje te liczby w odwrotnej kolejnoœci ni¿ je wprowadzono.

void zadanie_2()	
{
	int zadanie_2[ROZMIAR_2];
	int i;
	
	cout << "Tym razem wartosci wpisuje uzyszkodnik.\n";	

	for (i = 0; i < ROZMIAR_2; i++) {
		cout << "Podaj wartosc:\n";
		cin >> zadanie_2[i];
	}
	
	cout << "Wypisywanie wartosci. Od KONCA tablicy\n";
	
	for (i = 6; i >= 0; i--) {
		cout << i << " wartosc w tablicy to " << zadanie_2[i] << "\n";
	}
}

/*
3. prosi u¿ytkownika o podanie 10 liczb, po czym wypisuje te liczby w kolejnoœci od najmniejszej do najwiêkszej.
4. j/w z tym, ¿e podaje namniejsz¹ i najwiêksz¹ liczbê w tablicy
*/

void zadanie_3i4(int wybor)
{
	int zadanie_3i4[ROZMIAR_1]; 
	int i;
	
	cout << "Wartosci podaje uzytkownik.\n";
	
	for (i = 0; i < ROZMIAR_1; i++) {
		cout << "Podaj wartosc\n";
		cin >> zadanie_3i4[i];
	}
	
	cout << "Poszukiwania najmniejszej wartosci.\n";
	
	sortowanie(zadanie_3i4);
	
	switch (wybor) {
		case 3:
			for (i = 0; i < ROZMIAR_1; i++) {
				cout << i << " wartosc w tablicy to " << zadanie_3i4[i] << "\n";
			}
			break;
		case 4:
			//WA¯NE: Zastosowa³em tutaj sortownie od NAJMNIEJSZE do NAJWIÊKSZEJ wartoœci. Zmiana systemu sortowanie wymaga zmiany komunikatu lub indeksów tablicy.
			cout << "Najmniejsza wartosc w tablicy to " << zadanie_3i4[ROZMIAR_1 - ROZMIAR_1] << "\n"
				<< "Najwiêszka wartoœæ w tablicy to " << zadanie_3i4[ROZMIAR_1 - 1] << "\n";
			break;
		default:
			break;
	}
}

void sortowanie(int zadanie_3i4[])
{
	static	int a = 0, b = 1;
	int c;	

	while (a < ROZMIAR_1) {
		if (zadanie_3i4[a] <= zadanie_3i4[b] && b < ROZMIAR_1) {
			b++;

			sortowanie(zadanie_3i4);
		} else if (zadanie_3i4[a] >= zadanie_3i4[b] && b < ROZMIAR_1) {
			c = zadanie_3i4[a];
			zadanie_3i4[a] = zadanie_3i4[b];
			zadanie_3i4[b] = c;
		
			sortowanie(zadanie_3i4);
		} else if (b == ROZMIAR_1) {
			a++;
			b = a + 1;		
		
			sortowanie(zadanie_3i4);
		}
	}
}
