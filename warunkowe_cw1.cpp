#include <iostream>

int main()
{
    int wys, punkty_karne; //zmienne typu int, ponieważ obie są takie same wystarczy przecinek, aby je oddzielić. Ważny jest int przy punkty_karne! Przy 0 traktuje je jako falsz i nie wyświetla drugiego if. 1 to prawda, więc pojawi się komunikat

    std::cout << "Na jakiej wysokosci lecimy? [w metrach]: ";
    std::cin >> wys;

    //czas przemysleć sprawę
    if(wys<500)         //gdy okreslasz wys jako mniej niz 500 dostajesz...
    {
        std::cout << "\n"
            << wys << " metrow to za nisko!" << std::endl;
        punkty_karne=1;
    }
    else //gdy okreslasz wys jako wieksza lub rowna 500 dostajesz...
    {
        std::cout << "\n"
            "Na wysokosci " << wys << " metrow jestes juz bezpieczny." << std::endl;
        punkty_karne=0;
    }
    //sprawdzam jak porwadziles sobie z ta teoretyczna sytuacja
    std::cout << "\n"
            "Masz " << punkty_karne << " punktow karnych!" << std::endl; //Wyświetla ilość punktów karnych. Niezależnie od tego, czy złapałeś jakieś.
    if(punkty_karne)
        std::cout << "\n"
            << "Popraw sie!" << std::endl; //Wyświetla, gdy masz jakieś punkty karne z wcześniejszego warunku. Ja, odruchowo, wrzuciłem tę linię pod if. W książce był razem z ifem, nie wiem czy dobrze.
}


