#include <iostream>
#include <cmath>

using namespace std;

int gregorianski (int rok);
int julianski (int rok);

int main ()
{
	int rok, wybor;
	
	cout << "Chcesz sie dowiedziec kiedy wypada Wielkanoc? No to podaj rok!\n"
	cin >> rok;
	
	cout << "Jaki kalendarz cie interesuje?\n"
		"[1] Gregorianski\n"
		"[2] Julianski\n";
	
	switch (wybor) {
		case 1:
			gregorianski (rok);
			break;

		case 2:
			julianski (rok);
			break;
		
		default;
		break;
	}
	
}

int gregorianski (int rok)
{

}
