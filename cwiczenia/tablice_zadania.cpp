/*Zestaw zadañ nie koniecznie ¿yciowych, czyli napisz program, który:



8. wczytuje liczby do macierzy 3x3 i po wszystkim wypisuje macierz.

Powy¿sze zadania proszê zrealizowaæ u¿ywaj¹c przy tym tablic. Liczby dla uproszczenia mog¹ byæ ca³kowite.*/
#include <iostream>

#define ROZMIAR_1 10
#define ROZMIAR_2 7

using namespace std;

//funkcje powiazanie z zadaniami
void zadanie_1();
void zadanie_2();
void zadanie_3i4i5i7(int wybor);
void zadanie_6();
void zadanie_7();
void zadanie_8();

//funkcje pomocnicze
void sortowanie(int zadanie_3i4i5i7[]);
void wystepowanie(int zadanie_3i4i5i7[]);
void wartosci(int zadanie_3i4i5i7[]);

int main()
{
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
			zadanie_3i4i5i7(wybor);
			break;
		case 4:
			zadanie_3i4i5i7(wybor);
			break;
		case 5:
			zadanie_3i4i5i7(wybor);
			break;
		case 6:
			zadanie_6();
			break;
		case 7:
			zadanie_3i4i5i7(wybor);
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
	
	for (i = ROZMIAR_2 - 1; i >= 0; i--) {
		cout << i << " wartosc w tablicy to " << zadanie_2[i] << "\n";
	}
}

/*
3. prosi u¿ytkownika o podanie 10 liczb, po czym wypisuje te liczby w kolejnoœci od najmniejszej do najwiêkszej.
4. j/w z tym, ¿e podaje namniejsz¹ i najwiêksz¹ liczbê w tablicy
5. prosi o wpisanie przez u¿ytkownika 10 liczb i wypisuje która liczba ile razy wyst¹pi³a.
7. prosi o wpisanie 10 liczb i wypisuje drug¹ w kolejnoœci najwiêksz¹ liczbê.
*/

void zadanie_3i4i5i7(int wybor)
{
	int zadanie_3i4i5i7[ROZMIAR_1]; 
	int i;
	
	cout << "Wartosci podaje uzytkownik.\n";
	
	for (i = 0; i < ROZMIAR_1; i++) {
		cout << "Podaj wartosc\n";
		cin >> zadanie_3i4i5i7[i];
	}
	
	cout << "Rusza sortowanie!\n";
	
	sortowanie(zadanie_3i4i5i7);
	
	switch (wybor) {
		case 3:
			for (i = 0; i < ROZMIAR_1; i++) {
				cout << i << " wartosc w tablicy to " << zadanie_3i4i5i7[i] << "\n";
			}
			break;
		case 4:
			//WA¯NE: Zastosowa³em tutaj sortownie od NAJMNIEJSZE do NAJWIÊKSZEJ wartoœci. Zmiana systemu sortowania wymaga zmiany komunikatu lub indeksów tablicy.
			cout << "Najmniejsza wartosc w tablicy to " << zadanie_3i4i5i7[0] << "\n"
				<< "Najwiêszka wartoœæ w tablicy to " << zadanie_3i4i5i7[ROZMIAR_1 - 1] << "\n";
			break;
		case 5:
			wystepowanie(zadanie_3i4i5i7);
			break;
		case 7:
			wartosci(zadanie_3i4i5i7);
			break;
		default:
			break;
	}
}

//6. prosi o wpisanie 10 liczb, po czym wypisuje tylko liczby parzyste.

void zadanie_6()
{
	int zadanie_6[ROZMIAR_1];
	int i;
	
	for (i = 0; i < ROZMIAR_1; i++) {
		cout << "Podaj wartosc do zapisania w tablicy:\n";
		cin >> zadanie_6[i];
	}
	
	cout << "A teraz wyswietlna siê wylacznie wartosci parzyste:\n";
	
	for (i = 0; i < ROZMIAR_1; i++) {
		if (zadanie_6[i] % 2 == 0) {
			cout << zadanie_6[i] << "\n";
		}
	}
}

//funkcje pomocnicze

void sortowanie(int zadanie_3i4i5i7[])
{
	int a = 0, b = 1, c;

	while (a < ROZMIAR_1) {
		if (zadanie_3i4i5i7[a] <= zadanie_3i4i5i7[b] && b < ROZMIAR_1) {
			b++;
		} else if (zadanie_3i4i5i7[a] >= zadanie_3i4i5i7[b] && b < ROZMIAR_1) {
			c = zadanie_3i4i5i7[a];
			zadanie_3i4i5i7[a] = zadanie_3i4i5i7[b];
			zadanie_3i4i5i7[b] = c;
		} else if (b == ROZMIAR_1) {
			a++;
			b = a + 1;		
		}
	}
}
void wystepowanie(int zadanie_3i4i5i7[])
{
	int i, wyst = 1;
	
	for (i = 0; i < ROZMIAR_1; i++) {
		if (zadanie_3i4i5i7[i] == zadanie_3i4i5i7[i + 1]) {
			wyst++;
		} if (zadanie_3i4i5i7[i] != zadanie_3i4i5i7[i + 1]) {
			cout << "Liczba " << zadanie_3i4i5i7[i] << " wystapila " << wyst << " razy.\n";
			wyst = 1;
		} 
	}
}
void wartosci(int zadanie_3i4i5i7[])
{
	int minus = 1, i;
	int *pierwsza = &zadanie_3i4i5i7[ROZMIAR_1 - 1], *druga = &zadanie_3i4i5i7[ROZMIAR_1 - 1 - minus];
	
	//tablica bedzie posortowana od najmniejsze wartosci do najwiekszej; jezeli zostana wpisane dokladnie takie same wartosci to w zerowy element tablicy bedzie dokladnie taki sam, jak ostatni element;
	if (zadanie_3i4i5i7[0] == zadanie_3i4i5i7[ROZMIAR_1]) {
		cout << "Jedyna wartoscia w tablicy jest " << zadanie_3i4i5i7[0] << "\n";
	} else {
		for (i = 0; i < ROZMIAR_1; i++) {
			if (*pierwsza != *druga) {
				cout << "Pierwsza najwieksza wartosc to " << *pierwsza <<
					".\nDruga najwieksza wartosc to " << *druga << "\n";
				break;
			} else if (*pierwsza == *druga) {
				minus++;
				druga = &zadanie_3i4i5i7[ROZMIAR_1 - minus];
			}
		}
	}
}
