#include <iostream>
#include "Circle.hpp"

int main() {
    Circle circle1(3.0, 0.0, 0.0);
    circle1.areaDisplay();
    circle1.setRadius(7.5);
    circle1.areaDisplay();
    circle1.setCenter(-9.3, -7.7);
    circle1.getCenter().display();
    circle1.setRadius(-6.8);
    circle1.areaDisplay();
}