#include <iostream>

int main()
{
	int ile; //instrukcja określająca liczbę gwiazdek do narysowania; nie double, bo jak Ci mam narysować 0.7 gwiazdki?

	pytanie:
	std::cout << "\n" 
		"Ile gwiazdek ma kapitan?\n?";
	std::cin >> ile; //nadaje wartość wpisaną z klawiatury
	std::cout << "\n"
		"Rysujemy! WSZYSTKIE " << ile << std::endl;
	
	if(ile<0) //SPRAWDZAM CZY MI ZNOWU NIE PSUJESZ PRZYKŁADU Z KSIĄŻKI!
	{
		std::cout << "\n" 
			"Nie Devi, kapitan nie bedzie mial " << ile <<  " gwiazdki..." << std::endl;
			goto pytanie;
	}
    else
    {
		std::cout << "\n";
           while (ile) //instrukcja, która ma być sprawdzana
	    {
		    std::cout <<"*"; //to, co ma być wyświetlane w określonej wartości
		    ile=ile-1;
	    }
    }
	//test wartości ile
	test:
	std::cout << "\n"
		"A teraz ile ma wartosc " << ile << std::endl;
}
