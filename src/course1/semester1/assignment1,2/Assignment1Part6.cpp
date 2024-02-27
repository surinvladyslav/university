#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a five-digit number: ";
    cin >> number;

    if (number >= 10000 && number <= 99999) {
        // Calculate and print the quotients
        cout << "Quotient of division by 10: " << number / 10 << endl;
        cout << "Quotient of division by 100: " << number / 100 << endl;
        cout << "Quotient of division by 1000: " << number / 1000 << endl;
        cout << "Quotient of division by 10,000: " << number / 10000 << endl;
    } else {
        cout << "Invalid input. Please enter a five-digit number." << endl;
    }

    return 0;
}
