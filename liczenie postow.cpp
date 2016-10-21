#include <iostream>
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

	cout << "\n CRT P: " << 100 * post / zasieg << "% \n"
		" CTR L: " << 100 * link / zasieg << "%";
}
