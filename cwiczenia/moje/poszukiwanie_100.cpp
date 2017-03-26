#include <cstdlib>
#include <iostream>

using namespace std;

int Fposzukiwanie_liczby(int u_liczba);

int main() 
{
    int u_liczba;

    cout << "Podaj liczbe, ktora mam znalezc (zakres: 1 - 100):\n";
    cin >> u_liczba;

    if (u_liczba <= 0 || u_liczba > 100) {
        cout << "Wartosc poza zareksem! BLAD!\n";
    } else {
        cout << "Twoja liczba to: " << Fposzukiwanie_liczby(u_liczba);
    }
}
int Fposzukiwanie_liczby(int u_liczba)
{
    int rozmiar = 101, indeks = 0;
    int i;
    int *tablica;

    tablica = new int[rozmiar];

    for (i = 0; i < rozmiar; i++) {
        tablica[i] = i;
    }

    //pierwsza wersja poszukiwan; mam wrazenie, ze mozna wymyslic cos bardziej zopytmalizowanego;
    while (tablica[indeks] != u_liczba) {
        if (tablica[indeks] < u_liczba) {
            indeks++;
        }
    }

    return u_liczba = tablica[indeks];
    delete[] tablica;
}
