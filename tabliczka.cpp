#include <iostream>
using namespace std;

int main()
{
	int a, b;
	
	while (a * b < 101) {
		for (a = 1; a < 11; a++) {
			for (b = 1; b < 11; b++) {
				cout << a * b << ", ";
			}
			cout << "\n";
		}
	}	
}
