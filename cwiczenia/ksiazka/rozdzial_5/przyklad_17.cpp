#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char * argv[])
{
	float x;
	int i;
	
	cout << "Wydruk parametrow wywolania:\n";
	
	for (i = 0; i < argc; i++) {
		cout << "Parametr nr " << i << " to C-string " << argv[i] << "\n";
	}
	
	x = atof(argv[2]);
	x =+ 4;
	
	cout << "X = " << x << "\n";
}
