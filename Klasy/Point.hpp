#include <iostream>

class Point {
private:
    double x {}, y {};
public:
    Point(double x_temp, double y_temp): x(x_temp), y(y_temp) {
    };
    void setX(double x_temp) {
        x = x_temp;
    }
    double getX() const {
        return x;
    }
    void setY(double y_temp) {
        y = y_temp;
    }
    double getY() const {
        return y;
    }
    void display(void) const {
        std::cout << "(" << getX() << ", " << getY() << ")" << std::endl;
    }
};