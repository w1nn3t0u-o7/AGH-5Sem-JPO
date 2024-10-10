#include <iostream>

int main() {
    int x {};
    int sum = 0;
    std::cout << "Enter a number:";
    std::cin >> x;
    if (x >= 0){
        for (int i = 0; i <= x; i++) {
            std::cout << i << " ";
            sum += i;
        }
        std::cout << "Sum is: " << sum << std::endl;
        return 0;
    } else {
        std::cout << "Entered number is below zero" << std::endl;
        return 0;
    }
}