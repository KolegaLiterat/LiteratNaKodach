//A sequence of n > 0 integers is called a jolly jumper if the absolute values of the differences 
//between successive elements take on all possible values through n - 1 (which may include negative numbers)

#include <cstdlib>
#include <iostream>

using namespace std;

void odejmowanie(int zbior[], int rozmiar_zb);
void sortowanie(int odjete[], int rozmiar_od);
void sprawdzenie(int odjete[], int rozmiar_od);

int main()
{
    int i, rozmiar_zb;
    int *zbior;

    cout << "Podaj wielkosc tablicy:\n";
    cin >> rozmiar_zb;

    zbior = new int[rozmiar_zb];

    for (i = 0; i < rozmiar_zb; i++) {
        cout << "Podaj wartosc:\n";
        cin >> zbior[i];
    }

    odejmowanie(zbior, rozmiar_zb);
}
void odejmowanie(int zbior[], int rozmiar_zb)
{
    int i, rozmiar_od;
    int *odjete;

    rozmiar_od = rozmiar_zb - 1;

    odjete = new int[rozmiar_od];

    for (i = 0; i < rozmiar_zb; i++) {
        if (zbior[0] < zbior[i + 1]) {
            odjete[i] = zbior[i + 1] - zbior[0];
        } else {
            odjete[i] = zbior[0] - zbior[i + 1];
        }
    }

    sortowanie(odjete, rozmiar_od);
    sprawdzenie(odjete, rozmiar_od);

    delete[] odjete;
}
void sortowanie(int odjete[], int rozmiar_od)
{
    int a = 0, b = 1, c;

    while (a < rozmiar_od) {
		if (odjete[a] >= odjete[b] && b < rozmiar_od) {
			b++;
		} else if (odjete[a] <= odjete[b] && b < rozmiar_od) {
			c = odjete[a];
			odjete[a] = odjete[b];
			odjete[b] = c;
		} else if (b == rozmiar_od) {
			a++;
			b = a + 1;		
		}
	}
}
void sprawdzenie(int odjete[], int rozmiar_od)
{
    int i, jolly = 1;

    for (i = 0; i < rozmiar_od; i++) {
        if (odjete[i] - odjete[i + 1] == 1) {
            jolly++;
        }
    }

    if (jolly == rozmiar_od) {
        cout << "JOLLY!\n";
    } else {
        cout << "NOT JOLLY\n";
    }
}