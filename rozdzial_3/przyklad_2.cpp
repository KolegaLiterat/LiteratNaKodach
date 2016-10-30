#include <iostream>

using namespace std;

long potega(int stopien, long liczba);

int main()
{
	int pocz, koniec;
	
	cout << "Program do obliczania poteg liczb calkowitych z zadanego przedzialu \n" 
		"Podaj poczatek przedzialu: ";
	cin >> pocz;
	
	cout << "Podaj koniec przedzialu: ";
	cin >> koniec;
	
	for(int i = pocz; i <= koniec; i++) {
		cout << i << " do kwardatu = " << potega(2, i) << " a do szescianu = " << potega(3, i) << endl;
	}
}	

long potega(int stopien, long liczba)
{
	long wynik = liczba;
	
	for(int i = 1; i < stopien; i++) {
		wynik = wynik * liczba;
	}
	return wynik;
}

