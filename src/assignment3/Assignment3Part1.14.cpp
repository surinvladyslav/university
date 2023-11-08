#include <iostream>
using namespace std;

int main() {
    double x, y, z;

    cout << "Enter three different real numbers: ";
    cin >> x >> y >> z;

    if (x < y) {
        swap(x, y);
    }
    if (x < z) {
        swap(x, z);
    }
    if (y < z) {
        swap(y, z);
    }

    cout << "Numbers in descending order: " << x << ", " << y << ", " << z << endl;

    return 0;
}
