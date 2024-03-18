#include <iostream>

bool dividesByDigits(int num) {
    int originalNum = num;
    while (num > 0) {
        int digit = num % 10;
        if (digit == 0 || originalNum % digit != 0) {
            return false;
        }
        num /= 10;
    }
    return true;
}

void findNumbers(int n) {
    std::cout << "Numbers that divide by each of their digits up to " << n << " are: ";
    for (int i = 1; i <= n; ++i) {
        if (dividesByDigits(i)) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;
}

int main() {
    int n;
    std::cout << "Enter a number n: ";
    std::cin >> n;

    findNumbers(n);

    return 0;
}
