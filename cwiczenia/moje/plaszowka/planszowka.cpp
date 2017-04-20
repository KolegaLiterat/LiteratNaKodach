#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

void generowanie_planszy();
void wyswietlenie_planszy(char plansza[][10]);
void losowanie_wydarzen(char plansza[][10]);
void tura(char plansza[][10]);

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
    tura(plansza);
}
void wyswietlenie_planszy(char plansza[][10])
{
    int i, j;

    for (i = 0; i < 6; i++) {
        for (j = 0; j < 10; j++) {
            cout << plansza[i][j];
        }
       cout << "\n";
    }
    cout << "\n";
}
void losowanie_wydarzen(char plansza[][10])
{
    int wydarzenia, x, y;
    char ogien = 'F';

    srand(time(NULL));

    wydarzenia = (rand() % 5) + 1;

    while (wydarzenia > 0) {
        x = (rand() % 5) + 0;
        y = (rand() % 9) + 0;

        plansza[x][y] = ogien;

        wydarzenia--;
    }

    wyswietlenie_planszy(plansza);
}
void tura(char plansza[][10])
{
    static int powtorzenia = 1;
    int i, j;
    char dym = 's', ogien = 'F', ponownie;

    if (powtorzenia % 2 == 1) {
        for (i = 0; i < 6; i++) {
            for (j = 0; j < 10; j++) {
                if (i == 0) {
                    if (plansza[i][j] == ogien && j == 0) {
                        plansza[i][j + 1] = dym;
                        plansza[i + 1][j] = dym;
                    } else if (plansza[i][j] == ogien && j == 9) {
                        plansza[i][j - 1] = dym;
                        plansza[i + 1][j] = dym;
                    } else if (plansza[i][j] == ogien) {
                        plansza[i][j + 1] = dym;
                        plansza[i][j - 1] = dym;
                        plansza[i + 1][j] = dym;
                    } 
                } else if (i == 6) {
                    if (plansza[i][j] == ogien && j == 0) {
                        plansza[i][j + 1] = dym;
                        plansza[i - 1][j] = dym;
                    } else if (plansza[i][j] == ogien && j == 9) {
                        plansza[i][j - 1] = dym;
                        plansza[i - 1][j] = dym;
                    } else if (plansza[i][j] == ogien) {
                        plansza[i][j + 1] = dym;
                        plansza[i][j - 1] = dym;
                        plansza[i - 1][j] = dym;
                    }
                } else if (plansza[i][j] == ogien) {
                    plansza[i][j + 1] = dym;
                    plansza[i][j - 1] = dym;
                    plansza[i + 1][j] = dym;
                    plansza[i - 1][j] = dym;
                }
            }
        }
    } else if (powtorzenia % 2 == 0) {
        for (i = 0; i < 6; i++) {
            for (j = 0; j < 10; j++) {
                if (i == 0) {
                    if (plansza[i][j] == dym && j == 0) {
                        plansza[i][j + 1] = ogien;
                        plansza[i + 1][j] = ogien;
                    } else if (plansza[i][j] == dym && j == 9) {
                        plansza[i][j - 1] = ogien;
                        plansza[i + 1][j] = ogien;
                    } else if (plansza[i][j] == dym) {
                        plansza[i][j + 1] = ogien;
                        plansza[i][j - 1] = ogien;
                        plansza[i + 1][j] = ogien;
                    } 
                } else if (i == 6) {
                    if (plansza[i][j] == dym && j == 0) {
                        plansza[i][j + 1] = ogien;
                        plansza[i - 1][j] = ogien;
                    } else if (plansza[i][j] == dym && j == 9) {
                        plansza[i][j - 1] = ogien;
                        plansza[i - 1][j] = ogien;
                    } else if (plansza[i][j] == dym) {
                        plansza[i][j + 1] = ogien;
                        plansza[i][j - 1] = ogien;
                        plansza[i - 1][j] = ogien;
                    }
                } else if (plansza[i][j] == dym) {
                    plansza[i][j + 1] = ogien;
                    plansza[i][j - 1] = ogien;
                    plansza[i + 1][j] = ogien;
                    plansza[i - 1][j] = ogien;
                }
            }
        }
    }

    wyswietlenie_planszy(plansza);

    cout << "Nastepna tura?\n[T]ak lub [N]ie\n";
    cin >> ponownie;

    if (ponownie == 'T' || ponownie == 't') {
        powtorzenia++;

        tura(plansza);
    } else if (ponownie == 'N' || ponownie == 'n') {
        cout << "No to koniec!\n";
    } else {
        cout << "Blad! A po bledzie - koniec ;(\n";
    }
}