#include <iostream>
#include <vector>
namespace mz {
    namespace jpo {
        class ComplexNumber {
        private:
            double m_real {}, m_imag {};
        public:
            ComplexNumber(double r = 0.0, double i = 0.0) : m_real(r), m_imag(i) {}

            void setReal(double r) {
                m_real = r;
            }

            void setImag(double i) {
                m_real = i;
            }
    
            double getReal() const {
                return m_real;
            }

            double getImag() const {
                return m_imag;
            }

            ComplexNumber operator+(const ComplexNumber& other) {
                return ComplexNumber(m_real + other.m_real, m_imag + other.m_imag);
            }

            ComplexNumber operator+(double d) const {
                return ComplexNumber(m_real + d, m_imag);
            }

            ComplexNumber& operator+=(const ComplexNumber& other) {
                m_real += other.m_real;
                m_imag += other.m_imag;
                return *this;
            }

            ComplexNumber& operator+=(double d) {
                m_real += d;
                return *this;
            }

            ComplexNumber operator-(const ComplexNumber& other) const {
                return ComplexNumber(m_real - other.m_real, m_imag - other.m_imag);
            }

            ComplexNumber operator-(double d) const {
                return ComplexNumber(m_real - d, m_imag);
            }

            ComplexNumber operator-=(const ComplexNumber& other) {
                m_imag -= other.m_imag;
                m_real -= other.m_imag;
                return *this;
            }

            ComplexNumber operator -=(double d) {
                m_real -= d;
                return *this;
            }

            ComplexNumber operator*(const ComplexNumber& other) const {
                double real = m_real * other.m_real - m_imag * other.m_imag;
                double imag = m_real * other.m_imag + m_imag * other.m_real;
                return ComplexNumber(real, imag);
            }

            ComplexNumber& operator*=(const ComplexNumber& other) {
                double real = m_real * other.m_real - m_imag * other.m_imag;
                double imag = m_real * other.m_imag + m_imag * other.m_real;
                m_real = real;
                m_imag = imag;
                return *this;
            }

            ComplexNumber operator/(const ComplexNumber& other) const {
                double denom = other.m_real * other.m_real + other.m_imag * other.m_imag;
                double real = (m_real * other.m_real + m_imag * other.m_imag) / denom;
                double imag = (m_imag * other.m_real - m_real * other.m_imag) / denom;
                return ComplexNumber(real,imag);
            }

            ComplexNumber& operator/=(const ComplexNumber& other ){
                double denom = other.m_real * other.m_real + other.m_imag * other.m_imag;
                double real = (m_real * other.m_real + m_imag * other.m_imag) / denom;
                double imag = (m_imag * other.m_real - m_real * other.m_imag) / denom;
                m_real =real;
                m_imag =imag;
                return *this;
            }

            bool operator==(const ComplexNumber& other) const {
                return m_real == other.m_real && m_imag == other.m_imag;
            }

            bool operator!=(const ComplexNumber& other) const {
                return !(*this == other);
            }

            ComplexNumber operator=(const ComplexNumber& other) {
                m_real = other.m_real;
                m_imag = other.m_imag;
                return *this;
            }

            friend std::ostream& operator<<(std::ostream& os, const ComplexNumber& c) {
                os << c.m_real << (c.m_imag >= 0 ? " + " : " - ") << std::abs(c.m_imag) << "i";
                return os;
            }
        };
    }
}
