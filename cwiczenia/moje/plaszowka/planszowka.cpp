#include <cstdlib>
#include <iostream>

using namespace std;

void generowanie_planszy();
int losowanie_znaku();

int main()
{
    generowanie_planszy();
}
void generowanie_planszy()
{
    char plansza[6][10];
    bool pole;
    int i, j, znak;
    int test = 0, pozycja = 1; 

    for (i = 0; i < 6; i++) {
        if (i == 0 || i == 5) {
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

    for (i = 1; i < 5; i++) {
        for (j = 1; j < 8; j++) {
            znak = losowanie_znaku();

            switch (znak) {
                case 0:
                    plansza[i][j] = ' ';
                    break;
                
                case 1:
                    if (plansza[i][j - 1] == ' ' && plansza[i][j + 1] == ' ' && plansza[i - 1][j] == '#' && plansza[i + 1][j] == ' ') {
                        plansza[i][j] = '#';
                    } else if (plansza[i][j - 1] == '#' && plansza[i][j + 1] == ' ' && plansza[i - 1][j] == ' ' && plansza[i + 1][j] == ' ') {
                        plansza[i][j] = '#';
                    } else if (plansza[i][j - 1] == '#' && plansza[i][j + 1] == ' ' && plansza[i - 1][j] == '#' && plansza[i - 1][j - 1] == ' ' && plansza[i + 1][j] == ' ') {
                        plansza[i][j] = '#';
                    }
                    break;

                default:
                    break;
            }
        }
    }

    for (i = 0; i < 6; i++) {
       for (j = 0; j < 10; j++) {
           cout << plansza[i][j];
       }

       cout << "\n";
    }
}
int losowanie_znaku()
{
    int znak;

    znak = (rand() % 2) + 0;

    return znak;
}