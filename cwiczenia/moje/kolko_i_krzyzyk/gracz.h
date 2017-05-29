#ifndef GRACZ_H
#define GRACZ_H
//pliki
#include "plansza.h"
//bliblioteki
#include <string>

using namespace std;

class Gracz: public Plansza
{
    public:

    char kolko = 'O', krzyzyk = 'X';
    string gracz_1, gracz_2;

    void podaj_imiona();
    void podsumowanie_gry();
    void ruch(int ktory_gracz);
    
    bool sprawdz_wygrana(int ktory_gracz);

    private: 
    
    bool sprwadz_miejsce(int x, int y);
    bool sprawdz_zakres(int x, int y);
};
#endif
