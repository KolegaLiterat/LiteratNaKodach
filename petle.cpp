#include <iostream>
using namespace std;

int main()
{
	unsigned int liczba;
	
	cout << "Do robienia petelek, potrzeba bedzie liczba:\n? ";
	cin >> liczba;

	while (liczba <= 4) {
		cout << "I petelka z " << liczba << "\n";
		liczba++;
	}
	
	do {
		cout << "II petelka z " << liczba << "\n";
		liczba--;
	} while (liczba >= 6);

	for (liczba = 5; liczba < 10; liczba++) {
		cout << "III petelka z " << liczba << "\n";
	}	
}
