#include "Wheel.h"

Wheel::Wheel()
    : size(0), type("")
{
}

Wheel::Wheel(int size, const std::string &type)
    : size(size), type(type)
{
}

int Wheel::getSize() const
{
    return size;
}

void Wheel::setSize(int size)
{
    this->size = size;
}

std::string Wheel::getType() const
{
    return type;
}

void Wheel::setType(const std::string &type)
{
    this->type = type;
}
