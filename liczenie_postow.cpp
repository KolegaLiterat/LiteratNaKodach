#include <iostream>
#include <cmath>
#define STO_PROCENT 100

using namespace std;

void posty();
void dodawanie();

int main()

{
	int wybor;

	cout << "Co dzisiaj robimy?\n"
			"[1] Liczymy posty\n"
			"[2] Dodajemy uzytownikow\n";
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
	float post, link, wynik;
	int zasieg;

	cout << "Podej zasieg: ";
	cin >> zasieg;

	cout << "\n Widziany post: ";
	cin >> post;

	cout << "\n Widziany link: ";
	cin >> link;

	cout << "\n CRT P: " << round(wynik = STO_PROCENT * post / zasieg) << "% \n"
		" CTR L: " << round(wynik = STO_PROCENT * link / zasieg) << "%";
}

void dodawanie()
{
	int liczba, wynik;

	while (liczba != 0) {
		cout << "Ilu ich bylo?\n";
		cin >> liczba;
		wynik = liczba + wynik;
	}

	cout << "W zeszlym tygodniu mielismy " << wynik << " szkodnikow";
}
