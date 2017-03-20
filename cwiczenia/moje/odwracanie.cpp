//ZADANIE: Stworz funkcje, ktora bedzie zapisywana podane slowo od tylu.

#include <iostream>

using namespace std;

void odwracanie(char slowo[]);

int main(int argc, char *argv[])
{
	char slowo[80];

	cout << "Wpisz slowo:\n";
	cin >> slowo;			//Dziala na "slowa". Wpisanie "czlowiek jezdzi", spowoduje, ze w tablicy pojawi sie "czlowiek", natomiast to, co jest po spacji - wyleci w kosmos

	odwracanie(slowo);
}
void odwracanie(char slowo[])
{
	int i = 0;
	int *wsk;

	while (slowo[i] != 0) {
		i++;
	}

	wsk = new int (i - 1);

	cout << "Do tablicy zostalo wpisane slowo " << slowo << " a zapisanie odwrotnie wyglada tak:\n";

	for (i = *wsk; i > -1; i--) {
		cout << slowo[i];
	}

	delete wsk;
}
