#include <iostream>

const int MAX_ROWS = 100;
const int MAX_COLS = 100;

void printMatrix(double matrix[MAX_ROWS][MAX_COLS], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void transposeMatrix(double matrix[MAX_ROWS][MAX_COLS], double transposed[MAX_ROWS][MAX_COLS], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            transposed[j][i] = matrix[i][j];
        }
    }
}

int main() {
    int m, n;

    std::cout << "Enter the number of rows in the matrix: ";
    std::cin >> m;
    std::cout << "Enter the number of columns in the matrix: ";
    std::cin >> n;

    double A[MAX_ROWS][MAX_COLS];

    std::cout << "Enter the elements of the matrix: " << std::endl;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cin >> A[i][j];
        }
    }

    std::cout << "Matrix A:" << std::endl;
    printMatrix(A, m, n);

    double transposed[MAX_COLS][MAX_ROWS];
    transposeMatrix(A, transposed, m, n);

    std::cout << "Transposed matrix of A:" << std::endl;
    printMatrix(transposed, n, m);

    return 0;
}
