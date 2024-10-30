#pragma once

#include "Figure.hpp"
class Circle : public Figure {
private:
    double m_radius;
public:
    Circle(double r, const Point &p) : m_radius(std::abs(r)), Figure(p, "circle") {
    }
    void setRadius(double r) {
        m_radius = std::abs(r);
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