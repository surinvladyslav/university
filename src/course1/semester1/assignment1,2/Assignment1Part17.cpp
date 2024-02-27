#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;

    cout << "Enter four integers a, b, c, and d: ";
    cin >> a >> b >> c >> d;

    // Calculate and print the expressions in the first row
    int expression1 = (a + b) * (a + b) * (a + b);
    int expression2 = (c - d) * (c - d) * (c - d) * (c - d);
    cout << expression1 << " " << expression2 << endl;

    // Calculate and print the expressions in the second row
    int expression3 = (a + 2 * a * b + b) * (a + 2 * a * b + b);
    int expression4 = (c - 3 * c * d * d + 5) * (c - 3 * c * d * d + 5);
    int expression5 = 6 * (b * b - 4 * a * c) * (b * b - 4 * a * c);
    cout << expression3 << " " << expression4 << " " << expression5 << endl;

    return 0;
}
