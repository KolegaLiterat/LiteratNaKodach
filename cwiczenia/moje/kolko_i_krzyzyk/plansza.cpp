//pliki
#include "plansza.h"
//biblioteki
#include <cstdlib>
#include <iostream>

using namespace std;

//protected
void Plansza::wyswietl_plansze(int wywolanie)
{
	int i, j;

    if (wywolanie == 1) {
        Plansza::stworz_plansze();
    } else {
        for (i = 0; i < 5; i++) {
            for (j = 0; j < 5; j++) {
                cout << Plansza::plansza[i][j];
            }
            cout << "\n";
        }
    }
}
//private
void Plansza::stworz_plansze()
{
    int i, j;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (i % 2 == 0 && j % 2 == 0) {
                Plansza::plansza[i][j] = Plansza::puste;
            } else if (i % 2 == 0 && j % 2 == 1) {
                Plansza::plansza[i][j] = Plansza::pion;
            } else {
                Plansza::plansza[i][j] = Plansza::poziom;
            }
        }
    }
}