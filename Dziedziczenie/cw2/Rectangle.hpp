#pragma once

#include "Figure.hpp"

class Rectangle : public Figure {
private:
    double m_a {};
    double m_b {};

protected:
    // parametrized constructor (why this one is protected?)
    Rectangle(double a, double b, const Point &p, std::string name) : Figure(p, name) {
        if ((a || b) < 0) {
            std::cout << "Error: Side length must be a positive number!" << std::endl;
        } else {
            m_a = a;
            m_b = b;
        }
    };

public:
    // parametrized constructor
    Rectangle(double a, double b, const Point &p) : m_a(a), m_b(b), Figure(p, "rectangle") {
        if ((a || b) < 0) {
            std::cout << "Error: Side length must be a positive number!" << std::endl;
        } else {
            m_a = a;
            m_b = b;
        }
    };
   
    double area() const override {
        return m_a*m_b;
    }

    void setA(double a) {
        if (a < 0) {
            std::cout << "Error: Side length must be a positive number!" << std::endl;
        } else {
            m_a = a;
        }
    }

    void setB(double b) {
        if (b < 0) {
            std::cout << "Error: Side length must be a positive number!" << std::endl;
        } else {
            m_b = b;
        }
    }

    double getA() const {
        return m_a;
    }

    double getB() const {
        return m_b;
    }

    void description() const override {
        std::cout << "I have sides of length " << m_a << " and " << m_b << std::endl;
        printCentre();
    }
};