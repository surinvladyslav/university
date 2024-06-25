// 7. Знайти найбільший спільний дільник для чисел A, B, C, використовуючи
// рекурсивну функцію знаходження найбільшого спільного дільника двох
// натуральних чисел.
#include <iostream>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

int gcd_of_three(int a, int b, int c) {
    int gcd_ab = gcd(a, b);
    return gcd(gcd_ab, c);
}

int main() {
    int a, b, c;

    std::cout << "Введіть три числа (A, B, C): ";
    std::cin >> a >> b >> c;

    int result = gcd_of_three(a, b, c);

    std::cout << "Найбільший спільний дільник для чисел " << a << ", " << b << ", " << c << " це: " << result << std::endl;

    return 0;
}
