#include <iostream>
#define sto 100 

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

	cout << "\n CRT P: " << sto * post / zasieg << "% \n"
		" CTR L: " << sto * link / zasieg << "%";
}
