#include <iostream>
#include <vector>

int main() {
    int N;
    std::cout << "Введіть порядок матриці N: ";
    std::cin >> N;

    std::vector<std::vector<int>> matrix(N, std::vector<int>(N));

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == j) {
                matrix[i][j] = 1;
            } else if (i + j == N - 1) {
                matrix[i][j] = 0;
            } else if (i < N / 2) {
                matrix[i][j] = i + 1;
            } else {
                matrix[i][j] = N - i;
            }
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            std::cout << matrix[i][j] << "\t";
        }
        std::cout << std::endl;
    }

    return 0;
}
