/*Zestaw zada� nie koniecznie �yciowych, czyli napisz program, kt�ry:

3. prosi u�ytkownika o podanie 10 liczb, po czym wypisuje te liczby w kolejno�ci od najmniejszej do najwi�kszej.
4. j/w z tym, �e podaje namniejsz� i najwi�ksz� liczb� w tablicy
5. prosi o wpisanie przez u�ytkownika 10 liczb i wypisuje kt�ra liczba ile razy wyst�pi�a.
6. prosi o wpisanie 10 liczb, po czym wypisuje tylko liczby parzyste.
7. prosi o wpisanie 10 liczb i wypisuje drug� w kolejno�ci najwi�ksz� liczb�.
8. wczytuje liczby do macierzy 3x3 i po wszystkim wypisuje macierz.

Powy�sze zadania prosz� zrealizowa� u�ywaj�c przy tym tablic. Liczby dla uproszczenia mog� by� ca�kowite.*/
#include <iostream>

#define ROZMIAR_1 10
#define ROZMIAR_2 7

using namespace std;

void zadanie_1();
void zadanie_2();
void zadanie_3();
void zadanie_4();
void zadanie_5();
void zadanie_6();
void zadanie_7();
void zadanie_8();

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
			zadanie_3();
			break;
		case 4:
			//zadanie_4();
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

void zadanie_1()	//1. wczytuje 10 liczb do tablicy, po czym wypisuje wszystkie liczby zapisane w tablicy.
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

void zadanie_2()	//2. prosi u�ytkownika o podanie 7 liczb po czym wypisuje te liczby w odwrotnej kolejno�ci ni� je wprowadzono.
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

void zadanie_3()
{
	int zadanie_3[ROZMIAR_1]; 
	int i;
	
	cout << "Wartosci podaje uzytkownik.\n";
	
	for (i = 0; i < ROZMIAR_1; i++) {
		cout << "Podaj wartosc\n";
		cin >> zadanie_3[i];
	}
	
	cout << "Poszukiwania najmniejszej wartosci.\n";
	
	for (i = 0; i < ROZMIAR_1; i++) {
		cout << i << " wartosc w tablicy to " << zadanie_3[i] << "\n";
	}	
}
