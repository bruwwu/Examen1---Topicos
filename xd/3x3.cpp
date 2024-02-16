#include <iostream>

void transpose(int matrix[3][3], int transposed[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }
}

void printMatrix(int matrix[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int matrix[3][3];
    int transposed[3][3];

    // Read the matrix from user input
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cin >> matrix[i][j];
        }
    }

    // Create the transposed matrix
    transpose(matrix, transposed);

    // Print the transposed matrix
    printMatrix(transposed);

    return 0;
}