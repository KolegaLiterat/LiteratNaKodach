#include <iostream>

int main()
{
    double cal;                         //Dane wejściowe
    double centrymetry;                 //Do zapisania wyniku         
    double przelicznik = 2.54;          //Przelicznik danych wejściowych

    std::cout << "Podaj wymiar w calach: "; //Wyświetlna delikatną prośbę o wpisanie danych
    std::cin >> cal;                        //Złapanie danej z klawiatury

    centrymetry = cal * przelicznik;        //Automagiczne przeliczenie danych

    std::cout << "\n" << cal << " cale to " << centrymetry << " centymetrow." << std::endl;   //Wyświetlnie wyniku
}
