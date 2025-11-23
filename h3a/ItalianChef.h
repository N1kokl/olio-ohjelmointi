#pragma once
#include "Chef.h"
#include <string>

class ItalianChef : public Chef
{
public:
    ItalianChef(const std::string& name);
    ~ItalianChef();

    std::string getName();
    void makePasta();
};
