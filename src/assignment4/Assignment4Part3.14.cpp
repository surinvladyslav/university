#include <iostream>
#include <cmath>
#include <functional>
#include <algorithm>
#include <numeric>

int main() {
    int n = 10000;
    double a = 0.0;
    double b = 5.0;

    double h = (b - a) / n;

    auto f = [](double x) {
        return std::pow(25 - x * x, 3);
    };

    double result = (h / 2) * (f(a) + f(b) + 2.0 * std::accumulate(
            std::begin(std::vector<int>(n - 1)),
            std::end(std::vector<int>(n - 1)),
            0,
            [f, h, &a](double sum, int i) {
                double x = a + i * h;
                return sum + f(x);
            }
    ));

    std::cout << "Результат: " << result << std::endl;

    return 0;
}
