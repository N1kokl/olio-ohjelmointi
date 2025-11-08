#include <iostream>
#include <memory>
#include "Car.h"
#include "Rectangle.h"
#include "Student.h"

int main() {
    // --- Car: pino-olio ---
    Car car;
    car.setBrand("Polestar");
    car.setModel("2");
    car.setYearModel(2023);
    car.printData();

    // --- Rectangle: keko-olio ---
    Rectangle* r = new Rectangle();
    r->setWidth(3.5);
    r->setHeight(2.0);
    std::cout << "Rectangle area = "   << r->getArea()   << '\n';
    std::cout << "Rectangle circum = " << r->getCircum() << '\n';
    delete r; // tuhoaminen

    // --- Student: smart pointer ---
    auto st = std::make_unique<Student>();
    st->setName("Niko Lindqvist");
    st->setStudentNumber(150601);
    st->setAverage(4.2);
    std::cout << "Student: " << st->getName()
              << ", number " << st->getStudentNumber()
              << ", average " << st->getAverage() << '\n';

    return 0;
}
