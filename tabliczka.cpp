#include <iostream>
using namespace std;

int main()
{
	int a, b;
	
	cout << "Co mnozymy? ";
	cin >> b; 	
	
	for (a = 1; a < 11; a++) {
		cout << a * b << ", "; 
	}
}
