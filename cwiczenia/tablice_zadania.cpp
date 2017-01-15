/*Zestaw zada� nie koniecznie �yciowych, czyli napisz program, kt�ry:

6. prosi o wpisanie 10 liczb, po czym wypisuje tylko liczby parzyste.
7. prosi o wpisanie 10 liczb i wypisuje drug� w kolejno�ci najwi�ksz� liczb�.
8. wczytuje liczby do macierzy 3x3 i po wszystkim wypisuje macierz.

Powy�sze zadania prosz� zrealizowa� u�ywaj�c przy tym tablic. Liczby dla uproszczenia mog� by� ca�kowite.*/
#include <iostream>

#define ROZMIAR_1 10
#define ROZMIAR_2 7

using namespace std;

//funkcje powiazanie z zadaniami
void zadanie_1();
void zadanie_2();
void zadanie_3i4i5(int wybor);
void zadanie_6();
void zadanie_7();
void zadanie_8();

//funkcje pomocnicze
void sortowanie(int zadanie_3i4i5[]);
void wystepowanie (int zadanie_3i4i5[]);

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
			zadanie_3i4i5(wybor);
			break;
		case 4:
			zadanie_3i4i5(wybor);
			break;
		case 5:
			zadanie_3i4i5(wybor);
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

//2. prosi u�ytkownika o podanie 7 liczb po czym wypisuje te liczby w odwrotnej kolejno�ci ni� je wprowadzono.

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
3. prosi u�ytkownika o podanie 10 liczb, po czym wypisuje te liczby w kolejno�ci od najmniejszej do najwi�kszej.
4. j/w z tym, �e podaje namniejsz� i najwi�ksz� liczb� w tablicy
5. prosi o wpisanie przez u�ytkownika 10 liczb i wypisuje kt�ra liczba ile razy wyst�pi�a.

*/

void zadanie_3i4i5(int wybor)
{
	int zadanie_3i4i5[ROZMIAR_1]; 
	int i;
	
	cout << "Wartosci podaje uzytkownik.\n";
	
	for (i = 0; i < ROZMIAR_1; i++) {
		cout << "Podaj wartosc\n";
		cin >> zadanie_3i4i5[i];
	}
	
	cout << "Rusza sortowanie!\n";
	
	sortowanie(zadanie_3i4i5);
	
	switch (wybor) {
		case 3:
			for (i = 0; i < ROZMIAR_1; i++) {
				cout << i << " wartosc w tablicy to " << zadanie_3i4i5[i] << "\n";
			}
			break;
		case 4:
			//WA�NE: Zastosowa�em tutaj sortownie od NAJMNIEJSZE do NAJWI�KSZEJ warto�ci. Zmiana systemu sortowania wymaga zmiany komunikatu lub indeks�w tablicy.
			cout << "Najmniejsza wartosc w tablicy to " << zadanie_3i4i5[ROZMIAR_1 - ROZMIAR_1] << "\n"
				<< "Najwi�szka warto�� w tablicy to " << zadanie_3i4i5[ROZMIAR_1 - 1] << "\n";
			break;
		case 5:
			wystepowanie(zadanie_3i4i5);
		default:
			break;
	}
}

//funkcje pomocnicze

void sortowanie(int zadanie_3i4i5[])
{
	int a = 0, b = 1, c;

	while (a < ROZMIAR_1) {
		if (zadanie_3i4i5[a] <= zadanie_3i4i5[b] && b < ROZMIAR_1) {
			b++;
		} else if (zadanie_3i4i5[a] >= zadanie_3i4i5[b] && b < ROZMIAR_1) {
			c = zadanie_3i4i5[a];
			zadanie_3i4i5[a] = zadanie_3i4i5[b];
			zadanie_3i4i5[b] = c;
		} else if (b == ROZMIAR_1) {
			a++;
			b = a + 1;		
		}
	}
}
void wystepowanie(int zadanie_3i4i5[])
{
	int i, wyst = 1;
	
	for (i = 0; i < ROZMIAR_1; i++) {
		if (zadanie_3i4i5[i] == zadanie_3i4i5[i + 1]) {
			wyst++;
		} if (zadanie_3i4i5[i] != zadanie_3i4i5[i + 1]) {
			cout << "Liczba " << zadanie_3i4i5[i] << " wystapila " << wyst << " razy.\n";
			wyst = 1;
		} 
	}
}

