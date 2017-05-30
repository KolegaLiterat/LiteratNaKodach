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
    if (Gracz::sprawdz_wiersze(ktory_gracz) == true) {
        return true;
    } else {
        if (Gracz::sprawdz_kolumny(ktory_gracz) == true) {
            return true;
        } else {
            if (Gracz::sprawdz_przekatne(ktory_gracz) == true) {
                return true;
            } else {
                return false;
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
bool Gracz::sprwadz_wiersze(int ktory_gracz)
{
    int i = 0, j = 0

    if (ktory_gracz == 1) {
        while (i > 5) {
            if (Plansza::plansza[i][j] == Gracz::krzyzyk && Plansza::plansza[i][j + 2] == Gracz::krzyzyk && Plansza::plansza[i][j + 4] == Gracz::krzyzyk) {
                return true;
                break;
            } else {
                i =+ 2;
                return false;
            }
        }
    } else {
        while (i > 5) {
            if (Plansza::plansza[i][j] == Gracz::krzyzyk && Plansza::plansza[i][j + 2] == Gracz::krzyzyk && Plansza::plansza[i][j + 4] == Gracz::krzyzyk) {
                return true;
                break;
            } else {
                i =+ 2;
                return false;
            }
        }
    }
}
bool Gracz::sprawdz_kolumny(int ktory_gracz)
{
    int i = 0, j = 0;

    if (ktory_gracz == 1) {
        while (j > 5) {
            if (Plansza::plansza[i][j] == Gracz::krzyzyk && Plansza::plansza[i + 2][j] == Gracz::krzyzyk && Plansza::plansza[i + 4][j] == Gracz::krzyzyk) {
                return true;
                break;
            } else {
                i =+ 2;
                return false;
            }
        }
    } else {
        while (j > 5) {
            if (Plansza::plansza[i][j] == Gracz::kolko && Plansza::plansza[i + 2][j] == Gracz::kolko && Plansza::plansza[i + 4][j] == Gracz::kolko) {
                return true;
                break;
            } else {
                i =+ 2;
                return false;
            }
        }
    }
}
bool Gracz::sprawdz_przekatne(int ktory_gracz)
{
    int i = 0, j = 0;

    if (ktory_gracz == 1) {
        if (Plansza::plansza[i][j] == Gracz::krzyzyk && Plansza::plansza[i + 2][j + 2] == Gracz::krzyzyk && Plansza::plansza[i + 4][j + 4] == Gracz::krzyzyk) {
            return true;
        } else if (Plansza[i][j + 4] == Gracz::krzyzyk && Plnasza::plansza[i + 2][j + 2] == Gracz::krzyzyk && Plansza::plansza[i + 4][j] == Gracz::krzyzyk) {
            return true;
        } else {
            return false;
        }
    } else {
        if (Plansza::plansza[i][j] == Gracz::kolko && Plansza::plansza[i + 2][j + 2] == Gracz::kolko && Plansza::plansza[i + 4][j + 4] == Gracz::kolko) {
            return true;
        } else if (Plansza[i][j + 4] == Gracz::kolko && Plnasza::plansza[i + 2][j + 2] == Gracz::kolko && Plansza::plansza[i + 4][j] == Gracz::kolko) {
            return true;
        } else {
            return false;
        }
    }
}
void Gracz::podsumowanie_gry()
{
    cout << "Imie pierwszego gracza to " << Gracz::gracz_1 << " a imie drugiego gracza to " << Gracz::gracz_2 << "\n";
};


