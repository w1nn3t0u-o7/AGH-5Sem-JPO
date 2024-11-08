#include "ComplexNumber.hpp"

int main() {
    mz::jpo::ComplexNumber<double> c1(4.65, -2.72);
    mz::jpo::ComplexNumber<double> c2(17.43, 9.49);

    std::cout << "c1: " << c1 << std::endl;
    std::cout << "c2: " << c2 << std::endl;

    mz::jpo::ComplexNumber c3 = c1 + c2;
    std::cout << "c1 + c2: " << c3 << std::endl;
    
    c1 += c2;
    std::cout << "c1 += c2: " << c1 << std::endl;

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
    
    //int
    mz::jpo::ComplexNumber<int> c7(4.0, -2.0);
    mz::jpo::ComplexNumber<int> c8(17.0, 9.0);

    std::cout << "c7: " << c7 << std::endl;
    std::cout << "c8: " << c8 << std::endl;

    //float
    mz::jpo::ComplexNumber<float> c9(4.4, -2.7);
    mz::jpo::ComplexNumber<float> c10(17.1, 9.3);

    std::cout << "c9: " << c9 << std::endl;
    std::cout << "c10: " << c10 << std::endl;
    return 0;
}