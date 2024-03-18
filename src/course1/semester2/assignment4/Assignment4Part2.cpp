#include <iostream>
#include <cstdlib>
#include <ctime>

const int MAX_ROWS = 10;
const int MAX_COLS = 10;

void shiftColumnsLeft(int arr[MAX_ROWS][MAX_COLS], int rows, int cols, int shift) {
    for (int i = 0; i < rows; ++i) {
        int temp[MAX_COLS];
        for (int j = 0; j < cols; ++j) {
            temp[j] = arr[i][j];
        }

        for (int j = 0; j < cols - shift; ++j) {
            arr[i][j] = temp[j + shift];
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

void initializeArrayFromKeyboard(int arr[MAX_ROWS][MAX_COLS], int& rows, int& cols) {
    std::cout << "Enter number of rows (max " << MAX_ROWS << "): ";
    std::cin >> rows;
    std::cout << "Enter number of columns (max " << MAX_COLS << "): ";
    std::cin >> cols;

    std::cout << "Enter elements of the array:" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cin >> arr[i][j];
        }
    }
}

void initializeArrayRandomly(int arr[MAX_ROWS][MAX_COLS], int rows, int cols) {
    srand(time(nullptr));

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            arr[i][j] = rand() % 100;
        }
    }
}

int main() {
    int arr[MAX_ROWS][MAX_COLS];
    int rows, cols, shift;
    char choice;

    do {
        std::cout << "Choose array initialization method:" << std::endl;
        std::cout << "1. From keyboard" << std::endl;
        std::cout << "2. Randomly" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch(choice) {
            case '1':
                initializeArrayFromKeyboard(arr, rows, cols);
                break;
            case '2':
                initializeArrayRandomly(arr, rows, cols);
                break;
            default:
                std::cout << "Invalid choice! Please enter 1 or 2." << std::endl;
                continue;
        }

        std::cout << "Enter number of positions to shift left: ";
        std::cin >> shift;

        shiftColumnsLeft(arr, rows, cols, shift);

        std::cout << "Initial array:" << std::endl;
        printArray(arr, rows, cols);

        std::cout << "Array after shifting columns left:" << std::endl;
        printArray(arr, rows, cols);

        std::cout << "Do you want to continue (y/n)? ";
        std::cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}
