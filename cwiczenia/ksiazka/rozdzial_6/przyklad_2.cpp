#include <iostream>

using namespace std;

int balkon = 77;
void spiew();

class Topera
{
	public:
		int n;
		double balkon;
	
	void funkcja();
	void spiew()
	{
		cout << "Funkcja spiew (z opery): tra - la - la!\n";
	}
};
void Topera::funkcja()
{
	cout << "balkon (skladnik klasy) = " << balkon << "\n";
	cout << "balkon (zmienna globalna) = " << ::balkon << "\n";
	
	char balkon = 'M';
	
	cout << "Po definicji zmiennej lokalnej----\n" <<
		"balkon (zmienna loklana) = " << balkon << "\n" <<
		"balkon (skladnik klasy) = " << Topera::balkon << "\n" <<
		"balko (zmienna globalna) = " << ::balkon << "\n";
	
	spiew();
	
	int spiew = 7;
	
	cout << "Po zaslonieciu da sie wywolac funkcje spiewa tak\n";
	Topera::spiew();
}
int main()
{
	Topera Lohengrin;
	
	Lohengrin.balkon = 6;
	Lohengrin.funkcja();
	spiew();
}
void spiew()
{
	cout << "Zwykla funkcja spiewa (nie ma nic wspolnego z klasa)\n";
}
