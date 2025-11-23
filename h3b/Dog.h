#ifndef DOG_H
#define DOG_H

#include "Animal.h"

class Dog : public Animal {
public:
    Dog();
    ~Dog() override;               // override kertoo, että tämä ylikirjoittaa virtuaalisen destruktorin
    void callOut() const override; // ylikirjoitetaan Animal::callOut
};

#endif // DOG_H
