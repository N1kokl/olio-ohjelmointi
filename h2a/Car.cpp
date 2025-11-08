#include "Car.h"
#include <iostream>

void Car::printData() const {
    std::cout << "Car: " << brand << " " << model << " (" << yearModel << ")\n";
}

void Car::setBrand(const std::string& b) { brand = b; }
void Car::setModel(const std::string& m) { model = m; }
void Car::setYearModel(int y)            { yearModel = y; }
