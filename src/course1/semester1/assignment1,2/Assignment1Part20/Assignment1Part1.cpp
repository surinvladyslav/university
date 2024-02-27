//Присвоїти цілій змінній d першу цифру із дробової частини додатного дійсного числа x (наприклад, якщо x=32.597, то d=5).

#include <iostream>35
#include <cmath>
using namespace std;

int main() {
    double x;
    int d;

    cout << "Enter a positive real number x: ";
    cin >> x;

    // Ensure x is positive
    if (x < 0) {
        cout << "x must be a positive number." << endl;
        return 1; // Exit with an error code
    }

    // Get the fractional part of x
    double fractionalPart = x - floor(x);

    // Extract the first digit of the fractional part
    d = static_cast<int>(fractionalPart * 10);

    cout << "The first digit of the fractional part of x is: " << d << endl;

    return 0;
}
