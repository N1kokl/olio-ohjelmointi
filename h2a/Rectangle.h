#pragma once

class Rectangle {
private:
    double width{0.0};
    double height{0.0};

public:
    Rectangle() = default;

    // Rajapinta
    double getArea()  const;              // width * height
    double getCircum() const;             // 2 * (width + height)
    void setWidth(double w);
    void setHeight(double h);
};
