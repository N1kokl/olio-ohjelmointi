#include "Car.h"

int main()
{
    // brand = "Toyota", model = "Corolla"
    Car myCar("Toyota", "Corolla");

    myCar.setEngine();
    myCar.setWheels();

    myCar.printDetails();

    return 0;
}
