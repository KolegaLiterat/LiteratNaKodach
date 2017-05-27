//pliki
#include "plansza.h"
#include "gracz.h"
//biblioteki
#include <cstdlib>
#include <iostream>


using namespace std;

int main()
{
   Plansza przestrzen;
   Gracz gra;

   gra.podaj_imiona();
   gra.podsumowanie_gry();

   przestrzen.wyswietl_plansze();

}
