#include <iostream>
#include <cmath>

using namespace std;

void gregorianski (int rok);
void julianski (int rok);

int main ()
{
	int rok, wybor;
	
	cout << "Chcesz sie dowiedziec kiedy wypada Wielkanoc? No to podaj rok!\n";
	cin >> rok;
	
	cout << "Jaki kalendarz cie interesuje?\n"
		"[1] Gregorianski\n"
		"[2] Julianski\n";
	cin >> wybor;
	
	switch (wybor) {
		case 1:
			gregorianski (rok);
			break;

		case 2:
			//julianski (rok);
			break;
		
		default:
			break;
	}
	
}

void gregorianski (int rok)
{
	int a_1, a, b, c, d, e, f, g, h_1, h_2, h, i, k, l_1, l_2, l, m, p_1, miesiac, p, dzien;
	
	a_1 = rok / 19;
	a = rok - (a_1 * 19);
	b = rok / 100;
	c = rok - (b * 100);
	d = b / 4;
	e = b - (d * 4);
	f = (b + 8) / 25;
	g = (b - f + 1) / 3;
	h_1 = 19 * a + b - d - g + 15;
	h_2 = h_1 / 30;
	h = h_1 - (h_2 * 30);
	i = c / 4;
	k = c - (i * 4);
	l_1 = 32 + 2 * e + 2 * i - h - k;
	l_2 = l_1 / 7;
	l = l_1 - (l_2 * 7);
	m = (a + 11 * h + 22 * l) / 451;
	p_1 = h + l - 7 * m + 114;
	miesiac = p_1 / 31;
	p = p_1 - (miesiac * 31);
	dzien = p + 1;
	
	cout << "Wielkanoc przypada na " << dzien << "." << miesiac << "." << rok << "\n"; 
}

void julianski (int rok)
{
	
}
