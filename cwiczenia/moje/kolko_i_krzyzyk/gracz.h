#ifndef GRACZ_H
#define GRACZ_H
//bliblioteki
#include <string>

using namespace std;

class Gracz
{
    public:

    string gracz_1, gracz_2;

    void podaj_imiona();
    void podsumowanie_gry();
    void ruch();
};
#endif
