//Вартість товару n гривень. Яку найменшу кількість банкнот по 20, 10 та 1 гривні
//треба витратити на купівлю товару?

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the cost of the item in hryvnias (n): ";
    cin >> n;

    int twentyNotes = n / 20;
    int tenNotes = (n % 20) / 10;
    int oneNotes = (n % 20) % 10;

    cout << "Number of 20 hryvnia notes: " << twentyNotes << endl;
    cout << "Number of 10 hryvnia notes: " << tenNotes << endl;
    cout << "Number of 1 hryvnia notes: " << oneNotes << endl;

    return 0;
}