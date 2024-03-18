#include <iostream>

const int MAX_ROWS = 10;
const int MAX_COLS = 10;

void shiftColumnsLeft(int arr[MAX_ROWS][MAX_COLS], int rows, int cols, int shift) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols - shift; ++j) {
            arr[i][j] = arr[i][j + shift];
        }
        for (int j = cols - shift; j < cols; ++j) {
            arr[i][j] = 1;
        }
    }
}

void printArray(int arr[MAX_ROWS][MAX_COLS], int rows, int cols) {
    std::cout << "Array:" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int rows, cols, shift;

    std::cout << "Enter number of rows: ";
    std::cin >> rows;
    std::cout << "Enter number of columns: ";
    std::cin >> cols;

    int arr[MAX_ROWS][MAX_COLS];

    std::cout << "Enter elements of the array:" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cin >> arr[i][j];
        }
    }

    std::cout << "Enter number of positions to shift left: ";
    std::cin >> shift;

    shiftColumnsLeft(arr, rows, cols, shift);

    std::cout << "Initial array:" << std::endl;
    printArray(arr, rows, cols);

    std::cout << "Array after shifting columns left:" << std::endl;
    printArray(arr, rows, cols);

    return 0;
}
