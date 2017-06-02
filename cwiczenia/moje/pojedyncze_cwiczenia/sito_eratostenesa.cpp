#include <cstdlib>
#include <iostream>

using namespace std;

void sito_eratostenesa(int *zbior, rozmiar);

int main()
{
    int rozmiar = 101;
    int i;
    int *zbior;

    zbior = new int[rozmiar];

    for (i = 0; i < rozmiar; i++) {
        zbior[i] = i;
    }

    sito_eratostenesa(zbior);
}
void sito_eratostenesa(int *zbior, int rozmiar)
{
    int i;

    for (i = 2; i < rozmiar; i++) {

    }
}