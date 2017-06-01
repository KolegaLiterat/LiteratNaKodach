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
    if (ktory_gracz == 1) {
        cout << "Podaj nazwe pierwszego gracza: ";
        getline(cin, Gracz::gracz_1);

        if (Gracz::sprawdz_nazwe(ktory_gracz) == false) {
            cout << "BLAD! NIE MOZESZ PODAC PUSTEJ NAZWY! Wpisz imie ponownie!\n";

            Gracz::podaj_imiona(ktory_gracz);
        }
    } else {
        cout << "Podaj nazwe drugiego gracza: ";
        getline(cin, Gracz::gracz_2);

        if (Gracz::sprawdz_nazwe(ktory_gracz) == false) {
            out << "BLAD! NIE MOZESZ PODAC PUSTEJ NAZWY! Wpisz imie ponownie!\n"
            Gracz::podaj_imiona(ktory_gracz);
        }
    }
}
void Gracz::ruch(int ktory_gracz)
{
    int x, y;

    if (ktory_gracz == 1) {
        cout << Gracz::gracz_1 << "(" << Gracz::krzyzyk << ")\nPodaj rzad, w ktorym ma zostac postawiony krzyzyk:\n";
        cin >> x;
        cout << "A teraz podaj kolumne:\n";
        cin >> y;
    } else {
        cout << Gracz::gracz_2 << "(" << Gracz::kolko << ")\nPodaj rzad, w ktorym ma zostac postwione kolko:\n";
        cin >> x;
        cout << "A teraz podaj kolumne:\n";
        cin >> y;
    }

    if (Gracz::sprawdz_zakres(x, y) == true) {
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
    } else {
        Gracz::ruch(ktory_gracz);
    }
}
bool Gracz::sprawdz_wygrana(int ktory_gracz)
{
    if (Gracz::sprawdz_wiersze(ktory_gracz) == true) {
        return true;
    } else if (Gracz::sprawdz_kolumny(ktory_gracz) == true) {
        return true;
    } else if (Gracz::sprawdz_przekatne(ktory_gracz) == true) {
        return true;
    } else {
        return false;
    }
}
//private
bool Gracz::sprawdz_nazwe(int ktory_gracz)
{
    if (ktory_gracz == 1) {
        if (Gracz::gracz_1.length() == 0) {
            return false;
        } else {
            return true;
        }
    } else {
        if (Gracz::gracz_2.length() == 0) {
            return false;
        } else {
            return true;
        }
    }
}
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
bool Gracz::sprawdz_wiersze(int ktory_gracz)
{
    int i = 0, j = 0;

    if (ktory_gracz == 1) {
        while (i < 5) {
            if (Plansza::plansza[i][j] == Gracz::krzyzyk && Plansza::plansza[i][j + 2] == Gracz::krzyzyk && Plansza::plansza[i][j + 4] == Gracz::krzyzyk) {
                return true;
                break;
            } else {
                i += 2;
            }
        }
    } else {
        while (i < 5) {
            if (Plansza::plansza[i][j] == Gracz::krzyzyk && Plansza::plansza[i][j + 2] == Gracz::krzyzyk && Plansza::plansza[i][j + 4] == Gracz::krzyzyk) {
                return true;
                break;
            } else {
                i += 2;
            }
        }
    }
    return false;
}
bool Gracz::sprawdz_kolumny(int ktory_gracz)
{
    int i = 0, j = 0;

    if (ktory_gracz == 1) {
        while (j < 5) {
            if (Plansza::plansza[i][j] == Gracz::krzyzyk && Plansza::plansza[i + 2][j] == Gracz::krzyzyk && Plansza::plansza[i + 4][j] == Gracz::krzyzyk) {
                cout << "i = " << i << "j = " << j << "\n";
                return true;
                break;
            } else {
                j += 2;
            }
        }
    } else {
        while (j < 5) {
            if (Plansza::plansza[i][j] == Gracz::kolko && Plansza::plansza[i + 2][j] == Gracz::kolko && Plansza::plansza[i + 4][j] == Gracz::kolko) {
                return true;
                break;
            } else {
                j += 2;
            }
        }
    }
    return false;
}
bool Gracz::sprawdz_przekatne(int ktory_gracz)
{
    int i = 0, j = 0;

    if (ktory_gracz == 1) {
        if (Plansza::plansza[i][j] == Gracz::krzyzyk && Plansza::plansza[i + 2][j + 2] == Gracz::krzyzyk && Plansza::plansza[i + 4][j + 4] == Gracz::krzyzyk) {
            return true;
        } else if (Plansza::plansza[i][j + 4] == Gracz::krzyzyk && Plansza::plansza[i + 2][j + 2] == Gracz::krzyzyk && Plansza::plansza[i + 4][j] == Gracz::krzyzyk) {
            return true;
        } else {
            return false;
        }
    } else {
        if (Plansza::plansza[i][j] == Gracz::kolko && Plansza::plansza[i + 2][j + 2] == Gracz::kolko && Plansza::plansza[i + 4][j + 4] == Gracz::kolko) {
            return true;
        } else if (Plansza::plansza[i][j + 4] == Gracz::kolko && Plansza::plansza[i + 2][j + 2] == Gracz::kolko && Plansza::plansza[i + 4][j] == Gracz::kolko) {
            return true;
        } else {
            return false;
        }
    }
}
void Gracz::podsumowanie_gry(int ktory_gracz)
{
    if (ktory_gracz == 1) {
        cout << "Pojedynek wygral " << Gracz::gracz_1 << " GRATULACJE!\n";
    } else if (ktory_gracz == 1) {
        cout << "Pojedynek wygral " << Gracz::gracz_2 << " GRATULACJE!\n";
    } else {
        cout << "Pojedynek zakonczony remisem!\n";
    }
};


