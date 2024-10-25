#include <iostream>
#include "Circle.hpp"

int main() {
    Circle c1(3.0, 0.0, 0.0);
    c1.areaDisplay();
    c1.setRadius(7.5);
    c1.areaDisplay();
}