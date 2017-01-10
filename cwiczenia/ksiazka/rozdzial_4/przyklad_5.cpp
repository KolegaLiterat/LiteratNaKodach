#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char tekst[] = {"Uwaga, tarcza zostala przepalona!"};
	char komunikat[120];
	
	strcpy(komunikat, tekst);
	cout << komunikat << endl;
	
	strncpy(komunikat, "12344567test", 9);
	cout << komunikat << endl;
	
	strcpy(komunikat, "--A ku ku--");
	cout << "Na koniec: " << komunikat << endl;
}
