//dodawanie bibliotek
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

//funkcja rzutujaca int >> char
char Fzmiana_znaku(string znak);

int main()
{
   string  tekst;
   int i;
   int przes = 3;

   cout << "Wpisz tekst:\n";
   getline(cin, tekst);
   
   cout << "1. Wyswietlnie kodow ASCII poszczegolnych znakow:\n";

   for (i = 0; i < tekst.length(); i++) {
       cout << "-" << (int)tekst[i] << "-";
   }

   cout << "\n2. Przesuniecie kodow ASCII o trzy pozycje w zbiorze:\n";

   for (i = 0; i < tekst.length() ; i++) {
       cout << "-" << (int)'A' + ((int)tekst[i] - (int)'A' + 3) % ((int)'Z' - (int)'A' + 1) << "-";
   }

   cout << "\n3. Wyswietlenie przesunietych liter na podstawie kodow ASCII:\n";

   for (i = 0; i < tekst.length(); i++) {
       cout << "-" << Fzmiana_znaku(&tekst[i]) << "-";
   }
}
char Fzmiana_znaku(string znak)
{
	int n_kod;

	n_kod = (int)'A' + ((int)znak[0] - (int)'A' + 3) % ((int)'Z' - (int)'A' + 1);
    
    return n_kod;
}
