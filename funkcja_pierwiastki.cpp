#include <iostream>

using namespace std;

int pierwiastki (int liczba, int iteracje);

int main()
{
  int liczba, iteracje;

  cout << "Co pierwiastkujemy: \n";
  cin >> liczba;

  cout << "Ile razy szukamy: \n";
  cin >> iteracje;

  pierwiastki (liczba, iteracje);

  if (pierwiastki(liczba, iteracje) == 0) {
    cout << "Nie udalo sie znalezc wlasciwego pierwiastka... \n"
    "Sprobuj ponownie...\n";
  } else {
    cout << "Poszukiwany pierwiastek wynosi " << pierwiastki(liczba, iteracje) << "\n";
  }
}

int pierwiastki (int liczba, int iteracje)
{
  int powtorzenie;
  float pierw_1 = 0, pierw_2 = 1;

  for (powtorzenie = 0; powtorzenie < iteracje; powtorzenie++){
      pierw_1 = (pierw_2 + liczba/pierw_2)/2;
      pierw_2 = pierw_1;
    }
  if (pierw_2 * pierw_2 == liczba) {
    return pierw_2;
  } else {
    return 0;
  }
}
