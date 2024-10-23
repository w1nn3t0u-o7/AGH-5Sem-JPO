#include <iostream>

int main() {
    int tempArray[5];
    std::cout << "Enter 5 numbers: " << std::endl;
    for (int n = 0; n < 5; n++){
        std::cin >> tempArray[n];
    }
    std::cout << "Entered numbers:" << std::endl;
    for (int i = 0; i < 5; i++){
        std::cout << tempArray[i] << std::endl;
    }
}