#include "Point.hpp"

class Circle {
private:
    double* m_radius;
    Point m_center;
public:
    Circle(double r, double cent_x, double cent_y): m_center(cent_x, cent_y) {
        if (r < 0) {
            std::cout << "Radius cannot be a negative number!" << std::endl;
        }else {
        m_radius = new double;
        *m_radius = r;
        }
    }
    void setRadius(double r) {
        if (r < 0) {
            std::cout << "Radius cannot be a negative number!" << std::endl;
        }else {
            *m_radius = r;
        }
    }
    double getRadius() const {
        return *m_radius;
    }
    void setCenter(double cent_x, double cent_y) {
        m_center.setX(cent_x);
        m_center.setY(cent_y);
    }
    Point getCenter() const {
        return m_center;
    }
    double area() const {
        return 3.14*(*m_radius)*(*m_radius);
    }
    void areaDisplay(void) const {
        std::cout << "Area of a circle is: " << area() << std::endl;
    }
    ~Circle() {
        delete m_radius;
    }
};