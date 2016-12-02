#include <iostream>
using namespace std;

int liczba;	//definicja obiektu globnalnego o nazwie liczba
void fff(void);	//funkcja fff

int main()
{
	int i = 4;	//definicja zmiennej automatytcznej i, która ¿yje tylko w obrebie main
	liczba = 10;	//deklaracja obiektu globalnego liczba (przyjmuje wartosc 10)

	cout << "Wartosci liczba = " << liczba << " i = " << i;	//wyswietlenie wartosci

	fff();
}

void fff(void)
{
	int x = 5;	//definicja zmiennej automatycznej x, która ¿yje w obrêbie fff
	liczba--;	//zmiejszenie wartosci obiektu globalnego liczba o 1 
	
	cout << " sumka = " << (x + liczba); //wynikiem bedzie 14, poniewaz dodane zosta³o x = 5 do liczby = 9 (bo 10 - 1); do zmiennej i funkcja fff nie mia³a dostepu
}
