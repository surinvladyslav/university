#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x;
    cout << "Enter a value for x: ";
    cin >> x;

    double result;

    switch (x > -1 ? (x <= 0 ? 1 : (x <= 1 ? 2 : 3)) : 0) {
        case 0:
            result = pow(3, x) + 1;
            break;
        case 1:
            result = abs(x);
            break;
        case 2:
            result = 0;
            break;
        case 3:
            result = log(x) / log(1.0 / 3);
            break;
    }

    cout << "Result: " << result << endl;

    return 0;
}
