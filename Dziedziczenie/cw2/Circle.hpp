#pragma once

#include "Figure.hpp"
class Circle : public Figure {
private:
    double m_radius;
public:
    Circle(double r, const Point &p) : Figure(p, "circle") {
        if (r < 0) {
            std::cout << "Error: Radius length must be a positive number!" << std::endl;
        } else {
            m_radius = r;
        }
    }
    void setRadius(double r) {
        if (r < 0) {
            std::cout << "Error: Radius length must be a positive number!" << std::endl;
        } else {
            m_radius = r;
        }
    }
    double getRadius() const {
        return m_radius;
    }

    double area() const override {
        return 3.14*m_radius*m_radius;
    }
    
    void description() const override {
        std::cout << "I have radius of length " << m_radius << std::endl;
        printCentre();
    }
};