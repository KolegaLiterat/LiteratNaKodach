#include <iostream>
#include <cmath>
#define STO_PROCENT 100 

using namespace std;

int main()
{
	float post, link;
	int zasieg;
		
	cout << "Podej zasieg: ";
	cin >> zasieg;
	
	cout << "\n Widziany post: ";
	cin >> post;
	
	cout << "\n Widziany link: ";
	cin >> link;

	cout << "\n CRT P: " << round(STO_PROCENT * post / zasieg) << "% \n"
		" CTR L: " << round(STO_PROCENT * link / zasieg) << "%";
}
