#include <iostream>

int main()
{
	int kara; // 1 i 0; test na zasadzie prawda - fa³sz
	double kasa; //bo wypada³oby za³o¿yæ, ¿e ktoœ wpise 98.90

	std::cout << "Ile kosztuje utrzymanie biura?\n? "; //wpisanie wartoœci do kasa
	std::cin >> kasa;
	
	/* Troche bardziej rozbudowana funkcja, takie male cwiczenie, bo chcialem sprawdzicz czy potrafie cos takiego zrobic;
	Moja walka z tym trwala bardzo dlugo, ale nauczylem sie kliku rzeczy. Przede wszystkim tego, ze mam patrzec na to, co pisze i uklada program w sposob logiczny dlatego:*/	

	if (kasa <= 0) { //sprwadzam, czy wartosc kasa jest wieksza lub rowna od zera
		std::cout << "\n"
			"Przykro mi, ale wartosci ujemnej lub zera nie wppiszesz\n"
			"Kara musi byc..." << std::endl;
		kara = 1;
	} else if (kasa == 866) { //sprawdzam, czy wartosc kasa jest rowna 866
		std::cout << "\n"
			"skad masz takie informacje? O.o\n"
			"Widziales magiczna kartke?" << std::endl;
		kara=0; 	
	} else {
		for (kasa > 0; kasa < 866; kasa = kasa) { //dla kazdej kasa wiekszej lub rownej zero i mniejszej od 866, wartosc kasa jest ponowanie zapisywana bez zmian do kasa;
		std::cout << "\n"
		"U¿ytkowniku! Do dobrej odpowiedzi brakuje Ci " << kasa - 866 << "." << " Kara musi byc..." << std::endl; //wyliczenie i podanie róznicy
		kara = 1;
		break;
		}
		for (kasa > 0; kasa > 866; kasa = kasa) { //dla kazdej kasa wiekszej od zera i wiekszej od 866, wartosc kasa jest ponownie zapisywana bez zmian do kasa
		std::cout << "\n"
			"U¿ytkowniku! Tym razem podales za duzo o " << kasa - 866 << "." << " Kara musi byc..." << std::endl; //wyliczenie i podanie ró¿nicy
		kara = 1;
		break;
		}
	} 	

	//Switch do sprawdzenia, czy masz jakies punkty kary (w trakcie pisanie tego malego kodu dowiedzialem sie, ze moze on miec wylacznie int...

	switch (kara) {
		case 0:			
		std::cout << "\n"
			"Uciekasz przed maczuga, BRAWO!" << std::endl;
		break;

		case 1:
		std::cout << "\n"
			"BACH! MACZUGA W GLOWE!" << std::endl;
		break;
	}
}

