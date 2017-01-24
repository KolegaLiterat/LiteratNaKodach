#include<iostream>

#define ROZMIAR 5

using namespace std;

int main()
{
	int tablica[ROZMIAR] = {2,3,6,6,1};
	int i;
	
	for (i = 0; i < ROZMIAR; i++) {
		if (tablica[i] % 2 == 0) {
			cout << tablica[i] << " to liczba parzysta\n"; 
		}
	}
	
		
 
}
