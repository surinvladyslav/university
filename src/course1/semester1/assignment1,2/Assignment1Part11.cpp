#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a four-digit number: ";
    cin >> number;

    if (number >= 1000 && number <= 9999) {
        int firstHalf = number / 100;
        int secondHalf = number % 100;

        // Display the halves separated by a space
        cout << firstHalf << " " << secondHalf << endl;
    } else {
        cout << "Invalid input. Please enter a four-digit number." << endl;
    }

    return 0;
}
