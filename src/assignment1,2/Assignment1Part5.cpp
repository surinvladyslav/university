#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3, num4, num5;

    cout << "Enter five integers separated by spaces: ";
    cin >> num1 >> num2 >> num3 >> num4 >> num5;

    // Calculate the sums
    int sum1 = num1 + num2;
    int sum2 = sum1 + num3;
    int sum3 = sum2 + num4;
    int totalSum = sum3 + num5;

    // Print the sums
    cout << "Sum of the first two integers: " << sum1 << endl;
    cout << "Sum of the first three integers: " << sum2 << endl;
    cout << "Sum of the first four integers: " << sum3 << endl;
    cout << "Sum of all five integers: " << totalSum << endl;

    return 0;
}
