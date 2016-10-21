#include <iostream>
#define STO 100 

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

	cout << "\n CRT P: " << STO * post / zasieg << "% \n"
		" CTR L: " << STO * link / zasieg << "%";
}
