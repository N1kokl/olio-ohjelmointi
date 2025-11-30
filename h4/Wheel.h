#ifndef WHEEL_H
#define WHEEL_H

#include <string>

class Wheel
{
private:
    int size;
    std::string type;

public:
    Wheel();
    Wheel(int size, const std::string &type);

    int getSize() const;
    void setSize(int size);

    std::string getType() const;
    void setType(const std::string &type);
};

#endif // WHEEL_H
