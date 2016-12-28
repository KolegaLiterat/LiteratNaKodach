#include <iostream>

int main()
{
	int ile; //dane wejœciowe w int; niemo¿liwe bêdzie wskazanie 0.7 gwiazdki
	
	std::cout << "Ile mam Ci narysowac gwiazdek?\n? ";
	std::cin >> ile;

	if (ile < 0) {
		std::cout << "\n"
			"Nie... Nie bedzie ujemnych " << ile << " gwiazdek" << std::endl;
	} else {
		std::cout << "\n"
			"No to czas narysowac WSZYSTKIE " << ile << " gwiazdki" << std::endl;
		while (ile) {
			std::cout << "*";
			ile = ile - 1;
		}
	}
	
	std::cout << "\n"
		"Teraz ILE ma wartosc " << ile << std::endl;
}
