#include <cstdlib>
#include <iostream>

using namespace std;

void generowanie_planszy();
void losowanie_wydarzen(char plansza[][10]);

int main()
{
    generowanie_planszy();
}
void generowanie_planszy()
{
    char plansza[6][10];
    int i, j;

    for (i = 0; i < 6; i++) {
        if (i == 0) {
            j = 0;
            while (j < 10) {
                if (j == 7) {
                    plansza[i][j] = '/';
                    j++;
                } else {
                    plansza[i][j] = '#';
                    j++;
                }
            }
        } else if (i == 1) {
            j = 0;
            while (j < 10) {
                if (j == 0 || j == 9) {
                    plansza[i][j] = '#';
                    j++;
                } else if (j == 4) {
                    plansza[i][j] = '/';
                    j++;
                } else {
                    plansza[i][j] = ' ';
                    j++;
                }
            }
        } else if (i == 2) {
            j = 0;
            while (j < 10) {
                if (j == 0 || j == 4 || j == 9) {
                    plansza[i][j] = '#';
                    j++;
                } else {
                    plansza[i][j] = ' ';
                    j++;
                }
            }
        } else if (i == 3) {
            j = 0;
            while (j < 10) {
                if (j < 5 || j == 9) {
                    plansza[i][j] = '#';
                    j++;
                } else {
                    plansza[i][j] = ' ';
                    j++;
                }
            }
        } else if (i == 5) {
            j = 0;
            while (j < 10) {
                plansza[i][j] = '#';
                j++;
            }
        } else {
            j = 0;
            while (j < 10) {
                if (j == 0 || j == 9) {
                    plansza[i][j] = '#';
                    j++;
                } else {
                    plansza[i][j] = ' ';
                    j++;
                }
            }
        }
    }

    losowanie_wydarzen(plansza);

    for (i = 0; i < 6; i++) {
       for (j = 0; j < 10; j++) {
           cout << plansza[i][j];
       }

       cout << "\n";
    }
}
void losowanie_wydarzen(char plansza[][10])
{
    int wydarzenia, x, y, i, j;
    char ogien = 'F', wybuch = '_', dym = 'S';

    wydarzenia = (rand() % 5) + 1;

    while (wydarzenia > 0) {
        x = (rand() % 5) + 0;
        y = (rand() % 9) + 0;

        plansza[x][y] = ogien;

        wydarzenia--;
    }
}
