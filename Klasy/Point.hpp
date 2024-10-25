#include <iostream>

class Point {
private:
    double m_x {}, m_y {};
public:
    Point(double x_temp, double y_temp): m_x(x_temp), m_y(y_temp) {
    };
    void setX(double x_temp) {
        m_x = x_temp;
    }
    double getX() const {
        return m_x;
    }
    void setY(double y_temp) {
        m_y = y_temp;
    }
    double getY() const {
        return m_y;
    }
    void display(void) const {
        std::cout << "(" << getX() << ", " << getY() << ")" << std::endl;
    }
};