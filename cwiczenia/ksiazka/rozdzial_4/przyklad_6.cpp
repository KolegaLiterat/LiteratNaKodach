#include <iostream>

using namespace std;

void wczytaj_dane();

int main()
{
	long widmo[4][2048];

	int i, pocz, pomiar, koniec;
	long suma;
		
	wczytaj_dane();
	
	cout << "Jaki przedzial widma na byc integrowany?\n"
		<< "Podaj dwie liczby:\n";
	cin >> pocz >> koniec;

	for (pomiar = 0; pomiar < 4; pomiar++) {
		suma = 0;
				
		for (i = pocz; i <= koniec; i++) {
			suma += widmo[pomiar][i];
		}
		
		cout << "W probce " << pomiar << " miedzy kanalami " << pocz << " a " << koniec << " jest " << suma << " zliczen.\n"; 

	}
	
}
void wczytaj_dane()
{
	//...wczytywanie danych z dysku
}
