#include <iostream>
#include <cmath>

double calculateFunction(double x) {
    if (x <= 0) {
        return x;
    } else if (0 < x && x < 1) {
        return 0;
    } else {
        return log(x);
    }
}

void buildTable(double start, double end, double step) {
    std::cout << "x\t|\ty" << std::endl;
    std::cout << "-------------------" << std::endl;
    for (double x = start; x <= end; x += step) {
        double y = calculateFunction(x);
        std::cout << x << "\t|\t" << y << std::endl;
    }
}

int main() {
    double start = -2;
    double end = 8;
    double step = 0.25;

    buildTable(start, end, step);

    return 0;
}
