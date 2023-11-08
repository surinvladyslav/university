#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a five-digit number: ";
    cin >> number;

    if (number >= 10000 && number <= 99999) {
        int reversedNumber = 0;

        while (number > 0) {
            int digit = number % 10;
            reversedNumber = reversedNumber * 10 + digit;
            number /= 10;
        }

        // Display the reversed number
        cout << reversedNumber << endl;
    } else {
        cout << "Invalid input. Please enter a five-digit number." << endl;
    }

    return 0;
}
