#include <iostream>

bool isIncreasingDigits(int num) {
    int lastDigit = num % 10;
    num /= 10;
    while (num > 0) {
        int currentDigit = num % 10;
        if (currentDigit >= lastDigit) {
            lastDigit = currentDigit;
            num /= 10;
        } else {
            return false;
        }
    }
    return true;
}

int computeDifference(int num) {
    int smallestDigit = 9;
    int largestDigit = 0;
    while (num > 0) {
        int digit = num % 10;
        smallestDigit = std::min(smallestDigit, digit);
        largestDigit = std::max(largestDigit, digit);
        num /= 10;
    }
    return largestDigit - smallestDigit;
}

int main() {
    int n;
    std::cout << "Enter the number of elements in the sequence: ";
    std::cin >> n;

    std::cout << "Enter the elements of the sequence: ";
    for (int i = 0; i < n; ++i) {
        int num;
        std::cin >> num;
        if (isIncreasingDigits(num)) {
            std::cout << num << std::endl;
            std::cout << "Difference between largest and smallest digit: " << computeDifference(num) << std::endl;
        }
    }

    return 0;
}
