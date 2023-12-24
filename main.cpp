// main.cpp
#include "rectangle.h"
#include <iostream>

int main() {
    // Створення об'єкта класу Rectangle
    Rectangle myRectangle(5.0, 3.0);

    // Обчислення та виведення площі прямокутника
    std::cout << "Area of the rectangle: " << myRectangle.calculateArea() << std::endl;

    return 0;
}
