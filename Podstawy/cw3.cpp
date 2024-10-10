#include <cstdlib>
#include <ctime>
#include <iostream>

int main() {
    // initialize random number generator with current time
    srand(static_cast<unsigned int>(time(0)));
    // generate random number from 1 to 100
    int randomNumber = rand() % 100 + 1;
    do-while(int x == randomNumber){
        std::cout << "Enter a number:" << std::endl;
        std::cin >> x;
        if (x > randomNumber){
            std::cout << "The number is too high" << std::endl;
            std::cout << "Enter a number:" << std::endl;
        }elseif(x < randomNumber){
            std::cout << "The number is too low" << std::endl;
            std::cout << "Enter a number:" << std::endl;
        }else {
            
        }
    }
}