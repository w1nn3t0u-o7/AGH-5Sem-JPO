#include "Point.hpp"

class Circle {
private:
    double *radius;
    Point center;
public:
    Circle(double r, double centX, double centY): center(centX, centY) {
        radius = new double;
        *radius = r;
    }
    void setRadius(double r) {
        *radius = r;
    }
    double getRadius() const {
        return *radius;
    }
    void setCenter(double centX, double centY) {
        center.setX(centX);
        center.setY(centY);
    }
    Point getCenter() const {
        return center;
    }
    double area() {
        return 3.14*(*radius)*(*radius);
    }
    void areaDisplay(void) {
        std::cout << "Area of a circle is: " << area() << std::endl;
    }
    ~Circle() {
        delete radius;
    }
};