// 7. Написати програму обчислення значення: Х=а(1)а(n)+a(2)a(n-1)+... із
//        застосуванням черги. Значення n, a(1)...a(n) ввести з клавіатури.
#include <iostream>
#include <queue>

int main() {
    int n;
    std::cout << "Введіть кількість елементів: ";
    std::cin >> n;

    if (n < 2) {
        std::cout << "Потрібно принаймні 2 елементи." << std::endl;
        return 1;
    }

    std::queue<int> myQueue;
    int *elements = new int[n];

    std::cout << "Введіть елементи: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> elements[i];
        myQueue.push(elements[i]);
    }

    int sum = 0;
    for (int i = 0; i < n / 2; ++i) {
        int front = myQueue.front();
        int back = elements[n - 1 - i];
        sum += front * back;
        myQueue.pop();
    }

    if (n % 2 != 0) {
        sum += myQueue.front() * elements[n / 2];
    }

    std::cout << "Значення X = " << sum << std::endl;

    delete[] elements;

    return 0;
}
