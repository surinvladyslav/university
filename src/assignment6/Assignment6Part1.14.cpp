#include <iostream>
#include <vector>

int main() {
    std::vector<int> arr = {4, 2, 1, 3, 1, 5, 1};

    int min_element = arr[0];
    std::vector<int> min_indices;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] < min_element) {
            min_element = arr[i];
            min_indices.clear();
            min_indices.push_back(i);
        } else if (arr[i] == min_element) {
            min_indices.push_back(i);
        }
    }

    std::cout << "Кількість найменших елементів: " << min_indices.size() << std::endl;
    std::cout << "Індекси найменших елементів: ";
    for (int i : min_indices) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}
