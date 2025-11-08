#pragma once
#include <string>

class Car {
private:
    std::string brand;
    std::string model;
    int yearModel{0};

public:
    Car() = default;

    // Rajapinta
    void printData() const;
    void setBrand(const std::string& b);
    void setModel(const std::string& m);
    void setYearModel(int y);
};
