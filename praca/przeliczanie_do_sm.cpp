#include <iostream>
#define ROZMIAR 31
#define STO_PROCENT 100

using namespace std;

void posty();
int uzytkownicy();

int main()
{
	int wybor;
	
	cout << "Co robimy?\n" 
		<< "[1] Liczymy posty\n" 
		<< "[2] Pracujemy na uzytkownikach\n";
	cin >> wybor;
	
	switch (wybor) {
		case 1:
			posty();
			break;
		case 2:
			uzytkownicy();
			break;
		default:
			cout << "Blad!\n";
			return 0;
			break;
	}
	
}

void posty()
{
	float post, link; //potrzebne beda jeszcze zmienne zapisujace wyniki obu obliczen; docelowo program ma zapisywac dane do pliku
	int zasieg;
	
	cout << "Podaj zasieg:\n"; //kolejna funkcjonalnosc: zebranie calych zasiegow i porwnanie ich (4 tygodnie)
	cin >> zasieg;
	
	cout << "Ile razy byl widziany post:\n";
	cin >> post;
	
	cout << "Ile razy zostal klikniety link:\n";
	cin >> link;
	
	cout << " CTR P: " << STO_PROCENT * post / zasieg << "%\n" 	//CTR P - do zapisania do zmiennej
		<< " CTR L: " << STO_PROCENT * link / zasieg << "%\n";	//CTR L - do zapisania do zmiennej
}

int uzytkownicy()
{
	int uzytkownicy[ROZMIAR];
	int i, indeks, dzien_1, dzien_2, suma, wyborU, wyborO, zakres;

	cout << "Podaj zakres, ktory cie interesuje:\n"
		<< "[1] 7 dni\n"
		<< "[2] 28 dni\n"
		<< "[3] Wlasny (maks. 31 dni)\n";
	cin >> wyborU;
	
	switch (wyborU) {
		case 1:
			zakres = 7;

			for (i = 0; i < zakres; i++) {
				cout << "Podaj wartosc:\n";
				cin >> uzytkownicy[i];
			}
			break;
		case 2:
			zakres = 28;			

			for (i = 0; i < zakres; i++) {
				cout << "Podaj wartosc:\n";
				cin >> uzytkownicy[i];
			}
			break;
		case 3:
			cout << "Podaj wlasny zakres (maks. 31 dni)\n";
			cin >> zakres;
			
			if (zakres > 31) {
				cout << "Blad! Bedziesz poza tablica!\n";
				return 0;
				break;
			} else {
				for (i = 0; i < zakres; i++) {
					cout << "Podaj wartosc\n";
					cin >> uzytkownicy[i];
				}
			}
			break;
		default:
			cout << "Blad!\n";
			return 0;
			break;
	}

	cout << "W tablicy masz dane z " << zakres << " dni.\n"
		<< "Co chcesz policzyc?\n"
		<< "[1] Sume\n"
		<< "[2] Zmiane procentowa\n";
	cin >> wyborO;	
	
	switch (wyborO) {
		case 1:
			suma = 0;
			i = 0;

			while (i < zakres) {
				suma+=uzytkownicy[i];
				i++;
			}
			
			cout << "W ciagu " << zakres << " dni do Margo wpadlo " << suma << " uzytkownikow.\n";
			break;
		case 2:
			cout << "Uzytkownicy:\n";
			
			indeks = 1;
			
			for (i = 0; i < zakres; i++) {
				cout << "Dzien " << indeks << ". Liczba uzytkownikow " << uzytkownicy[i] << "\n";
				indeks++;
			}
			
			cout << "Pierwszy dzien do porownania:\n";
			cin >> dzien_1;
			cout << "Drugi dzien do porownia:\n";
			cin >> dzien_2;

			dzien_1 = uzytkownicy[dzien_1 - 1];
			dzien_2 = uzytkownicy[dzien_2 - 1];
			
			if (dzien_1 > dzien_2) {
				cout << "Zmiana wynosi " << (dzien_1 - dzien_2) * STO_PROCENT / dzien_1 << "%.\n";
			} else if (dzien_1 < dzien_2) {
				cout << "Zmiana wynosi " << (dzien_2 - dzien_1) * STO_PROCENT / dzien_1 << "%.\n";
			} else {
				cout << "Brak zmiany, bo okazalo sie, ze tak tez moze byc.\n";
			}
			break;
		default:
			cout << "Blad!\n";
			return 0;
			break;	
		}
}
