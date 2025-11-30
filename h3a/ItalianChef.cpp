#include "ItalianChef.h"
#include <iostream>

ItalianChef::ItalianChef(const std::string& name)
    : Chef(name)   // kutsutaan kantaluokan konstruktoria
{
    std::cout << "ItalianChef " << this->name
              << " konstruktori" << std::endl;
}

ItalianChef::~ItalianChef()
{
    std::cout << "ItalianChef " << name
              << " destruktori" << std::endl;
}

std::string ItalianChef::getName()
{
    return name;   // protected-kenttä kantaluokasta
}

void ItalianChef::makePasta()
{
    std::cout << "Italian Chef " << name
              << " makes pasta" << std::endl;
}
