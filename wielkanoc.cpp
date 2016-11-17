#include <iostream>

using namespace std;

void gregorianski (int rok);
void julianski (int rok);

int main ()
{
	int rok, wybor;
	
	cout << "Chcesz sie dowiedziec kiedy wypada Wielkanoc? No to podaj rok!\n";
	cin >> rok;

	if (rok < 0) {
		cout << "Nie.\n";
		return 0;
	};
	
	cout << "Jaki kalendarz cie interesuje?\n"
		"[1] Gregorianski\n"
		"[2] Julianski\n";
	cin >> wybor;
	
	switch (wybor) {
		case 1:
			gregorianski (rok);
			break;

		case 2:
			julianski (rok);
			break;
		
		default:
			cout << "Blad! Wybierz [1] lub [2]!\n";
			return 0;
			break;
	}
	
}

void gregorianski (int rok)
{
	int a, b, c, d, e, f, g, h, i, k, l, m, miesiac, p, dzien; //zakomentowane zmienne a_1, h_1, h_2, l_1, l_2, p_1
	
	//a_1 = rok / 19;
	a = rok % 19;
	b = rok / 100;
	c = rok - (b * 100);
	d = b / 4;
	e = b - (d * 4);
	f = (b + 8) / 25;
	g = (b - f + 1) / 3;
	//h_1 = 19 * a + b - d - g + 15;
	//h_2 = h_1 / 30;
	h = (19 * a + b - d - g + 15) % 30;
	i = c / 4;
	k = c - (i * 4);
	//l_1 = 32 + 2 * e + 2 * i - h - k;
	//l_2 = l_1 / 7;
	l = (32 + 2 * e + 2 * i - h - k) % 7;
	m = (a + 11 * h + 22 * l) / 451;
	//p_1 = h + l - 7 * m + 114;
	p = (h + l - 7 * m + 114) % 31;
	miesiac = (h + l - 7 * m + 114) / 31;
	//p = p_1 - (miesiac * 31); 			
	dzien = p + 1;
	
	cout << "Wielkanoc przypada na " << dzien << "." << miesiac << "." << rok << "\n"; 
}

void julianski (int rok)
{
	int a, b, c, d, e, miesiac, dzien; //zakomentowane zmienne a_1, b_1, c_1, d_1, d_2, e_1, e_2, dzien_1, dzien_2

	//a_1 = rok / 4;
	a = rok % 4;
	//b_1 = rok / 7;
	b = rok % 7;
	//c_1 = rok / 19;
	c = rok % 19;
	//d_1 = 19 * c + 15;
	//d_2 = d_1 / 30;
	d = (19 * c + 15) % 30;
	//e_1 = 2 * a + 4 * b - d + 34;
	//e_2 = e_1 / 7;
	e = (2 * a + 4 * b - d + 34) % 7;
	miesiac = (d + e + 114) / 31;
	//dzien_1 = d + e + 114;
	//dzien_2 = dzien_1 / 31;
	dzien = ((d + e + 114) % 31) + 1;

	cout << "Wielkanoc przypada na " << dzien << "." << miesiac << "." << rok << "\n";
}
