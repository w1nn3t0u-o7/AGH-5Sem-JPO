#include "ComplexNumber.hpp"

int main(){
    dk::jpo::ComplexNumber<double> c1(6.0, -9.0);
    dk::jpo::ComplexNumber<double> c2(4.0, 2.0);
    dk::jpo::ComplexNumber<int> c8(1 , 2);

    dk::jpo::ComplexNumber<double> c10(4.0, 5.0);   
    dk::jpo::ComplexNumber<double> c11(3, -2);         
    dk::jpo::ComplexNumber<float> c12(1.5f, 2.5f);  

    std::cout << "c10: " << c10 << std::endl;
    std::cout << "c11: " << c11 << std::endl;
    std::cout << "c12: " << c12 << std::endl;
    auto c13= c10+c11;
    std::cout << "c10 + c11 = " << c13 << std::endl;

    double number = 21.37;
    std::cout<<"c1: "<<c1<<std::endl;
    std::cout<<"c2: "<<c2<<std::endl;

    dk::jpo::ComplexNumber<double> c3=c1+c2;
    std::cout<<"c1+c2: "<<c3<<std::endl;
    
    c1+=c2;
    std::cout<<"c1 += c2: "<<c1<<std::endl;

    c1 += number;
    std::cout<<"c1 += "<<number<< ": "<< c1<<std::endl;

    dk::jpo::ComplexNumber<double> c4 = c1-c2;
    std::cout<< "c1- c2: "<<c4<<std::endl;

    c1-=c2;
    std::cout<< "c1-= c2: "<<c1<<std::endl;

    dk::jpo::ComplexNumber<double> c5=c1*c2;
    std::cout<< "c1* c2: "<<c5<<std::endl;

    c1 *=c2;
    std::cout<<"c1 *=c2: "<< c1<<std::endl;

    dk::jpo::ComplexNumber<double> c6 = c1/c2;
    std::cout<< "c1/c2: "<<c6<<std::endl;

    c1/=c2;
    std::cout<< "c1/=c2: "<<c1<<std::endl;

    bool equal = c1==c2;
    std::cout<< "c1==c2: "<< equal<<std::endl;

    bool notEqual = c1!=c2;
    std::cout << "c1 != c2: "<< notEqual<<std::endl;
    
    return 0;

}