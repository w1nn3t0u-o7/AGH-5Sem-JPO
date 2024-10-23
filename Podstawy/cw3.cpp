#include <cstdlib>
#include <ctime>
#include <iostream>

int main() {
    // initialize random number generator with current time
    srand(static_cast<unsigned int>(time(0)));
    // generate random number from 1 to 100
    int randomNumber = rand() % 100 + 1;
    int x {};
    do {
        std::cout << "Enter a number:" << std::endl;
        std::cin >> x;
        if (x > randomNumber){
            std::cout << "The number is too high" << std::endl;
        }else {
            std::cout << "The number is too low" << std::endl;
        }
    } while (x != randomNumber);
    std::cout << "Congratulations, the number is: " << randomNumber << std::endl;
    return 0;
}