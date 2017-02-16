#include <iostream>

using namespace std;

void test(int *spr); 

int main()
{
	int i, p, wykresy, skok;	//poczatkowe adresy komorek wpisane na sztywno z arkusza; TODO zmienic na podawane przez uzytkownika.
	int adresy_komorek[1];
	int *spr;

	cout << "Ile narobiles tych wykresow?\n";
	cin >> wykresy;

	test(&wykresy);

	cout << "Okresl skok pomiedzy adresami komorek.\n";
	cin >> skok;

	test(&skok);

	for (i = 0, p = 1; i < 2; i++, p++) {
		cout << "Podaj poczatkowa wartosc " << p << " komorki.\n";
		cin >> adresy_komorek[i];
	
		test(&adresy_komorek[i]);	
	} 	

	for (p = 1; p < (wykresy + 1); p++) {
		cout << "Wykres " << p << ". Pierwsza komorka " << adresy_komorek[0] << ". Druga komorka " << adresy_komorek[1] << ".\n";
		
		adresy_komorek[0] += skok;
		adresy_komorek[1] += skok;
	}
}
void test(int *spr)
{
	if (*spr < 0) {
		cout << "Blad! Wartosc nie moze byc ujemna!\n";
		exit(0);
	}
}
