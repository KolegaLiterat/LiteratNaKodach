#include <iostream>

using namespace std;

main()
{
	int i, t[4];
	
	for (i = 0; i < 4; i++) {
		t[i] = 100 * i;
	}
	
	cout << "Wydruk tresci tablicy:\n";
	
	for (i = 0; i < 4; i++) {
		cout << "Element nr " << i << " ma wartosc " << t[i] << "\n";
	}
}
