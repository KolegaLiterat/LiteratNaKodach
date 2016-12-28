#include <iostream>

using namespace std;

void przekazanie(int tablica[]);

int main()
{
	int t, tablica[4];
	
	for (t = 0; t < 4; t++) {
		tablica[t] = t;
		tablica[4] = t + 2;
	}
	
	cout << "Wartosc 4 element zostala zwiekszona tablicy przed funkcja i jest rowna " << tablica[4] << "\n";
	
	przekazanie(tablica);
}

void przekazanie(int tablica[])
{
	int iloczyn;
	
	iloczyn = tablica[4] * 2;
	
	cout << "Czwarty element tablicy zostal pomnozony razy dwa i jego wartosc wynosi " << iloczyn << "\n";
}
