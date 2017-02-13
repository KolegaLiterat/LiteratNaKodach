#include <iostream>

using namespace std;

void przedzielacz_tab(const char tab[]);
void przedzielacz_wsk(const char *w);

int main()
{
	char ostrzezenie[80] = {"Alarm trzeciego stopnia"};
	
	cout << "Wersja tablicowa\n";
	przedzielacz_tab(ostrzezenie);

	cout << "Wersja wskaznikowa\n";
	przedzielacz_wsk(ostrzezenie);
}
void przedzielacz_tab(const char tab[])
{
	int i = 0;
	
	while (tab[i]) {
		cout << tab[i++] << "-";
	}
	
	cout << "\n";
}
void przedzielacz_wsk(const char *w)
{
	while (*w) {
		cout << *(w++) << "-";
	}
}
