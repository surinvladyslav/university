#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x;
    cout << "Enter the value of x: ";
    cin >> x;

    double result;

    switch (x) {
        case 5:
            result = pow(2 * x + 5, 3);
            break;
        case -10 ... 0:
            result = sin(x);
            break;
        case 3:
        case 4:
            result = sqrt(x - 1) + sqrt(x - 2);
            break;
        default:
            result = -2;
            break;
    }

    cout << "Result: " << result << endl;

    return 0;
}
