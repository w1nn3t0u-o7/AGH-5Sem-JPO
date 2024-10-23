#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

int matrixElementsSum(std::vector<std::vector<int>> &matrix) {
    int sum = 0;
    for (int i = 0; i < matrix.size(); ++i) {
        for (int j = 0; j < matrix[i].size(); ++j) {
            if ((i % 2 == 1) || (j % 2 == 0)) {
                sum += matrix[i][j];
            }
        }
    }
    return sum;
}


int main() {
    srand(static_cast<unsigned int>(time(0)));

    int rows {}, cols {};
    std::cout << "Enter number of rows:" << std::endl;
    std::cin >> rows;
    std::cout << "Enter number of columns:" << std::endl;
    std::cin >> cols;

    if (rows <= 0 || cols <= 0) {
        std::cout << "Error: Invalid number";
        return 1;
    }

    std::vector<std::vector<int>> matrix(rows, std::vector<int>(cols));

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            matrix[i][j] = rand() % 10;
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
    
    int sum = matrixElementsSum(matrix);
    std::cout << "Sum of matrix elements in odd rows or even columns: " << sum << std::endl;
    return 0;
}