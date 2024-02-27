#include <iostream>
#include <cmath>

bool isPowerOfFive(int num) {
    if (num <= 0) {
        return false;
    }

    double logBaseFive = log(num) / log(5);
    return logBaseFive == round(logBaseFive);
}

int main() {
    int n;

    std::cout << "Введіть кількість чисел (n): ";
    std::cin >> n;

    int countPowerOfFive = 0;

    for (int i = 0; i < n; ++i) {
        int num;
        std::cout << "Введіть число a" << i + 1 << ": ";
        std::cin >> num;

        if (isPowerOfFive(num)) {
            countPowerOfFive++;
        }
    }

    std::cout << "Кількість чисел, що є степенями п'ятірки: " << countPowerOfFive << std::endl;

    return 0;
}
