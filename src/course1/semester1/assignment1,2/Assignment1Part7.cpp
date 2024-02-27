#include <iostream>
using namespace std;

int main() {
    int digit1, digit2, digit3;

    cout << "Enter three different digits in ascending order (e.g., 1 2 3): ";
    cin >> digit1 >> digit2 >> digit3;

    if (digit1 >= 1 && digit2 > digit1 && digit3 > digit2 && digit3 <= 9) {
        // Generate and print all possible permutations
        cout << digit1 << digit2 << digit3 << endl;
        cout << digit1 << digit3 << digit2 << endl;
        cout << digit2 << digit1 << digit3 << endl;
        cout << digit2 << digit3 << digit1 << endl;
        cout << digit3 << digit1 << digit2 << endl;
        cout << digit3 << digit2 << digit1 << endl;
    } else {
        cout << "Invalid input. Please enter three different digits in ascending order (e.g., 1 2 3)." << endl;
    }

    return 0;
}
