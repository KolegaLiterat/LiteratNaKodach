#include <iostream>

using namespace std;

char *strcopy(char *cel, const char *zrodlo);

int main()
{
	char poziom[] = {"Poziom szumu w normie"};
	char komunikat[80];
	
	strcopy(komunikat, poziom);
	
	cout << poziom << "\n";
	cout << komunikat << "\n";
}
char *strcopy(char *cel, const char *zrodlo)
{
	char *poczatek = cel;
	
	while(*(cel++) = *(zrodlo++));
	return poczatek; 
} 
