#include <iostream>

int main()
{
	int ile; //instrukcja określająca liczbę gwiazdek do narysowania; nie double, bo jak Ci mam narysować 0.7 gwiazdki?

	std::cout << "Ile gwiazdek ma kapitan?\n? ";
	std::cin >> ile; //nadaje wartość wpisaną z klawiatury
	std::cout << "\n"
		"Rysujemy! WSZYSTKIE " << ile << std::endl;
	
	if (ile < 0) {
	
		std::cout << "\n" 
			"Nie Devi, kapitan nie bedzie mial " << ile <<  " gwiazdki..." << std::endl;
		} else {

		std::cout << "\n";
			while (ile) {
			std::cout <<"*"; //to, co ma być wyświetlane w określonej wartości
			ile=ile-1;
				}
		}
	std::cout << "\n"
		"A teraz ile ma wartosc " << ile << std::endl;
}
