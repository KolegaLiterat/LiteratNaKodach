#include <iostream>

using namespace std;

void potrojenie(int ile, long t[]);

int main()
{
	const int rozmiar = 8192;
	long widmo[rozmiar];
	int i;	

	for (i = 0; i < rozmiar; i++) {
		widmo[i] = i;
	
		if (i < 6) {
			cout << "Widmo[" << i << "]= " << widmo[i] << "\n";
		}
	}
	
	potrojenie(rozmiar, widmo);
	
	cout << "Po wywolaniu funkcji\n";
	
	for (i = 0; i < 4; i++) {
		cout << "widmo[" << i << "]= " << widmo[i] << "\n";
	}
}

void potrojenie(int ile, long t[])
{
	int i;
	
	for (i = 0; i < ile; i++) {
		t[i] *= 3;
	}
}
