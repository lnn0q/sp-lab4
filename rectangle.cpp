// Rectangle.cpp
#include "rectangle.h"

// Реалізація конструктора класу
Rectangle::Rectangle(double length, double width) : length(length), width(width) {}

// Реалізація методу для обчислення площі прямокутника
double Rectangle::calculateArea() const {
    return length * width;
}
