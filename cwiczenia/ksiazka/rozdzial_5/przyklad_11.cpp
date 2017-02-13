#include <iostream>

using namespace std;

int main()
{
	const char *stacja[] = {"Bedzin", "Bedzin Miasto", "Sosnowiec", "Katowice Szopienice"};
	const char *www[3];
	
	int i;
	
	for (i = 0; i < 4; i++) {
		cout << "Stacja " << stacja[i] << "\n";
	}
	
	www[0] = stacja[2];
	www[1] = stacja[0];
	www[2] = "Taki tekst";
	
	cout << "Oto trzy elementy tablicy:\n" <<
		www[0] << ", " << www[1] << ", " << www[2] << "\n";
}
