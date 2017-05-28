//pliki
#include "plansza.h"
#include "gracz.h"
//biblioteki
#include <cstdlib>
#include <iostream>


using namespace std;

int main()
{
   Gracz gra;

   gra.wyswietl_plansze(1);
   gra.podaj_imiona();
   gra.ruch(1);
   gra.ruch(2);
   
   gra.podsumowanie_gry();
}
