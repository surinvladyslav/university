#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cout << "Введіть порядок матриці: ";
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Введіть елемент [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

//Введіть порядок матриці: 3
//
//Введіть елемент [0][0]: 1
//Введіть елемент [0][1]: 2
//Введіть елемент [0][2]: 3
//
//Введіть елемент [1][0]: 4
//Введіть елемент [1][1]: 5
//Введіть елемент [1][2]: 6
//
//Введіть елемент [2][0]: 7
//Введіть елемент [2][1]: 8
//Введіть елемент [2][2]: 9
//
//1 2 3
//4 5 6
//7 8 9