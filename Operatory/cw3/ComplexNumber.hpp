#include <iostream>
#include <vector>
#include <type_traits>

#ifndef COMPLEXNUMBER_HPP
#define COMPLEXNUMBER_HPP

namespace mz {
    namespace jpo {

        template <typename T>
        requires std::is_arithmetic_v<T>

        class ComplexNumber {
        private:
            double m_real {}, m_imag {};
        public:
            ComplexNumber(T r = 0.0, T i = 0.0) : m_real(r), m_imag(i) {}

            void setReal(T r) {
                m_real = r;
            }

            void setImag(T i) {
                m_real = i;
            }
    
            T getReal() const {
                return m_real;
            }

            T getImag() const {
                return m_imag;
            }

            ComplexNumber operator+(const ComplexNumber& other) {
                return ComplexNumber(m_real + other.m_real, m_imag + other.m_imag);
            }

            ComplexNumber operator+(T d) const {
                return ComplexNumber(m_real + d, m_imag);
            }

            ComplexNumber& operator+=(const ComplexNumber& other) {
                m_real += other.m_real;
                m_imag += other.m_imag;
                return *this;
            }

            ComplexNumber& operator+=(T d) {
                m_real += d;
                return *this;
            }

            ComplexNumber operator-(const ComplexNumber& other) const {
                return ComplexNumber(m_real - other.m_real, m_imag - other.m_imag);
            }

            ComplexNumber operator-(T d) const {
                return ComplexNumber(m_real - d, m_imag);
            }

            ComplexNumber operator-=(const ComplexNumber& other) {
                m_imag -= other.m_imag;
                m_real -= other.m_imag;
                return *this;
            }

            ComplexNumber operator -=(T d) {
                m_real -= d;
                return *this;
            }

            ComplexNumber operator*(const ComplexNumber& other) const {
                T real = m_real * other.m_real - m_imag * other.m_imag;
                T imag = m_real * other.m_imag + m_imag * other.m_real;
                return ComplexNumber(real, imag);
            }

            ComplexNumber& operator*=(const ComplexNumber& other) {
                T real = m_real * other.m_real - m_imag * other.m_imag;
                T imag = m_real * other.m_imag + m_imag * other.m_real;
                m_real = real;
                m_imag = imag;
                return *this;
            }

            ComplexNumber operator/(const ComplexNumber& other) const {
                T denom = other.m_real * other.m_real + other.m_imag * other.m_imag;
                T real = (m_real * other.m_real + m_imag * other.m_imag) / denom;
                T imag = (m_imag * other.m_real - m_real * other.m_imag) / denom;
                return ComplexNumber(real,imag);
            }

            ComplexNumber& operator/=(const ComplexNumber& other ){
                T denom = other.m_real * other.m_real + other.m_imag * other.m_imag;
                T real = (m_real * other.m_real + m_imag * other.m_imag) / denom;
                T imag = (m_imag * other.m_real - m_real * other.m_imag) / denom;
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

#endif