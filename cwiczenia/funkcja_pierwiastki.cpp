#include <iostream>

using namespace std;

int pierwiastki (int liczba, int iteracje);

int main()
{
  int liczba, iteracje, wynik;

  cout << "Co pierwiastkujemy:\n";
  cin >> liczba;

  cout << "Ile razy szukamy:\n";
  cin >> iteracje;

  wynik = pierwiastki (liczba, iteracje);

  if (wynik == 0) {
    	cout << "Nie udalo sie znalezc wlasciwego pierwiastka...\n"
    	"Sprobuj ponownie...\n";
  } else {
    cout << "Poszukiwany pierwiastek wynosi " << wynik << "\n";
  }
}

int pierwiastki (int liczba, int iteracje)
{
  int powtorzenie;
  float pierw_1 = 0, pierw_2 = 1;

  cout << "Licze pierwiastek i zajmuje mi to ponad godzine\n";

  for (powtorzenie = 0; powtorzenie < iteracje; powtorzenie++) {
      pierw_1 = (pierw_2 + liczba / pierw_2) / 2;
      pierw_2 = pierw_1;
  }
  if (pierw_2 * pierw_2 == liczba) {
    return pierw_2;
  } else {
    return 0;
  }
}
