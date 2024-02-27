#include <iostream>

int main() {
    int numbers[10];
    int countZero = 0;

    std::cout << "Введіть 10 цілих чисел:" << std::endl;

    for (int i = 0; i < 10; i++) {
        std::cin >> numbers[i];
        if (numbers[i] == 0) {
            countZero++;
        }
    }

    std::cout << "Кількість нулів серед введених чисел: " << countZero << std::endl;

    return 0;
}
