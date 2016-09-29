#include <iostream>

int main ()

{
    double cal;
    double centrymetry;
    double przelicznik = 2.54;

    std::cout << "Podaj wymiar w calach: ";
    std::cin >> cal;

    centrymetry = cal * przelicznik;

    std::cout << std::endl;

    std::cout << cal << " cale to " << centrymetry << " centymetrow" << std::endl;
}
