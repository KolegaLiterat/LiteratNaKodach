#include <iostream>
using namespace std;

void czerwona(void);
void biala(void);

int main()
{
	czerwona();
	czerwona();
	biala();
	czerwona();
	biala();
}

void czerwona(void)
{
	static int ktory_raz;	//istotne jest tutaj u¿ycie modyfikatora static, ktory jest lokalny, co oznacza, ze istnieje w obrebie innej funkcji; wtedy zmienna ktory_raz nie jest przechowywana na stosie, ale w pamieci normalnej (??), przez co jej wartosc wynosi 0; w przypadku przechowywania na stosie beda tam smieci
	ktory_raz++;

	cout << "Funkcja czerwona wywolana " << ktory_raz << "raz\n";
}

void biala(void)
{
	static int ktory_raz = 100; //bardzo wazne jest to, ze static zapewnia wieksza zywtonosc zmiennej; bez modyfikatora zmienna zyje tylko w obrebie wywolanej funkcji, potem umiera, znika z pamieci i musi sie w niej ponownie pojawic; static ja tam utrzymuje
	ktory_raz = ktory_raz + 1;
	
	cout << "Funkcja bila zostala wywolana " << ktory_raz << " raz\n";
}
