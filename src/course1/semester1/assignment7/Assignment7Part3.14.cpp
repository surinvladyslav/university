#include <iostream>
#include <vector>

std::vector<std::vector<int>> multiplyMatrices(const std::vector<std::vector<int>>& A, const std::vector<std::vector<int>>& B) {
    int n = A.size();
    int m = A[0].size();
    int k = B[0].size();
    std::vector<std::vector<int>> result(n, std::vector<int>(k, 0));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            for (int x = 0; x < m; x++) {
                result[i][j] += A[i][x] * B[x][j];
            }
        }
    }

    return result;
}

int main() {
    int n, m, k;

    std::cout << "Введіть розміри матриці A (n m): ";
    std::cin >> n >> m;
    std::cout << "Введіть розміри матриці B (m k): ";
    std::cin >> m >> k;

    std::vector<std::vector<int>> A(n, std::vector<int>(m));
    std::vector<std::vector<int>> B(m, std::vector<int>(k));

    std::cout << "Введіть матрицю A:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cin >> A[i][j];
        }
    }

    std::cout << "Введіть матрицю B:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < k; j++) {
            std::cin >> B[i][j];
        }
    }

    std::vector<std::vector<int>> result = multiplyMatrices(A, B);

    std::cout << "Матриця A:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cout << A[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "Матриця B:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < k; j++) {
            std::cout << B[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "Добуток матриць A та B:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            std::cout << result[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
