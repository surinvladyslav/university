#include <iostream>
#include <cmath>

bool canQueenMove(int x1, int y1, int x2, int y2) {
    if (x1 < 1 || x1 > 8 || y1 < 1 || y1 > 8 || x2 < 1 || x2 > 8 || y2 < 1 || y2 > 8) {
        return false;
    }

    if (std::abs(x1 - x2) == std::abs(y1 - y2)) {
        return true;
    }

    if (x1 == x2 || y1 == y2) {
        return true;
    }

    return false;
}

int main() {
    int x1, y1, x2, y2;
    std::cout << "Enter coordinates of the first field (x1, y1): ";
    std::cin >> x1 >> y1;
    std::cout << "Enter coordinates of the second field (x2, y2): ";
    std::cin >> x2 >> y2;

    if (canQueenMove(x1, y1, x2, y2)) {
        std::cout << "The queen can move from (" << x1 << ", " << y1 << ") to (" << x2 << ", " << y2 << ")" << std::endl;
    } else {
        std::cout << "The queen cannot move from (" << x1 << ", " << y1 << ") to (" << x2 << ", " << y2 << ")" << std::endl;
    }

    return 0;
}
