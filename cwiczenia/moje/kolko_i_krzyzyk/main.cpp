#include "plansza.h"
#include <cstdlib>
#include <iostream>


using namespace std;

int main()
{
   char plansza[5][5];
   Plansza przestrzen;

   przestrzen.stworz_plansze(plansza);
   przestrzen.wyswietl_plansze(plansza);

}