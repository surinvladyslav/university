#include <iostream>
#include <vector>

int main() {
    int n;
    std::cout << "Введіть розмірність матриці: ";
    std::cin >> n;

    std::vector<std::vector<int>> results(n, std::vector<int>(n));

    std::cout << "Введіть результати матчів:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cin >> results[i][j];
        }
    }

    std::cout << "Команди, які пройшли чемпіонат без поразок:\n";
    for (int i = 0; i < n; i++) {
        bool undefeated = true;
        for (int j = 0; j < n; j++) {
            if (results[i][j] == 0) {
                undefeated = false;
                break;
            }
        }
        if (undefeated) {
            std::cout << "Команда " << i + 1 << std::endl;
        }
    }

    return 0;
}
