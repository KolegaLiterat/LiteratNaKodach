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

    if (Gracz::sprawdz_zakres(x, y) == true) {
        if (Gracz::sprwadz_miejsce(x, y) == true) {
            if (ktory_gracz == 1) {
                Plansza::plansza[x - 1][y - 1] = Gracz::krzyzyk;
                Plansza::wyswietl_plansze(2);
                Gracz::sprawdz_wygrana(ktory_gracz);
            } else {
                Plansza::plansza[x - 1][y - 1] = Gracz::kolko;
                Plansza::wyswietl_plansze(2);
                Gracz::sprawdz_wygrana(ktory_gracz);
            }
        } else {
            Gracz::ruch(ktory_gracz);
        }
    } else {
        Gracz::ruch(ktory_gracz);
    }
}
bool Gracz::sprawdz_wygrana(int ktory_gracz)
{
    int i, j;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (Plansza::plansza[i][j] == Gracz::krzyzyk && Plansza::plansza[i + 2][j] == Gracz::krzyzyk && Plansza::plansza[i + 4][j] {
                return true;
                break;
            }
            }
        }
    }
}
//private
bool Gracz::sprwadz_miejsce(int x, int y)
{
    if (Plansza::plansza[x - 1][y - 1] == Plansza::puste) {
        return true;
    } else {
        cout << "BLAD! W tym miejscu jest juz " << Plansza::plansza[x - 1][y- 1] << " Dokonaj wyboru ponownie!\n";
        return false;
    }
}
bool Gracz::sprawdz_zakres(int x, int y)
{
    if (x - 1 < 0 || x - 1 > 4 || y - 1 < 0 || y - 1 > 4) {
        cout << "BLAD! Jestes poza zakresem! Minimanle wartosci to 1 oraz 5 zarowno dla rzedow, jak i kolumn.\n";
        return false;
    } else {
        return true;
    }
}
void Gracz::podsumowanie_gry()
{
    cout << "Imie pierwszego gracza to " << Gracz::gracz_1 << " a imie drugiego gracza to " << Gracz::gracz_2 << "\n";
};


