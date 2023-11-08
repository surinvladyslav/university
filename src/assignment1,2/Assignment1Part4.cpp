#include <iostream>
using namespace std;

int main() {
    int digit1, digit2, digit3;

    cout << "Enter three digits (0-9) separated by spaces: ";
    cin >> digit1 >> digit2 >> digit3;

    // Check if the input digits are in the valid range (0-9)
    if (digit1 >= 0 && digit1 <= 9 && digit2 >= 0 && digit2 <= 9 && digit3 >= 0 && digit3 <= 9) {
        // Form and print the number in the same order as input
        int result = digit1 * 100 + digit2 * 10 + digit3;
        cout << "Number formed by the digits: " << result << endl;
    } else {
        cout << "Invalid input. Please enter three digits between 0 and 9." << endl;
    }

    return 0;
}
