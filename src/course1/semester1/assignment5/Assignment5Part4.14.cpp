#include <iostream>
#include <cmath>

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    if (n == 2) {
        return true;
    }
    if (n % 2 == 0) {
        return false;
    }
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    std::cout << "Введіть натуральне число: ";
    std::cin >> n;

    if (isPrime(n)) {
        std::cout << n << " є простим числом." << std::endl;
    } else {
        std::cout << n << " не є простим числом." << std::endl;
    }

    return 0;
}
