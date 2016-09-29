#include <iostream>

int main()
{
	double cal;                         //Dane wejściowe
	       
	std::cout << "Podaj wymiar w calach:\n? ";  //Wyświetlna delikatną prośbę o wpisanie danych
	std::cin >> cal;                            //Złapanie danej z klawiatury

    double wynik = cal * 2.54;                  //Przeliczenie

	std::cout << "\n" 
		<< cal << " cale to " << wynik << " centymetrow." << std::endl;   //Wyświetlnie wyniku
}
