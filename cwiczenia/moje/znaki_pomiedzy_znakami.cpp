#include <cstdlib>
#include <cstring>
#include <iostream>

using namespace std;

//deklaracje funkcji
void decyzja_uzytkownika();
void sztywna_tablica();
void podawanie_tresci();

//main
int main()
{
    decyzja_uzytkownika();
}
//funkcja obslugujaca uproszczone menu
void decyzja_uzytkownika()
{
    int wybor;

    cout << "Przygotowalem dwie wersje\n" <<
            "[1] Tablica ma na sztywno wpisana tresc 'Ala ma kota'\n" <<
            "[2] Pojawia sie mozliwosc podania wpisania tresci\n";
    cin >> wybor;

    switch (wybor) {
        case 1:
            sztywna_tablica();
            break;
        case 2:
            podawanie_tresci();
            break;
        default:
            cout << "Blad! Ta wartosc nie jest obslugiwana!\n";
            decyzja_uzytkownika();
            break;
    }
}
//dodawanie znaku '-' pomiedzy znaki z tablicy
void sztywna_tablica()
{
    char tekst[] = {"Ala ma kota"};
    int i, rozmiar;
    
    rozmiar = strlen(tekst);

    for (i = 0; i <= rozmiar; i++) {
        cout << "-" << tekst[i];
    }
}
void podawanie_tresci()
{
    cout << "PUSTO I HULA CYFROWY WIATR!\n";
}
