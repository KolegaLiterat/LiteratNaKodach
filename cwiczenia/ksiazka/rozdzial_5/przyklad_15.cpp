#include <iostream>

using namespace std;

int pierwsza();
int druga();

int main()
{
	int i;
	int (*wskaz_fun)();
	
	cout << "Na ktora funkcje ma wskazywac wskaznik?\n"
		"Pierwsza = 1\nDruga = 2\n"
		"Podaj numer\n";
	cin >> i;
	
	switch (i) {
		case 1:
			wskaz_fun = &pierwsza;
			break;
		case 2:
			wskaz_fun = &druga;
			break;
		default:
			wskaz_fun - 0;
			break;
	}
	
	cout << "Wedlug rozkazu!\n";
	
	if (wskaz_fun) {
		for (i = 0; i < 3; i++) {
			(*wskaz_fun)();
		}
	}
}
int pierwsza()
{
	cout << "Funkcja pierwsza!\n";
	return 9;
}
int druga()
{
	cout << "Funkcja druga!\n";
	return 106;
}
