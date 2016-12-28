#include <iostream>
using namespace std;

int sumator(int jeszcze_krokow, int suma_dotychczas);
void dwojkowo(int liczba);
void schodki(int ile, char znak);

int main()
{
	int n = 0, liczba;
	
	cout << "Sumowanie liczb naturalnych od 0 do n. Podaj wartosc n: ";
	cin >> n;
	
	cout << "\nSuma liczba naturalnych od 0 do " << n << " to = " << sumator(n, 0) << "\n";
	
	liczba = 241;
	cout << liczba << " to dwojkowo ";
	dwojkowo(liczba);
	cout << endl;
	
	liczba = 30942;
	cout << liczba << " to dwojkowo "; 
	dwojkowo(liczba);
	cout << endl;
	
	return 0;
}

int sumator(int jeszcze_krokow, int suma_dotychczas)
{
	static int krok_rekurencji;

	int rezultat = 0, to_pietro_nr = 0;

	to_pietro_nr = krok_rekurencji;
		
	schodki(to_pietro_nr, '>');
	
	krok_rekurencji++;

	cout << suma_dotychczas << " + " << to_pietro_nr << " = " << (suma_dotychczas + to_pietro_nr) << "\n";
	
	suma_dotychczas += to_pietro_nr;
	
	if(jeszcze_krokow > 0) {
		rezultat = sumator(jeszcze_krokow - 1, suma_dotychczas);
	} else {
		cout << "...... to ostatni krok, wracamy......\n";
		rezultat = suma_dotychczas;
	}
	
	schodki(to_pietro_nr, '<');
	
	cout << "\n";
	
	krok_rekurencji--;

	return rezultat;
}

void dwojkowo(int liczba)
{
	int reszta = liczba % 2;
	
	if(liczba > 1) {
		dwojkowo(liczba / 2);
	}

	cout << reszta;
	
	return;	
}

void schodki(int ile, char znak)
{
	int m;
	
	cout << ile << " pietro ";
	
	for(m = 0; m < ile; m++) {
		cout << znak << " ";
	}
	
	cout << " ";
}
