#include <cstdlib>
#include <iostream>

using namespace std;

void generowanie_planszy();

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

    for (i = 1; i < 5; i++) {
        for (j = 1; j < 8; j++) {

        }
    } 

    for (i = 0; i < 6; i++) {
       for (j = 0; j < 10; j++) {
           cout << plansza[i][j];
       }

       cout << "\n";
    }
}
