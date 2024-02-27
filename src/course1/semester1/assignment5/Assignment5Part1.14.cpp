#include <iostream>
#include <cmath>

int main() {
    double left_side = std::pow(std::sqrt(3), 3);
    double right_side = (10.0 / 7.0) * std::pow(1 + (29.0 / 1000.0), 1.0 / 3.0);

    if (std::abs(left_side - right_side) < 0.0001) {
        std::cout << "Рівність виконується." << std::endl;
    } else {
        std::cout << "Рівність не виконується." << std::endl;
    }

}
