#ifndef PLANSZA_H
#define PLANSZA_H

class Plansza
{
	public:

    char plansza[5][5];

    void wyswietl_plansze(int wywolanie);
    
    protected:

    char puste = ' ', poziom = '-', pion = '|';
    void stworz_plansze();
};
#endif