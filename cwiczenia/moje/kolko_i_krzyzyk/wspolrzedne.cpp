//biblioteki
#include <cstdlib>
#include <iostream>
//pliki
#include "wspolrzedne.h"

using namespace std;

int Wspolrzedne::oblicz_miejsce(int &miejsce, char wspolrzedna)
{
    switch (miejsce) {
        case 1:
            miejsce -= 1;
            break;
        case 2:
            miejsce = miejsce;
            break;
        case 3:
            miejsce += 1;
            break;
        default:
            break;
    }

    return miejsce;
}

