#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3, num4;

    cout << "Enter four integers separated by spaces: ";
    cin >> num1 >> num2 >> num3 >> num4;

    // Print the integers in reverse order, one per line
    cout << num4 << endl;
    cout << num3 << endl;
    cout << num2 << endl;
    cout << num1 << endl;

    return 0;
}