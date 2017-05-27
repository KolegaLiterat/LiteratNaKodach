//pliki
#include "gracz.h"
//biblioteki
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

void Gracz::podaj_imiona()
{
    cout << "Podaj nazwe pierwszego gracza: ";
    getline(cin, Gracz::gracz_1);

    cout << "Podaj nazwe drugiego gracza: ";
    getline(cin, Gracz::gracz_2);
}
void Gracz::podsumowanie_gry()
{
    cout << "Imie pierwszego gracza to " << Gracz::gracz_1 << " a imie drugiego gracza to " << Gracz::gracz_2 << "\n";
};
