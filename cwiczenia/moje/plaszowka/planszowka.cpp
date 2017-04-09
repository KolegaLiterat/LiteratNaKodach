#include <cstdlib>
#include <iostream>

using namespace std;

void generowanie_planszy();
void generowanie_srodka(char *plansza);

int main()
{
    generowanie_planszy();
}
void generowanie_planszy()
{
    char plansza[6][10];
    int i, j;

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

    for (i = 0; i < 7; i++) {
            j = 0;
            while (j < 10) {
                generowanie_srodka(&plansza[i][j]);
                j++;
            }
    }

    for (i = 0; i < 7; i++) {
       for (j = 0; j < 10; j++) {
           cout << plansza[i][j];
       }

       cout << "\n";
    }
}
void generowanie_srodka(char *plansza)
{
    cout << "Wartosc tablicy: " << plansza << "\n";
}
