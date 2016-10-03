#include <iostream>

int main()
{
	double kasa, kara; //bo wypada³oby za³o¿yæ, ¿e ktoœ wpise 98.90

	std::cout << "Ile kosztuje utrzymanie biura?\n? "; //wpisanie wartoœci do kasa
	std::cin >> kasa;
	
	/* Troche bardziej rozbudowana funkcja, takie male cwiczenie, bo chcialem sprawdzicz czy potrafie cos takiego zrobic;
	Moja walka z tym trwala bardzo dlugo, ale nauczylem sie kliku rzeczy. Przede wszystkim tego, ze mam patrzec na to, co pisze i uklada program w sposob logiczny dlatego:*/	

	if (kasa <= 0) { //sprwadzam, czy wartosc kasa jest wieksza lub rowna od zera
		std::cout << "\n"
			"Przykro mi, ale wartosci ujemnej lub zera nie wpiszesz\n"
			"Kara musi byc..." << std::endl;
		kara = 1;
	} else if (kasa == 866) { //sprawdzam, czy wartosc kasa jest rowna 866
		std::cout << "\n"
			"skad masz takie informacje? O.o\n"
			"Widziales magiczna kartke?" << std::endl;
		kara = 0; 	
	} else if (kasa > 0) {
		while (kasa < 866) {
			std::cout << "\n"
				"Uzytkowniku! Do dobrej odpowiedzi brakuje Ci " << 866 - kasa << "." << " Kara musi byc..." << std::endl;
			kara = 1;
			break;
		}
		while (kasa > 866) {
			std::cout << "\n"
				"Uzytkowniku! Jest za duzo o " << kasa - 866 << "." << " Kara musi byc..." << std::endl;
			kara = 1;
			break;
		} 
	} 
	if (kara = 1) {
		std::cout << "\n"
			"BACH! MACZUGA W GLOWE!" << std::endl;
	} else {
		std::cout << "\n"
			"BRAWO! UCIEKASZ PRZED MACZUGA!" << std::endl;
	}
}

