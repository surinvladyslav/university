#include <iostream>

const int MAX_ROWS = 3;
const int MAX_COLS = 3;

void displayArray(int arr[MAX_ROWS][MAX_COLS]) {
    for (int i = 0; i < MAX_ROWS; ++i) {
        for (int j = 0; j < MAX_COLS; ++j) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void cyclicRightShift(int arr[MAX_ROWS][MAX_COLS], int shiftCount) {
    for (int i = 0; i < MAX_ROWS; ++i) {
        int temp[MAX_COLS];

        for (int j = 0; j < MAX_COLS; ++j) {
            temp[j] = arr[i][j];
        }

        for (int j = 0; j < MAX_COLS; ++j) {
            arr[i][(j + shiftCount) % MAX_COLS] = temp[j];
        }
    }
}

int main() {
    int myArray[MAX_ROWS][MAX_COLS] = {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
    };

    std::cout << "Початковий масив:" << std::endl;
    displayArray(myArray);

    int shiftCount;
    std::cout << "Введіть кількість позицій для циклічного зсуву вправо: ";
    std::cin >> shiftCount;

    cyclicRightShift(myArray, shiftCount);

    std::cout << "Масив після циклічного зсуву вправо:" << std::endl;
    displayArray(myArray);

    return 0;
}
