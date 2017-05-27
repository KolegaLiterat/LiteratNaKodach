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
   Gracz imiona;

   imiona.podaj_imiona();
   imiona.podsumowanie_gry();

   przestrzen.wyswietl_plansze();

}