#include <iostream>

const int N = 6;

int main() {
    int D[N][N];

    std::cout << "Введіть елементи матриці D(" << N << "x" << N << "):" << std::endl;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            std::cout << "D[" << i << "][" << j << "]: ";
            std::cin >> D[i][j];
        }
    }

    long long product = 1;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < i; ++j) {
            if (D[i][j] != 0) {
                product *= D[i][j];
            }
        }
    }

    int zeroCount = 0;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (D[i][j] == 0) {
                zeroCount++;
            }
        }
    }

    std::cout << "Добуток ненульових елементів на головній діагоналі та вище за неї: " << product << std::endl;
    std::cout << "Кількість нульових елементів в матриці: " << zeroCount << std::endl;

    return 0;
}
