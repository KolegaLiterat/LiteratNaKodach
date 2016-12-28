#include <iostream>

using namespace std;

enum etapy {nic, scenopis, proba_czytana, proba_kamerowa, nagranie = 6, montaz, postsynchron};

void stan_realizacji(etapy s[], int ile, int dzien_zdjeciowy);

int main()
{
	const int liczba_scen = 10;
	int dzien_realizacji = 1;
	
	etapy scena[liczba_scen] = {scenopis, proba_czytana, proba_kamerowa};
	
	scena[2] = nagranie;
	scena[5] = montaz;
	scena[9] = nagranie;
	scena[4] = proba_kamerowa;
	stan_realizacji(scena, liczba_scen, dzien_realizacji);
	
	dzien_realizacji++;
	
	scena[1] = proba_kamerowa;
	scena[5] = postsynchron;
	scena[0] = scenopis;
	stan_realizacji(scena, liczba_scen, dzien_realizacji);
}

void stan_realizacji(etapy s[], int ile, int dzien_zdjeciowy)
{
	int i, k;
	
	cout << dzien_zdjeciowy << ".dzien realizacji filmu reklamowego\n" << "Stan realizacji:\n";
	
	for (i = 0; i < ile; i++) {
		cout << "Scena nr " << i << ", ";
		
		for (k = 0; k < s[i]; k++) {
			cout << "#";
		}
		cout << "\n";
	}
}
