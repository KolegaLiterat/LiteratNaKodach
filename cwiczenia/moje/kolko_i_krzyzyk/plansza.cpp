#include "plansza.h"
#include <cstdlib>
#include <iostream>

using namespace std;

//public
void Plansza::wyswietl_plansze(char plansza[][5])
{
	int i, j;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            cout << plansza[i][j];
        }
        cout << "\n";
    }
}
void Plansza::stworz_plansze(char plansza[][5])
{
	char puste = ' ', pion = '|', poziom = '-';
    int i, j;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (i % 2 == 0 && j % 2 == 0) {
                plansza[i][j] = puste;
            } else if (i % 2 == 0 && j % 2 == 1) {
                plansza[i][j] = pion;
            } else {
                plansza[i][j] = poziom;
            }
        }
    }
};

