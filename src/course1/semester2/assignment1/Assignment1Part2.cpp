#include <iostream>

int main() {
    const int N = 5;
//    std::cout << "Enter the size of the square matrix: ";
//    std::cin >> N;
    int mass [N][N];

//    for (int i = 0; i < N; ++i) {
//        for (int j = 0; j < N; ++j) {
//            if (j >= N - i - 1) {
//                std::cout << j - (N - i - 1) + 1 << " ";
//            } else {
//                std::cout << "* ";
//            }
//        }
//        std::cout << std::endl;
//    }

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            mass[i][j] = 0;
        }
    }

    for (int i = 0; i < N; ++i) {
        std::cout<< std::endl;
        for (int j = 0; j <= N - (i + 1); ++j) {
            mass[i][j] = i + 1;
        }
    }

    for (int i = 0; i < N; ++i) {
        std::cout<< std::endl;
        for (int j = 0; j < N; ++j) {
            std::cout<<mass[i][j]  << "\t";
        }
    }
    return 0;
}
