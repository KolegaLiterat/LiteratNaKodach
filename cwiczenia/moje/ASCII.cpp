//dodawanie bibliotek
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

//funkcja rzutujaca int >> char
char Fzmiana_znaku(string znak);

int main()
{
   string tekst;
   int i;
   int przes = 3;

   //cout << "Wpisz tekst:\n";
   getline(cin, tekst);
   
   ////////////////////////////////////////////////////////////////
   /*cout << "1. Wyswietlnie kodow ASCII poszczegolnych znakow:\n";

   for (i = 0; i < tekst.length(); i++) {
       cout << "-" << (int)tekst[i] << "-";
   }

   cout << "\n2. Przesuniecie kodow ASCII o trzy pozycje w zbiorze:\n";

   for (i = 0; i < tekst.length(); i++) {
       if ((int)tekst[i] < (int)'A' || (int)tekst[i] > (int)'Z') {
           cout << "-" << (int)tekst[i] << "-";
       } else {
           cout << "-" << (int)'A' + ((int)tekst[i] - (int)'A' + 3) % ((int)'Z' - (int)'A' + 1) << "-";
       }
   }*/
   ////////////////////////////////////////////////////////////////

   //cout << "Wyswietlenie przesunietych liter na podstawie kodow ASCII:\n";

   for (i = 0; i < tekst.length(); i++) {
       cout << Fzmiana_znaku(&tekst[i]);
   }
}
char Fzmiana_znaku(string znak)
{
	int n_kod;

    if ((int)znak[0] < (int)'A' || (int)znak[0] > (int)'Z') {
        n_kod = (int)znak[0];
    } else {
	    n_kod = (int)'A' + ((int)znak[0] - (int)'A' + 3) % ((int)'Z' - (int)'A' + 1);
    }

    return n_kod;
}
