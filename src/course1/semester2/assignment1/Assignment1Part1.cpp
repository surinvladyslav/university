#include <iostream>
#include <vector>

void printArray(const std::vector<std::vector<double>>& arr) {
    for (size_t i = 0; i < arr.size(); ++i) {
        for (size_t j = 0; j < arr[i].size(); ++j) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void findMaxElements(const std::vector<std::vector<double>>& arr) {
    double maxElement = arr[0][0];
    std::vector<std::pair<size_t, size_t>> maxIndices;

    for (size_t i = 0; i < arr.size(); ++i) {
        for (size_t j = 0; j < arr[i].size(); ++j) {
            if (arr[i][j] > maxElement) {
                maxElement = arr[i][j];
                maxIndices.clear();
                maxIndices.push_back(std::make_pair(i, j));
            } else if (arr[i][j] == maxElement) {
                maxIndices.push_back(std::make_pair(i, j));
            }
        }
    }

    std::cout << "Кількість найбільших елементів: " << maxIndices.size() << std::endl;
    std::cout << "Їхні індекси:" << std::endl;
    for (const auto& index : maxIndices) {
        std::cout << "[" << index.first << "][" << index.second << "]" << std::endl;
    }
}

int main() {
    std::vector<std::vector<double>> A = {{1.2, 3.4, 5.6},
                                          {7.8, 9.0, 1.2},
                                          {3.4, 5.6, 7.8}};

    std::cout << "Масив A:" << std::endl;
    printArray(A);

    findMaxElements(A);

    return 0;
}
