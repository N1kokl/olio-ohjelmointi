#ifndef CAR_H
#define CAR_H

#include <string>
#include "Engine.h"
#include "Wheel.h"

class Car
{
private:
    Engine objEngine;
    Wheel objWheel1;
    Wheel objWheel2;
    Wheel objWheel3;
    Wheel objWheel4;

    std::string model;
    std::string brand;

public:
    Car();
    // UML:ssa vain "string, string" – tulkitaan: (brand, model)
    Car(const std::string &brand, const std::string &model);

    void setEngine();   // asettaa 150 hp ja 2.0 L
    void setWheels();   // asettaa 17 ja "kesarengas" kaikkiin

    std::string getModel() const;
    void setModel(const std::string &model);

    std::string getBrand() const;
    void setBrand(const std::string &brand);

    void printDetails() const;
};

#endif // CAR_H
