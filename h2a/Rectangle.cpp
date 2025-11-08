#include "Rectangle.h"

double Rectangle::getArea() const {
    return width * height;
}

double Rectangle::getCircum() const {
    return 2.0 * (width + height);
}

void Rectangle::setWidth(double w)  { width  = w; }
void Rectangle::setHeight(double h) { height = h; }
