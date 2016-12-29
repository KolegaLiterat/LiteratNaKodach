#include <iostream>

using namespace std;

int main()
{
	char napis1[] = {"Nocny lot"};
	char napis2[] = {'N','o','c','n','y',' ','l','o','t'};

	cout << "Rozmiar tablicy pierwszej " << sizeof(napis1) << "\n";
	cout << "Rozmiar tablicy drugiej " << sizeof(napis2) << "\n";
}
