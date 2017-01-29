#include <iostream>

using namespace std;

void hydraulik(int *wsk_do_kranu);

int main()
{
	int kran = -1;

	cout << "Stan techniczny kranu = " << kran << "\n";
	
	hydraulik(&kran);

	cout << "Po wezwaniu hydarulika stan techniczny kranu = " << kran << "\n";
}
void hydraulik(int *wsk_do_kranu)
{
	*wsk_do_kranu = 100;
}
