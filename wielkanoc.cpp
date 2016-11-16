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
			return 0;
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
	int a, a_1, b, b_1, c, c_1, d, d_1, d_2, e_1, e_2, e, miesiac, dzien_1, dzien_2, dzien;

	a_1 = rok / 4;
	a = rok - (a_1 * 4);
	b_1 = rok / 7;
	b = rok - (b_1 * 7);
	c_1 = rok / 19;
	c = rok - (c_1 * 19);
	d_1 = 19 * c + 15;
	d_2 = d_1 / 30;
	d = d_1 - (d_2 * 30);
	e_1 = 2 * a + 4 * b - d + 34;
	e_2 = e_1 / 7;
	e = e_1 - (e_2 * 7);
	miesiac = (d + e + 114) / 31;
	dzien_1 = d + e + 114;
	dzien_2 = dzien_1 / 31;
	dzien = dzien_1 - (dzien_2 * 31) + 1;

	cout << "Wielkanoc przypada na " << dzien << "." << miesiac << "." << rok << "\n";
}
