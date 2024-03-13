#include <iostream>

int main() {
    int N;
    std::cout << "Enter the size of the square matrix: ";
    std::cin >> N;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (j >= N - i - 1) {
                std::cout << j - (N - i - 1) + 1 << " ";
            } else {
                std::cout << "* ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}
