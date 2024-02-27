#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two integers a and b: ";
    cin >> a >> b;

    int result = (a + b) * (a + b) + (a - b) * (a - b) - 3 * a * b;

    cout << "Result: " << result << endl;

    return 0;
}