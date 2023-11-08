#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    const int n = 10;
    int arr[n];
    srand(time(0));

    std::cout << "Елементи масиву:" << std::endl;
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 101 - 50;
        std::cout << arr[i] << " ";
        if (arr[i] < 0) {
            std::cout << "(від'ємне)";
        }
        std::cout << std::endl;
    }

    int maxElement = arr[0];
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
        sum += arr[i];
    }
    double average = static_cast<double>(sum) / n;

    std::cout << "Максимальний елемент: " << maxElement << std::endl;
    std::cout << "Середнє арифметичне: " << average << std::endl;

    return 0;
}
