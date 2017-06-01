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
   gra.podaj_imiona(1);
   gra.podaj_imiona(2);

   for (i = 0; i < 9; i++) {
       if (gra.sprawdz_wygrana(2) == true) {
           gra.podsumowanie_gry(2);
           break;
       } else {
           gra.ruch(1);
       }

       if (gra.sprawdz_wygrana(1) == true) {
           gra.podsumowanie_gry(1);
           break;
       } else {
           gra.ruch(2);
       }

       gra.podsumowanie_gry(3);
   }
}
