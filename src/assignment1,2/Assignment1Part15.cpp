#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two integers a and b: ";
    cin >> a >> b;

    int result = ((a * a) - (b * b)) * ((a * a) - (b * b)) - 4 * a * (b * b) + 4 * ((a * a * a) - 5) * ((a * a * a) - 5);

    cout << "Result: " << result << endl;

    return 0;
}