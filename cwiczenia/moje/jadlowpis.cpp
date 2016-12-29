#include <iostream>

#define WYMIAR_1 7
#define WYMIAR_2 50

using namespace std;

void skladnik();

int main()
{
	cout << "Do wpisywania i sprawdzania jadla na dany tydzien\n";
	
	skladnik();
}

void skladnik()
{
	char potrawa[WYMIAR_1][WYMIAR_2];
	char decyzja;
	int i, dzien;
	
	for (i = 0; i < WYMIAR_1; i++) {
		cout << "Podaj potrzebny skladnik\n"; 
		cin >> potrawa[i];
	}
	
	cout << "Czy chcesz cos zmienic?\n"
		<< "[T]/[N]\n";
	cin >> decyzja;
	
	if (decyzja == 'T' || decyzja == 't' ) {
		cout << "Podaj dzien, ktory chcesz zmienic\n";
		cin >> i;
		
		cout << "Aktualnie jest tam wpisane " << potrawa[i - 1] << "\n"
			<< "Wpisz nowa nazwe skladnika\n";
		cin >> potrawa[i - 1];
		
		dzien = 1;
		for (i = 0; i < WYMIAR_1; i++) {
			cout << dzien << " dnia potrzebny bedzie " << potrawa[i] << "\n";
			dzien++;
		}
	} else if (decyzja == 'N' || decyzja == 'n') {
		cout << "W takim razie czas wyswietlic to, co bedzie potrzebne!\n";
		
		dzien = 1;
		for (i = 0; i < WYMIAR_1; i++) {
			cout << dzien << " dnia bedzie potrzebny: " << potrawa[i] << "\n";
			dzien++;
		}
	} else {
		cout << "BLAD! WSZYSTKO PRZEPADLO....\n";
	}
}
