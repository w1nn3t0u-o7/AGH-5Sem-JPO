#include "ComplexNumber.hpp"

int main() {
    mz::jpo::ComplexNumber c1(4.0, -2.0);
    mz::jpo::ComplexNumber c2(17.0, 9.0);
    double value = 54.93;

    std::cout << "c1: " << c1 << std::endl;
    std::cout << "c2: " << c2 << std::endl;

    mz::jpo::ComplexNumber c3 = c1 + c2;
    std::cout << "c1 + c2: " << c3 << std::endl;
    
    c1 += c2;
    std::cout << "c1 += c2: " << c1 << std::endl;

    c1 += value;
    std::cout << "c1 += " << value << ": " << c1 << std::endl;

    mz::jpo::ComplexNumber c4 = c1 - c2;
    std::cout << "c1 - c2: " << c4 << std::endl;

    c1 -= c2;
    std::cout << "c1 -= c2: " << c1 << std::endl;

    mz::jpo::ComplexNumber c5 = c1 * c2;
    std::cout << "c1 * c2: " << c5 << std::endl;

    c1 *= c2;
    std::cout << "c1 *= c2: " << c1 << std::endl;

    mz::jpo::ComplexNumber c6 = c1 / c2;
    std::cout << "c1 / c2: " << c6 << std::endl;

    c1/=c2;
    std::cout << "c1 /= c2: " << c1 << std::endl;

    bool equal = c1 == c2;
    std::cout << "c1 == c2: " << equal << std::endl;

    bool notEqual = c1 != c2;
    std::cout << "c1 != c2: " << notEqual << std::endl;
    
    return 0;
}