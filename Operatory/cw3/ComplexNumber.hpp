#include <iostream>
#include <vector>
#include <type_traits> //for is_arithmetic_v

namespace dk{
    namespace jpo{
       
        template <typename T>
        concept ArithmeticType = std::is_arithmetic_v<T>;
        template <typename T> requires ArithmeticType<T>
        class ComplexNumber{
            private:
                T m_real;
                T m_imag;
            public:
               
                ComplexNumber(T r=0.0, T i=0.0) : m_real(r),m_imag(i){}
            void setReal(T r){
                m_real=r;
            }
            T getReal() const {
                return m_real;
            }
            void setImag(T i){
                m_imag = i;
            }
            T getImag() const {
                return m_imag;
            }
            ComplexNumber operator+(const ComplexNumber& other) const{
                // NOTE: returns a new object by copy
                return ComplexNumber(m_real + other.m_real, m_imag + other.m_imag);
            }
            ComplexNumber operator+(T value) const {
                return ComplexNumber(m_real + value, m_imag);
            }
            ComplexNumber operator+=(const ComplexNumber& other){
                m_imag += other.m_imag;
                m_real += other.m_real;
                return *this;
            }
            ComplexNumber& operator+=(T value) {
                m_real += value;
                return *this;
            }
            ComplexNumber operator-(const ComplexNumber& other) const{
                return ComplexNumber(m_real - other.m_real, m_imag - other.m_imag);
            }
            ComplexNumber operator-(T value) const {
                return ComplexNumber(m_real - value, m_imag);
            }
            ComplexNumber operator-=(const ComplexNumber& other){
                m_imag -= other.m_imag;
                m_real-=other.m_imag;
                return *this;
            }
            ComplexNumber operator -=(T value){
                m_real -=value;
                return *this;
            }

            ComplexNumber operator*(const ComplexNumber& other) const{
                T real = m_real*other.m_real -m_imag * other.m_imag;
                T imag = m_real*other.m_imag +m_imag*other.m_real;
                return ComplexNumber(real, imag);
            }
            ComplexNumber operator*=(const ComplexNumber& other){
                T real = m_real*other.m_real -m_imag * other.m_imag;
                T imag = m_real*other.m_imag +m_imag*other.m_real;
                m_real = real;
                m_imag = imag;
                return *this;
            }
            ComplexNumber operator/(const ComplexNumber& other) const{
                T denom = other.m_real*other.m_real +other.m_imag*other.m_imag;
                T real = (m_real*other.m_real +m_imag*other.m_imag) /denom;
                T imag = (m_imag*other.m_real - m_real*other.m_imag)/denom;
                return ComplexNumber(real,imag);
            }
            ComplexNumber operator/=(const ComplexNumber& other ){
                T denom = other.m_real*other.m_real +other.m_imag*other.m_imag;
                T real = (m_real*other.m_real +m_imag*other.m_imag) /denom;
                T imag = (m_imag*other.m_real - m_real*other.m_imag)/denom;
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