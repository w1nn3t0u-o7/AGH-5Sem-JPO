#include <iostream>

double fahrCelsConv(double fahr){
    double cels;
    cels = (fahr - 32.0)/1.8;
    return cels;
}

int main(){
    double celsOutput {};
    double fahrInput {};
    std::cout << "Enter Fahrenheit degree: " << std::endl;
    std::cin >> fahrInput;
    celsOutput = fahrCelsConv(fahrInput);
    std::cout << "Temperature in Celsius: " << celsOutput;
    return 0;
}