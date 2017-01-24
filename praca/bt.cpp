#include <iostream>
#include <cstdlib>

using namespace std;

void antybot();

int main()
{
	cout << "Do przeliczania antybota. Ka¿de bicie elity == losowa wartosc o 0 do 10; start anty, gdy wartosc osiagnie 25 (maks 50).\n" <<
		"Poprawne wpisanie captchy resetuje caly licznik, niepoprawne wpisanie captchy zabija i za kazdym razem wydluza czas respu o 60 sekund\n" <<
		"Nagrody: Za poprawne rozwiazanie captchy + Smoczych Run\n";

	antybot();
}
void antybot()
{
	static int nagroda = 0, t_kill = 0, maks = 25;
	int bicie, punkty = 0; 
	char captcha;

	for (bicie = 1; punkty < maks; bicie++) {
		punkty += (rand() % 10) + 0;

		cout << "Atak " << bicie << "\nIlosc punktow " << punkty << "\nKONIEC ATAKU!\n";

		if (punkty >= maks) {
			cout << "Czas " << bicie * 12 << "\nWpisz captche!\n [T] = dobrze wpisania, [N] = zle wpisana\n";
			cin >> captcha;

			switch (captcha) {
				case 'T':
					bicie = 0;
					nagroda += maks / 5;
					
					cout << "Brawo! Otrzymujesz " << nagroda << " Smoczych Run!\n";

					if (maks < 50) {
						maks += 5;
						punkty = 0;
					}
					break;
				case 'N':
					bicie = 0;
					t_kill += 60;

					cout << "Gniesz! Zostanie przeniesiony do miasta i wskrzeszony za " << t_kill << " sekund\n";
					
					if (maks >= 50) {
						maks -= 5;
						punkty = 0;

						cout << "Maksymalna wartosc wynosi " << maks << "\n";
					} else if (maks <= 25) {
						maks = 25;
						punkty = 0;
					} 

					break;
				default:
					break;
			}
		}	
	}

	cout << "Jeszcze raz?\n";
	cin >> captcha;

	if (captcha == 'T') {
		antybot();
	} else {
		cout << "KONIEC!\n" << "Podsumowanie: Smocze Runy - " << nagroda << "\nCzas respu: " << t_kill << " sekund\n";
	}
}
