#include <iostream>
using namespace std;

int main()  // 20.12
{
    double x,y, result, temp;
    cout << "x, y" << endl;
    cin >> x >> y;
    if (x <= 0 || y <= 0) {
        cout << "x, y <= 0" << endl;
        return 0;
    }

    result = pow((x + 4), (3 * y - 2)) + log10(pow(x, 3) + pow(y, 3)) - pow((pow(x, 3) + pow(y, 3)), 1.0 / 6);
    cout << result << endl;

    return 0;
}