#include <cstdlib>
#include <iostream>

using namespace std;

void wpisz_ulamek();
void algorytm_euklidesa(int *tablica_licz, int *tablica_mian, int rozmiar);
void test(int *kontrola);

int main()
{
	wpisz_ulamek();
}
//wpisywanie ulamka do dwoch tablic; jedna odpowiada za mianowniki, a druga za liczniki
void wpisz_ulamek()
{
	int rozmiar, obieg, i;
	int j = 0, krok = 1;
	int *licznik, *mianownik;	

	cout << "Ile ulamkow chcesz sprawdzic?:\n";
	cin >> rozmiar;
	
	test(&rozmiar);
	
	licznik = new int[rozmiar - 1];
	mianownik = new int[rozmiar - 1];

	obieg = rozmiar;
	
	while (obieg > 0) {
		if (krok % 2 == 1) {
			for (i = j; i < j + 1; i++) {
				cout << "Podaj licznik:\n";
				cin >> licznik[i];
				
				test(&licznik[i]);				
	
				krok++;
			}	
		} else if (krok % 2 == 0) {
			for (i = j; i < j + 1; i++) {
				cout << "Podaj mianownik:\n";
				cin >> mianownik[i];

				test(&mianownik[i]);				

				krok++;
			}
		obieg--;
		j++;
		}
	}

	algorytm_euklidesa(licznik, mianownik, rozmiar);
	
	delete[] licznik;
	delete[] mianownik;

}
//obliczanie najwiekszego wspolnego dzielnika
void algorytm_euklidesa(int *tablica_licz, int *tablica_mian, int rozmiar)
{
	int i, a, b, reszta, indeks; 

	//ustawienie wartosci w taki sposob, aby wieksza byla dzielona przez mniejsza	
	for (i = 0, indeks = 1; i < rozmiar; i++, indeks++, tablica_licz++, tablica_mian++) {
		if (tablica_licz <= tablica_mian) {
			b = *tablica_licz;
			a = *tablica_mian;
			
		} else if (tablica_licz > tablica_mian) {
			a = *tablica_licz;
			b = *tablica_mian;
		}
	//obliczanie NWD za pomoc¹ algorytmu		
		while (a % b != 0) {
			reszta = a % b;
			a = b;
			b = reszta;
		}
		cout << "Ulamek " << indeks << ":\n" <<
			"NWD dla ulamka " << *tablica_licz << "/" << *tablica_mian << " wynosi " << b << "\n" <<
			"Ulamek skrocony za pomoca NWD " << *tablica_licz / b << "/" << *tablica_mian / b << "\n";
	}
}
//funkcja sprawdzajaca, czy uzytkownik nie podal wartosci mniejszej, niz 0
void test(int *kontrola)
{
	if (*kontrola <= 0) {
		cout << "Blad! Podana wartosc jest mniejsza od lub rowna 0!\n";
		exit(0);
	} 
}
