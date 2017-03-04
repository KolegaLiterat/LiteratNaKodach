#include <cstring>
#include <iostream>

using namespace std;

class Tosoba
{
	char nazwisko[80];
	int wiek;

	public:
		void zapamietaj(const char *napis, int lata);
		void wypisz()
		{
			cout << "\t" << nazwisko << ", lat " << wiek << "\n";
		}
};
void Tosoba::zapamietaj(const char *napis, int lata)
{
	strcpy(nazwisko, (napis ? napis: "Anonim"));
	wiek = lata;	
}

int main()
{
	Tosoba	student1,
		student2,
		profesor,
		pilot;
	char magazynek[80];
	int ile;

	cout << "Dla informacji podaje, ze jeden obiekt klasy Tosoba ma rozmiar: " << sizeof(Tosoba) << " bajty. To samo inaczej: " << sizeof(student1) << "\n";

	profesor.zapamietaj("Albert Eistain", 55);
	student1.zapamietaj("Ruediger Schubart", 26);
	student2.zapamietaj("Claudia Bach", 25);
	pilot.zapamietaj("Neil Armstrong", 37);

	cout << "Po wpisaniu informacji do obiektow. Sprwadzamy:\n" <<
		"dane z obiektu profesor\n";
	profesor.wypisz();
	
	cout << "dane z obiektu student1\n";
	student1.wypisz();
	
	cout << "dane z obiektu student2\n";
	student2.wypisz();
	
	cout << "dane z obiektu pilot\n";
	pilot.wypisz();
	
	cout << "Podaj swoje nazwisko\n";
	cin >> magazynek;
	
	cout << "Podaj swoj wiek:\n";
	cin >> ile;
	pilot.zapamietaj(magazynek, ile);

	cout << "Oto dane, ktore teraz sa zapamietane w obiektach pofesero i pilot\n";
	profesor.wypisz();
	pilot.wypisz();
}
