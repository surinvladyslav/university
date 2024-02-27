#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a two-digit number: ";
    cin >> number;

    if (number >= 10 && number <= 99) {
        int tensDigit = number / 10;
        int onesDigit = number % 10;

        // Display the digits in reverse order
        cout << onesDigit << tensDigit << endl;
    } else {
        cout << "Invalid input. Please enter a two-digit number." << endl;
    }

    return 0;
}
