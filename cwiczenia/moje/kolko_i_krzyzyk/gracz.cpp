//pliki
#include "gracz.h"
//biblioteki
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

//public
void Gracz::podaj_imiona()
{
    cout << "Podaj nazwe pierwszego gracza: ";
    getline(cin, Gracz::gracz_1);

    cout << "Podaj nazwe drugiego gracza: ";
    getline(cin, Gracz::gracz_2);
}
void Gracz::ruch(int ktory_gracz)
{
    int x, y;

if (ktory_gracz == 1) {
        cout << Gracz::gracz_1 << "( " << Gracz::krzyzyk << " )\nPodaj rzad, w ktorym ma zostac postawiony krzyzyk:\n";
        cin >> x;
        cout << "A teraz podaj kolumne:\n";
        cin >> y;
    } else {
        cout << Gracz::gracz_2 << "( " << Gracz::kolko << " )\nPodaj rzad, w ktorym ma zostac postwione kolko:\n";
        cin >> x;
        cout << "A teraz podaj kolumne:\n";
        cin >> y;
    }

    if (Gracz::sprwadz_miejsce(x, y) == true) {
        if (ktory_gracz == 1) {
            Plansza::plansza[x - 1][y - 1] = Gracz::krzyzyk;
            Plansza::wyswietl_plansze(2);
        } else {
            Plansza::plansza[x - 1][y - 1] = Gracz::kolko;
            Plansza::wyswietl_plansze(2);
        }
    } else {
        Gracz::ruch(ktory_gracz);
    }
}
//private
bool Gracz::sprwadz_miejsce(int x, int y) 
{
    if (Plansza::plansza[x - 1][y - 1] == Plansza::puste) {
        return true;
    } else if (Plansza::plansza[x - 1][y - 1] != Plansza::puste){
        cout << "BLAD! W tym miejscu jest juz " << Plansza::plansza[x - 1][y- 1] << " Dokonaj wyboru ponownie!\n";
        return false;
}
void Gracz::podsumowanie_gry()
{
    cout << "Imie pierwszego gracza to " << Gracz::gracz_1 << " a imie drugiego gracza to " << Gracz::gracz_2 << "\n";
};
