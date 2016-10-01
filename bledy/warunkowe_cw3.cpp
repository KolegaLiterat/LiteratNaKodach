#include <iostream>

int main()
{
    char litera; //tablica znaków (już tej zmi)
    do
    {
        std::cout << "Napisz jakas litere: ";
        std::cin >> litera; //zapisuje jaka wspisałeś literę
        std::cout << "\n"
            "Napisales: " << litera << std::endl; //wyświetla wpisaną literę
    } while(litera !='K'); //sprwadzanie czy wpisałeś K (duża litera jest KONIECZNA); != oznacza "różny od"

    std::cout << "\n"
        "Padlo na K, wiec konczymy na dzis.";
}
