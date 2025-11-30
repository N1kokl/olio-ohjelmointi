#pragma once
#include <string>


class Chef
{
protected:
    std::string name;    // #name:string UML-kaaviossa

public:
    Chef(const std::string& name);
    ~Chef();

    void makeSalad();
    void makeSoup();
};
