#include <iostream>
#include <cmath>

int main() {
    double a = 0.001;
    double sum = 0.0;
    double term = 1.0;
    int n = 0;

    while (std::abs(term) >= a) {
        term = std::pow(-1, n) * std::pow(2, n) / std::pow(n + 1, n);
        sum += term;
        n++;
    }

    std::cout << "Сума ряду з точністю " << a << " дорівнює: " << sum << std::endl;
    return 0;
}
