//dołączanie bibliotek
#include <cstdlib>
#include <cstring>
#include <string>
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

    cout << "Rozmiar to " << rozmiar << "\n";

    for (i = 0; i <= rozmiar; i++) {
        cout << "-" << tekst[i];
    }
}
//dodowanie wpisanego przez uzytkownika znaku pomiedzy znaki w dowolnej tresci
void podawanie_tresci()
{
    //stringi
    string miasto;
    //zmienne
    int rozmiar, i;
    char znak;
    //wskazniki
    char *tekst;

    //wpisywanie tekstu; uzywam getline(), poniewaz cin ucina przy bialym znaku; pierwsz getline() zjada biale znaki, zeby drugi mogl wystartowac;
    cout << "Wpisz dowolnie dlugi tekst\n";
    getline(cin, miasto);
    getline(cin, miasto);

    cout << "Jaki znak ma rozdzielac inne znaki w tresci?\n";
    cin >> znak;

    //sprawdzenie dlugosci stringa i zapisanie go w zmiennej rozmiar
    rozmiar = miasto.length();
    //stworzenie tablicy char na podstawie dlugosci; +1 bo potrzebne jest mi miejsce na null;
    tekst = new char [rozmiar + 1];
    //przekopiowanie wartosci stringa do tablicy char;
    strcpy(tekst, miasto.c_str());

    //petla wpisujaca znaki
    for (i = 0; i <= rozmiar; i++) {
        cout << znak << tekst[i];
    }
}
