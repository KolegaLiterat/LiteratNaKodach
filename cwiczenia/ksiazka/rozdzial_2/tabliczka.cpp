#include <iostream>
using namespace std;

int main()
{
	int a, b;
	
	for (a = 1; a < 11; a++) {
		for (b = 1; b < 11; b++) {
			cout << a * b << ", ";
		}
		cout << "\n";
	}
}
