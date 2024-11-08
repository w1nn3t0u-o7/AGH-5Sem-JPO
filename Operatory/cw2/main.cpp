#include "ComplexNumber.hpp"

int main(){
    dk::jpo::ComplexNumber c1(6.0, -9.0);
    dk::jpo::ComplexNumber c2(4.0, 2.0);
    double number = 21.37;
    std::cout<<"c1: "<<c1<<std::endl;
    std::cout<<"c2: "<<c2<<std::endl;

    dk::jpo::ComplexNumber c3=c1+c2;
    std::cout<<"c1+c2: "<<c3<<std::endl;
    
    c1+=c2;
    std::cout<<"c1 += c2: "<<c1<<std::endl;

    c1 += number;
    std::cout<<"c1 += "<<number<< ": "<< c1<<std::endl;

    dk::jpo::ComplexNumber c4 = c1-c2;
    std::cout<< "c1- c2: "<<c4<<std::endl;

    c1-=c2;
    std::cout<< "c1-= c2: "<<c1<<std::endl;

    dk::jpo::ComplexNumber c5=c1*c2;
    std::cout<< "c1* c2: "<<c5<<std::endl;

    c1 *=c2;
    std::cout<<"c1 *=c2: "<< c1<<std::endl;

    dk::jpo::ComplexNumber c6 = c1/c2;
    std::cout<< "c1/c2: "<<c6<<std::endl;

    c1/=c2;
    std::cout<< "c1/=c2: "<<c1<<std::endl;

    bool equal = c1==c2;
    std::cout<< "c1==c2: "<< equal<<std::endl;

    bool notEqual = c1!=c2;
    std::cout << "c1 != c2: "<< notEqual<<std::endl;
    
    return 0;

}