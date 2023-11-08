#include <iostream>
#include <cmath>

int main() {
    int n;
    double result = 0.0;

    std::cout << "Enter the value of n: ";
    std::cin >> n;

    for (int i = 1; i <= n; i++) {
        double term = ((i % 2) == 0) ? -1.0 : 1.0;
        term *= (i + 1) / (std::tgamma(i + 1));
        if (i == n) {
            term *= (-1);
        }
        result += term;
    }

    std::cout << "Result: " << result << std::endl;

    return 0;
}
