#ifndef GRACZ_H
#define GRACZ_H
//pliki
#include "plansza.h"
//bliblioteki
#include <string>

using namespace std;

class Gracz : public Plansza
{
    public:

    char kolko = 'O', krzyzyk = 'X';
    string gracz_1, gracz_2;

    void podaj_imiona(int ktory_gracz);
    void podsumowanie_gry(int ktory_gracz);
    void ruch(int ktory_gracz);
    bool sprawdz_wygrana(int ktory_gracz);
    bool sprawdz_puste();

    private: 
    
    bool sprawdz_nazwe(int ktory_gracz);
    bool sprawdz_miejsce(int x, int y);
    bool sprawdz_zakres(int x, int y);
    bool sprawdz_wiersze(int ktory_gracz);
    bool sprawdz_kolumny(int ktory_gracz);
    bool sprawdz_przekatne(int ktory_gracz);
};
#endif
