#include <iostream>
#include <vector>

int main() {
    int rows {};
    int cols {};
    std::cout << "Enter number of rows:" << std::endl;
    std::cin >> rows;
    std::cout << "Enter number of columns:" << std::endl;
    std::cin >> cols;
    std::vector<std::vector<int>> matrix(rows, std::vector<int>(cols));
    
}