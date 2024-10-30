#pragma once

//#include <cmath>
#include "Figure.hpp"

class Rectangle : public Figure {
private:
    double m_a {};
    double m_b {};

protected:
    // parametrized constructor (why this one is protected?)
    Rectangle(double a, double b, const Point &p, std::string name) : m_a(std::abs(a)), m_b(std::abs(b)), Figure(p, name) {
    };

public:
    // parametrized constructor
    Rectangle(double a, double b, const Point &p) : m_a(std::abs(a)), m_b(std::abs(b)), Figure(p, "rectangle") {
    };
   
    double area() const override {
        return m_a*m_b;
    }

    void setA(double a) {
        m_a = std::abs(a);
    }

    void setB(double b) {
        m_b = std::abs(b);
    }

    double getA() {
        return m_a;
    }

    double getB() {
        return m_b;
    }

    void description() const override {
        std::cout << "I have sides of length " << m_a << " and " << m_b << std::endl;
        printCentre();
    }
};