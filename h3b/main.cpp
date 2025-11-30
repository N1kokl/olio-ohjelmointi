#include <iostream>
#include <memory> 
#include "Animal.h"
#include "Dog.h"

int main() {
    std::cout << "--- Pinomuistiin luodut oliot ---" << std::endl;
    Animal animal;  
    Dog dog;        

    animal.callOut(); // tulostaa: "Eläin ääntelee."
    dog.callOut();    // tulostaa: "Koira haukkuu!"

    std::cout << "--- Polymorfinen olio (unique_ptr<Animal> -> Dog) ---" << std::endl;
    std::unique_ptr<Animal> polyDog = std::make_unique<Dog>();
    polyDog->callOut();  

    std::cout << "--- Ohjelma päättyy, oliot tuhoutuvat ---" << std::endl;
    return 0;
}
