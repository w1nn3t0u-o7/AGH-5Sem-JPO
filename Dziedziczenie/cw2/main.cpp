#include <iostream>

#include "Rectangle.hpp"
#include "Square.hpp"
#include "Circle.hpp"

int main() {
    Rectangle rectangle(4, 5, Point(12, 14));
    rectangle.introduce();
    rectangle.description();
    std::cout << "Area of rectangle is: " << rectangle.area() << std::endl;
    
    Square square(6, Point(30, 40));
    square.introduce();
    square.description();
    std::cout << "Area of square is: " << square.area() << std::endl;
    
    Rectangle rectangle2 = rectangle;
    rectangle2.setCentre(Point(21, 37));
    rectangle2.setA(10);
    rectangle2.setB(-5);
    rectangle2.introduce();
    rectangle2.description();
    std::cout << "Area of rectangle is: " << rectangle2.area() << std::endl;

    Circle circle(5, Point(4, 20));
    circle.introduce();
    circle.description();
    std::cout << "Area of circle is: " << circle.area() << std::endl;

    Circle circle2 = circle;
    circle2.setCentre(Point(21, 37));
    circle2.setRadius(69);
    circle2.introduce();
    circle2.description();
    std::cout << "Area of circle is: " << circle2.area() << std::endl;
    return 0;
}