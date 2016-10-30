#include <iostream>
#define STO_PROCENT 100 

using namespace std;

inline int zao(float wynik)
{
	return (wynik + 0.5);
}

int main()
{
	float post, link, wynik;
	int zasieg;
		
	cout << "Podej zasieg: ";
	cin >> zasieg;
	
	cout << "\n Widziany post: ";
	cin >> post;
	
	cout << "\n Widziany link: ";
	cin >> link;

	cout << "\n CRT P: " << zao(wynik = STO_PROCENT * post / zasieg) << "% \n"
		" CTR L: " << zao(wynik = STO_PROCENT * link / zasieg) << "%";
}
