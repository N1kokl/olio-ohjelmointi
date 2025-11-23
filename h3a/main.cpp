#include <iostream>
#include "ItalianChef.h"

int main()
{
    // 1) Tehtävän ensimmäinen osa: pelkkä Chef
    {
        Chef chef("Gordon Ramsay");
        chef.makeSalad();
        chef.makeSoup();
    }

    std::cout << std::endl;

    // 2) ItalianChef-olio
    {
        ItalianChef italianChef("Anthony Bourdain");

        italianChef.makeSalad();
        italianChef.makeSoup();
        italianChef.makePasta();

        std::cout << "name of the Italian Chef is "
                  << italianChef.getName() << std::endl;
    }

    return 0;
}
