// 7.Написати програму з функціями, яка:
// а) визначає, чи входить список Р1 до списку Р2;
// б) переносить у кінець непорожнього списку Р його перший елемент;
// в) додає до кінця списку Р1 всі елементи списку Р2.
#include <iostream>

using namespace std;

// Функція для сортування простими вставками одновимірного масиву
void insertionSort(int* arr, int size) {
    for (int i = 1; i < size; ++i) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
}

// Функція для сортування простими вставками двовимірного масиву
void insertionSort2D(int** arr, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 1; j < cols; ++j) {
            int key = arr[i][j];
            int k = j - 1;
            while (k >= 0 && arr[i][k] > key) {
                arr[i][k + 1] = arr[i][k];
                --k;
            }
            arr[i][k + 1] = key;
        }
    }
}

// Функція для швидкого сортування одновимірного масиву
void quickSort(int* arr, int left, int right) {
    int i = left, j = right;
    int pivot = arr[(left + right) / 2];
    while (i <= j) {
        while (arr[i] < pivot) ++i;
        while (arr[j] > pivot) --j;
        if (i <= j) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            ++i;
            --j;
        }
    }
    if (left < j) quickSort(arr, left, j);
    if (i < right) quickSort(arr, i, right);
}

// Функція для швидкого сортування двовимірного масиву
void quickSort2D(int** arr, int rows, int cols) {
    int size = rows * cols;
    int* temp = new int[size];

    // Перетворення 2D масиву в 1D
    int index = 0;
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            temp[index++] = arr[i][j];

    // Виклик функції швидкого сортування
    quickSort(temp, 0, size - 1);

    // Перетворення 1D масиву назад у 2D
    index = 0;
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            arr[i][j] = temp[index++];

    delete[] temp;
}

int main() {
    // Одновимірний масив розміром 19 елементів
    int size1D = 19;
    int* arr1D = new int[size1D] {19, 3, 15, 7, 2, 14, 5, 10, 1, 9, 8, 6, 13, 12, 4, 11, 18, 17, 16};

    // Двовимірний масив розміром 14x11
    int rows = 14, cols = 11;
    int** arr2D = new int*[rows];
    for (int i = 0; i < rows; ++i) {
        arr2D[i] = new int[cols] {
                154, 14, 99, 78, 56, 3, 20, 5, 8, 65, 10,
                6, 18, 90, 11, 12, 15, 19, 2, 4, 7, 16,
                80, 22, 41, 24, 25, 26, 27, 28, 29, 30, 31,
                32, 33, 34, 35, 36, 37, 38, 39, 40, 42, 43,
                44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54,
                55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65,
                66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76,
                77, 78, 79, 81, 82, 83, 84, 85, 86, 87, 88,
                89, 91, 92, 93, 94, 95, 96, 97, 98, 100, 101,
                102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112,
                113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123,
                124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134,
                135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145,
                146, 147, 148, 149, 150, 151, 152, 153, 155, 156, 157
        };
    }

    // Сортування одновимірного масиву за допомогою простих вставок
    insertionSort(arr1D, size1D);

    // Вивід відсортованого одновимірного масиву
    cout << "Одновимірний масив після сортування простими вставками: ";
    for (int i = 0; i < size1D; ++i) {
        cout << arr1D[i] << " ";
    }
    cout << endl;

    // Сортування двовимірного масиву за допомогою простих вставок
    insertionSort2D(arr2D, rows, cols);

    // Вивід відсортованого двовимірного масиву
    cout << "Двовимірний масив після сортування простими вставками: " << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << arr2D[i][j] << " ";
        }
        cout << endl;
    }

    quickSort(arr1D, 0, size1D - 1);

    cout << "Одновимірний масив після швидкого сортування: ";
    for (int i = 0; i < size1D; ++i) {
        cout << arr1D[i] << " ";
    }
    cout << endl;

    quickSort2D(arr2D, rows, cols);

    cout << "Двовимірний масив після швидкого сортування: " << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << arr2D[i][j] << " ";
        }
        cout << endl;
    }

    delete[] arr1D;
    for (int i = 0; i < rows; ++i) {
        delete[] arr2D[i];
    }
    delete[] arr2D;

    return 0;
}
