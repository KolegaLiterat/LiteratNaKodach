#include <iostream>
using namespace std;

int main ()
{
	signed int sciezka;
	
	cout << "Gdzie idziemy?\n" 
		"Wybierz: 9, 10 lub 11\n?";
	cin >> sciezka;
	cout << "\n";

	switch (sciezka) { 
		default:
			cout << "Buntownik ;)";
		break;

		case 9:
			cout <<	"Wyl¹dowa³eœ w lesie...";
		break;
		
		case 10:
			cout << "Jedno, wielkie nigdzie...";
		break;
			
		case 11:
			cout <<	"WITAJ W GARMORY!";
		break;
	}
}
