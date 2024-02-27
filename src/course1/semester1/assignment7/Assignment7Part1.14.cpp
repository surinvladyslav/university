#include <iostream>
#include <climits>

int main() {
    int m, n;
    std::cout << "Введіть кількість рядків m: ";
    std::cin >> m;
    std::cout << "Введіть кількість стовпців n: ";
    std::cin >> n;

    int** A = new int*[m];
    for (int i = 0; i < m; ++i) {
        A[i] = new int[n];
    }

    int* minInRow = new int[m];
    for (int i = 0; i < m; ++i) {
        minInRow[i] = INT_MAX;
        for (int j = 0; j < n; ++j) {
            std::cout << "A[" << i << "][" << j << "] = ";
            std::cin >> A[i][j];
            if (A[i][j] < minInRow[i]) {
                minInRow[i] = A[i][j];
            }
        }
    }

    std::cout << "Масив A[" << m << "][" << n << "]:" << std::endl;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cout << A[i][j] << "\t";
        }
        std::cout << std::endl;
    }

    std::cout << "Рядки, де найменший елемент знаходиться на останньому місці:" << std::endl;
    for (int i = 0; i < m; ++i) {
        if (A[i][n - 1] == minInRow[i]) {
            for (int j = 0; j < n; ++j) {
                std::cout << A[i][j] << "\t";
            }
            std::cout << std::endl;
        }
    }

    for (int i = 0; i < m; ++i) {
        delete[] A[i];
    }
    delete[] A;
    delete[] minInRow;

    return 0;
}
