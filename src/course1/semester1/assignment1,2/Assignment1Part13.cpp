#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a natural number: ";
    cin >> number;

    if (number >= 0) {
        int square = number * number;

        // Display the square of the number
        cout << "The square of " << number << " is " << square << endl;
    } else {
        cout << "The entered number is not a natural number." << endl;
    }

    return 0;
}
