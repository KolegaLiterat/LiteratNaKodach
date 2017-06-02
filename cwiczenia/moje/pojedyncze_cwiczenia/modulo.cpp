#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int liczby_naturalne[] = {9, 10, 11, 12};
    int i, moc; 
    int przesuniecie = 9, krok = 3;

    moc = sizeof liczby_naturalne / sizeof liczby_naturalne[0];

    for (i = 0; i < moc; i++) {
        cout << "f(" << liczby_naturalne[i] << ") " << liczby_naturalne[0] + ((liczby_naturalne[i] - przesuniecie + krok) % moc) << "\n";
    }
}
