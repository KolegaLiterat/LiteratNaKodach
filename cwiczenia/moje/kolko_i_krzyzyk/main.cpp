//pliki
#include "plansza.h"
#include "gracz.h"
//biblioteki
#include <cstdlib>
#include <iostream>


using namespace std;

int main()
{
   int i;
   Gracz gra;

   gra.wyswietl_plansze(1);
   gra.podaj_imiona();

   for (i = 0; i < 9; i++) {
        gra.ruch(1);
        gra.ruch(2);
   }
   
   gra.podsumowanie_gry();
}
