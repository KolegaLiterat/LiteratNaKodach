#include <iostream>

using namespace std;

void zer(int wart, int &ref);

int main()
{
	int a = 44, b = 77;

	cout << "Przed wywolaniem funkcji 'zer'\n"
		<< "a = " << a << " b = " << b << endl;

	zer(a, b);
	
	cout << "\nPo wywo³aniu funkcji 'zer' \n"
		<< "a = " << a << " b = " << b << endl;
}

void zer(int wart, int &ref)
{
	cout << "\nW funkcji 'zer' przed zerowaniem \n"
		<< "wart = " << wart << " ref = " << ref << endl;

	wart = 0;
	ref = 0;
	
	cout << "\nW funkcji 'zer' po zerowaniu \n"
		<< "wart = " << wart << " ref = " << ref << endl;
}
