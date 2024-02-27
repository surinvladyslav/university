#include <iostream>
using namespace std;

int main () {
    int X, a, b, c, d, e, s;
    cin >> X;

    a = X / 10000 % 10;
    b = X / 1000 % 10;
    c = X / 100 % 10;
    d = X / 10 % 10;
    e = X / 1 % 10;

    s = a + b + c + d + e;
    cout << s;

    return 0;
}

// Цей код відображає суму цифр введеного числа X, яке ви вводите з клавіатури.