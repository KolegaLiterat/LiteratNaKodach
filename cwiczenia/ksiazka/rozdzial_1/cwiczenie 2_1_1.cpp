#include <iostream>

int main()
{
	double cal;																	//Dane wejściowe
	
	std::cout << "Podaj wymiar w calach:\n? ";									//Wyświetlna delikatną prośbę o wpisanie danych
	std::cin >> cal;															//Złapanie danej z klawiatury

	std::cout << "\n" 
		<< cal << " cale to " << cal * 2.54 << " centymetrow." << std::endl;	//Wyświetlnie wyniku z przeliczeniem
}
