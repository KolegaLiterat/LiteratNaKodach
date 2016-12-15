#include <iostream>
#define STO_PROCENT 100

using namespace std;

void posty();
void dodawanie();
void zmianyU();

int main()
{
	int wybor;
	
	cout << "Co robimy?\n"
		"[1] Liczymy zasieg\n"
		"[2] Dodajemy szkodnikow\n"
		"[3] Procentowa zmiana\n";
	cin >> wybor;

	switch (wybor) {
		case 1:
			posty();
				break;
		
		case 2:
			dodawanie();
				break;
		case 3:
			zmianyU();
				break;
		
		default:
			cout << "BLAD!!!";
			return 0;
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
	int liczbaU, suma = 0;

	do {	
		cout << "Ilu ich bylo:\n";
		cin >> liczbaU;
		suma += liczbaU;
	} while (liczbaU != 0);

	cout << "W zeszlym tygodniu mielismy " << suma << " szkodnikow.\n"; //docelowo - zapisywanie sumy uzytkowniko w ciagu tygodnia oraz flagowanie czasu trwania eventow i analizowanie ich wplywi na przyrost uzytkownikow
}

void zmianyU()
{
	int dzien_1, dzien_2;

	cout << "Pierwszy dzien:\n";
	cin >> dzien_1;
	
	cout << "Drugi dzien:\n";
	cin >> dzien_2;

	if (dzien_1 > dzien_2) {
		cout << "Zmiana wynosi " << (dzien_1 - dzien_2) * STO_PROCENT / dzien_1 << "%.\n";
	} else if (dzien_1 < dzien_2) {
		cout << "Zmiana wynosi " << (dzien_2 - dzien_1) * STO_PROCENT / dzien_1 << "%.\n";
		
	} else {
		cout << "Zmiana wynosi 0%";
	
	}	
}
