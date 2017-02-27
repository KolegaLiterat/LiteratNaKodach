#include <cmath>
#include <cstdlib>
#include <iostream>

using namespace std;

void kurs();
void wiatraczek();
void wahadlo();
void zwloka_czasowa(int ile);

int main()
{
	void (*twf[3])() = {&wahadlo, &wiatraczek, &kurs};
	int co;
	
	while (1) {
		cout << "................MENU...............\n"
			"\t0 - wahadlo\n\t1 - wiatraczek\n\t"
			"2 - kurs\n\t9 - koniec programu\n\t"
			"Podaj numer zadaniej akcji:\n";
		cin >> co;
		
		switch (co) {
			case 0:
			case 1:
			case 2:
				twf[co]();
				break;
			case 9:
				exit(1);
			default:
				break;
		}
	}	
}
void zwloka_czasowa(int ile)
{
	int i;
	
	for (i = 0; i < ile * 1000; i++);
}
void kurs()
{
	int i;
	
	for (i = 0; i < 100; i++) {
		cout << "kurs " << (232 + (i % 4)) << " ...\r\n" << flush;
	
		zwloka_czasowa(50000);
	}
	
	cout << "Pkazywalem kurs\n";
}
void wiatraczek()
{
	char symbol[] = {'|', '/', '-', '\\'};
	int i;
	
	for (i = 0; i < 100; i++) {
		cout << "     " << symbol[i % 4] << "\r" << flush;
		zwloka_czasowa(10000);
	}
	
	cout << "Wiatraczek sie pokrecil\n";
}
void wahadlo ()
{
	char wzorek[25];
	int i, k, pozycja;
	
	cout << "\n";
	
	for (i = 0; i < 500; i++) {
		for (k = 0; k < 24; k++) wzorek[k] = ' ';
		wzorek[24] = 0;
	
		pozycja = 12 * sin(i / 20.0) + 12;
		wzorek[pozycja] = '*';
		
		cout << wzorek << "\r" << flush;
		zwloka_czasowa(5000);
	}
	
	cout << "\n";	
}
