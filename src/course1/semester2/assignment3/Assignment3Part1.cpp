#include <iostream>

bool dividesEachDigit(int number) {
    int originalNumber = number;
    while (number > 0) {
        int digit = number % 10;
        if (digit == 0 || originalNumber % digit != 0) {
            return false;
        }
        number /= 10;
    }
    return true;
}

void findNumbers(int n) {
    std::cout << "Natural numbers up to " << n << " that divide each of their digits: ";
    for (int i = 1; i <= n; ++i) {
        if (dividesEachDigit(i)) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;
}

int main() {
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;

    findNumbers(n);

    return 0;
}
