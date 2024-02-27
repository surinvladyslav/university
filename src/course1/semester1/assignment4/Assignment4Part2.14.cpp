#include <iostream>

int main() {
    const double x0 = -4;
    const double xn = 2;
    const double dx = 0.5;
    double x = x0;

    std::cout << "x\t\ty(x)" << std::endl;

    while (x <= xn) {
        double y = 4 * x / (4 + x * x);
        std::cout << x << "\t\t" << y << std::endl;
        x += dx;
    }

    return 0;
}
