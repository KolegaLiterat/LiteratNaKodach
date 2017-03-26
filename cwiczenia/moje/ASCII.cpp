//dodawanie bibliotek
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

//funkcja rzutujaca int >> char
char Fzmiana_znaku(string tekst);

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
       cout << "-" << (int)'A' + ((int)tekst[i] - (int)'A' + 3) % ((int)'Z' - (int)'A') << "-";
   }

   cout << "\n3. Wyswietlenie przesunietych liter na podstawie kodow ASCII:\n";

   for (i = 0; i < tekst.length(); i++) {
       cout << "-" << Fzmiana_znaku(tekst) << "-";
   }
}
char Fzmiana_znaku(string tekst) 
{
    static int krok = 0;
    int i, n_kod;

    for (i = krok; i < krok + 1; i++) {
        n_kod = (int)'A' + ((int)tekst[i] - (int)'A' + 3) % ((int)'Z' - (int)'A');
    }

    krok++;;

    return n_kod;
}