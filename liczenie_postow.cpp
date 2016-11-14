#include <iostream>
#define STO_PROCENT 100

using namespace std;

void posty();
void dodawanie();

int main()
{
	int wybor;
	
	cout << "Co robimy?\n"
		"[1] Liczymy zasieg\n"
		"[2] Dodajemy szkodnikow\n";
	cin >> wybor;

	switch (wybor) {
		case 1:
			posty();
			break;
		
		case 2:
			dodawanie();
			break;
		
		default:
			break;
	}
}

void posty()
{
	float post, link; //potrzebne beda jeszcze zmienne zapisujace wyniki obu obliczen; docelowo program ma zapisywac dane do pliku
	int zasieg;
	
	cout << "Podaj zasieg z tego tygodnia:\n"; //kolejna funkcjonalnosc: zebranie calych zasiegow i porwnanie ich (4 tygodnie)
	cin >> zasieg;
	
	cout << "Ile razy byl widziany post:\n";
	cin >> post;
	
	cout << "Ile razy zostal klikniety link:\n";
	cin >> link;
	
	cout << " CTR P: " << STO_PROCENT * post / zasieg << "%\n" 	//CTR P - do zapisania do zmiennej
		<< " CTR L: " << STO_PROCENT * link / zasieg << "%\n";	//CTR L - do zapisania do zmiennej
}

void dodawanie()
{
	int liczba, suma = 0;

	do {	
		cout << "Ilu ich bylo:\n";
		cin >> liczba;
		suma += liczba;
	} while (liczba != 0);

	cout << "W zeszlym tygodniu mielismy " << suma << " szkodnikow.\n"; //docelowo - zapisywanie sumy uzytkowniko w ciagu tygodnia oraz flagowanie czasu trwania eventow i analizowanie ich wplywi na przyrost uzytkownikow
}
