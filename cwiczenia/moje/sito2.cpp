#include <iostream>
#include <cstdlib>

using namespace std;

void uzupelnienie_tablicy(int *liczby, int rozmiar);
void wykreslanie_liczb(int *liczby, int rozmiar);
void wyswietlenie_wartosci(int *liczby, int rozmiar);

int main()
{
    int rozmiar;
    int *liczby;

    cout << "Zakres poszukiwan: od 0 do\n";
    cin >> rozmiar;

    if (rozmiar <= 1) {
        cout << "Liczba pierwsza, to liczba naturalna wieksza od 1, ktora posiada dwa dzielniki naturalne!\n";
    } else {
        liczby = new int[rozmiar + 1];

        uzupelnienie_tablicy(liczby, rozmiar);
        wykreslanie_liczb(liczby, rozmiar);
        wyswietlenie_wartosci(liczby, rozmiar);

        delete[] liczby;
    }
}
void uzupelnienie_tablicy(int *liczby, int rozmiar)
{
    int i;

    for (i = 0; i < rozmiar + 1; i++) {
        liczby[i] = i;
    }
}
void wykreslanie_liczb(int *liczby, int rozmiar)
{
    int i, j, koniec, mnoznik, wykresl;

    koniec = rozmiar;

    for (i = 0; i < rozmiar + 1; i++) {
        if (liczby[i] > 1) {
            mnoznik = liczby[i];
            wykresl = 0;
            while (wykresl <= koniec) {
                wykresl = liczby[i] * mnoznik;
                for (j = 0; j < rozmiar + 1; j++) {
                    if (liczby[j] == wykresl) {
                        liczby[j] = 0;
                    }
                }
                mnoznik++;
            }
        }
    }
}
void wyswietlenie_wartosci(int *liczby, int rozmiar)
{
    int i;

    cout << "Liczby pierwsze to:\n";

    for (i = 0; i < rozmiar + 1; i++) {
        if (liczby[i] > 1) {
            cout << liczby[i] << "\n";
        }
    }
}
