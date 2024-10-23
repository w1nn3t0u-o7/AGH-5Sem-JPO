#include <iostream>

int main() {
    int x {};
    int sum = 0;
    std::cout << "Enter a number:";
    std::cin >> x;
    if (x < 0){
        std::cout << "Entered number is negative" << std::endl;
        return 1;
    }
    for (int i = 0; i <= x; i++) {
        std::cout << i << " ";
        sum += i;
    }
    std::cout << "Sum equals to: " << sum << std::endl;
    return 0;
}