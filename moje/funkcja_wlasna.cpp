#include <iostream>

using namespace std;

void nauka (int liczba, int &iteracja);

int main()
{
  int liczba, iteracja;

  cout << "Podaj liczbę \n";
  cin >> liczba;

  nauka (liczba, iteracja);

  cout << "\nPodana liczba " << liczba << "\nIlosc iteracji = " << iteracja;
}

void nauka (int liczba, int &iteracja)
{
  for (iteracja = 0; iteracja < liczba; iteracja++) {
        cout << "\n.+.";
  }
}
