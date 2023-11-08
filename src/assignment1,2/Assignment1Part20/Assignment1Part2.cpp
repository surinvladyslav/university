//Цілій змінній s присвоїти суму цифр тризначного цілого числа k.

#include <iostream>
using namespace std;

int main() {
    int k, s = 0;

    cout << "Enter a three-digit integer k: ";
    cin >> k;

    // Calculate the sum of digits
    s = (k % 10) + ((k / 10) % 10) + (k / 100);

    cout << "The sum of digits of " << k << " is: " << s << endl;

    return 0;
}
