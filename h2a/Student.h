#pragma once
#include <string>

class Student {
private:
    std::string name;
    int    studentNumber{0};
    double average{0.0};

public:
    Student() = default;

    // Setterit
    void setName(const std::string& n);
    void setStudentNumber(int n);
    void setAverage(double a);

    // Getterit
    const std::string& getName() const;
    int    getStudentNumber() const;
    double getAverage() const;
};
