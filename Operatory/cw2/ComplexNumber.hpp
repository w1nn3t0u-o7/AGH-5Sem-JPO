#include <iostream>
#include <vector>

namespace dk{
    namespace jpo{
        class ComplexNumber{
            private:
                double m_real;
                double m_imag;
            public:
                ComplexNumber(double r=0.0, double i=0.0) : m_real(r),m_imag(i){}
            void setReal(double r){
                m_real=r;
            }
            double getReal() const {
                return m_real;
            }
            void setImag(double i){
                m_imag = i;
            }
            double getImag() const {
                return m_imag;
            }
            ComplexNumber operator+(const ComplexNumber& other) const{
                // NOTE: returns a new object by copy
                return ComplexNumber(m_real + other.m_real, m_imag + other.m_imag);
            }
            ComplexNumber operator+(double value) const {
                 return ComplexNumber(m_real + value, m_imag);
            }
            ComplexNumber operator+=(const ComplexNumber& other){
                m_imag += other.m_imag;
                m_real += other.m_real;
                return *this;
            }
            ComplexNumber& operator+=(double value) {
                m_real += value;
                return *this;
            }
            ComplexNumber operator-(const ComplexNumber& other) const{
                return ComplexNumber(m_real - other.m_real, m_imag - other.m_imag);
            }
            ComplexNumber operator-(double value) const {
                return ComplexNumber(m_real - value, m_imag);
            }
            ComplexNumber operator-=(const ComplexNumber& other){
                m_imag -= other.m_imag;
                m_real-=other.m_imag;
                return *this;
            }
            ComplexNumber operator -=(double value){
                m_real -=value;
                return *this;
            }

            ComplexNumber operator*(const ComplexNumber& other) const{
                double real = m_real*other.m_real -m_imag * other.m_imag;
                double imag = m_real*other.m_imag +m_imag*other.m_real;
                return ComplexNumber(real, imag);
            }
            ComplexNumber operator*=(const ComplexNumber& other){
                double real = m_real*other.m_real -m_imag * other.m_imag;
                double imag = m_real*other.m_imag +m_imag*other.m_real;
                m_real = real;
                m_imag = imag;
                return *this;
            }
            ComplexNumber operator/(const ComplexNumber& other) const{
                double denom = other.m_real*other.m_real +other.m_imag*other.m_imag;
                double real = (m_real*other.m_real +m_imag*other.m_imag) /denom;
                double imag = (m_imag*other.m_real - m_real*other.m_imag)/denom;
                return ComplexNumber(real,imag);
            }
            ComplexNumber operator/=(const ComplexNumber& other ){
                double denom = other.m_real*other.m_real +other.m_imag*other.m_imag;
                double real = (m_real*other.m_real +m_imag*other.m_imag) /denom;
                double imag = (m_imag*other.m_real - m_real*other.m_imag)/denom;
                m_real =real;
                m_imag =imag;
                return *this;
            }
            bool operator ==(const ComplexNumber& other) const{
                return m_real == other.m_real && m_imag == other.m_imag;
            }
            bool operator!=(const ComplexNumber& other)const{
                return !(*this==other);
            }
            ComplexNumber operator=(const ComplexNumber& other){
                m_real = other.m_real;
                m_imag = other.m_imag;
                return *this;
            }

            friend std::ostream& operator<<(std::ostream& os, const ComplexNumber& c) {
                os << "(" << c.m_real << ", " << c.m_imag <<"i"<< ")";
                return os;
            }
        };
    }
}