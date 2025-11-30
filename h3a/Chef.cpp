#include "Chef.h"
#include <iostream>

Chef::Chef(const std::string& name) : name(name)
{
    std::cout << "Chef " << this->name << " konstruktori" << std::endl;
}

Chef::~Chef()
{
    std::cout << "Chef " << name << " destruktori" << std::endl;
}

void Chef::makeSalad()
{
    std::cout << "Chef " << name << " makes salad" << std::endl;
}

void Chef::makeSoup()
{
    std::cout << "Chef " << name << " makes soup" << std::endl;
}
