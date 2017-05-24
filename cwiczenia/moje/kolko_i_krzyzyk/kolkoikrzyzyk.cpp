#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    char plansza[4][4];
    int i, j;
    char podzial_pion = '|', podzial_poziom = '-', kolko = 'O', krzyzyk = 'X';

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            plansza[i][j] = podzial_pion;
        }
    }

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            cout << plansza[i][j];
        }
        cout << "\n";
    }
}