#include <iostream>

using namespace std;

int main() {
    int x, y;
    cout << "Введіть x: ";
    cin >> x;
    cout << "Введіть y: ";
    cin >> y;

    if (x < 0 || x > 2) {
        cout << "Точка не належить області." << endl;
        return 0;
    }

    if (y < 0 || y > x * x) {
        cout << "Точка не належить області." << endl;
        return 0;
    }

    if (y < 0 || y > 1) {
        cout << "Точка не належить області." << endl;
        return 0;
    }

    cout << "Точка належить області." << endl;
    return 0;
}
