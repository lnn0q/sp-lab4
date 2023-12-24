// Rectangle.h
#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
public:
    // Конструктор класу
    Rectangle(double length, double width);

    // Метод для обчислення площі прямокутника
    double calculateArea() const;

private:
    double length;
    double width;
};

#endif // RECTANGLE_H
