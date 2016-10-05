#include <iostream>
using namespace std;

int main ()
{
	signed int sciezka;
	
	cout << "Gdzie idziemy?\n" 
		"Wybierz: 9, 10 lub 11\n?" << endl;
	cin >> sciezka;

	if (sciezka < 0 || sciezka > 11) {
		cout << "\n"
			"Buntownik ;)" << endl;
	} else {
		switch (sciezka) {
			case 9:
			cout << "\n"
				"Wyl¹dowa³eœ w lesie..." << endl;
			break;
			
			case 10:
			cout << "\n"
				"Jedno, wielkie nigdzie..." << endl;
			break;
			
			case 11:
			cout << "\n"
				"WITAJ W GARMORY!" << endl;
			break;
		}
	}
}
