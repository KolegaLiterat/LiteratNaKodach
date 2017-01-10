#include <iostream>

using namespace std;

int main()
{
	int *wi;
	double *wd;
	int tabint[10]={0,1,2,3,4,5,6,7,8,9};
	double tabdbl[10];
	int i, k, m, p;
		
	wd = &tabdbl[0];
	
	for (i = 0; i < 10; i++) {
		*(wd++) = i / 10.0;
	}

	cout << "Tresc tablicy na poczatku\n";
	
	wi = tabint;
	wd = tabdbl;
	
	for (k = 0; k < 0; k++) {
		cout << k << ") \t" << *wi << "\t\t\t\t" << *wd << "\n";
		wi++;
		wd++;
	}
	
	wi = &tabint[5];
	wd = tabdbl + 2;
	
	for (m = 0; m < 4; m++) {
		*(wi++) = -222;
		*(wd++) = -777.5;
	}
	
	cout << "Tresc tablic po wstawieniu nowych wartosci\n";
	
	wi = tabint;
	wd = tabdbl;
	
	for (p = 0; p < 10; p++) {
		cout << "tabint[" << p << "] " << *(wi++) << " \t\ttabdbl[" << p << "] = " << *(wd++) << "\n";
	}
}
