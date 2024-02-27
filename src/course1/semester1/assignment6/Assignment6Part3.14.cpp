#include <iostream>
#include <vector>

void printSubsets(const std::vector<int>& subset) {
    std::cout << "{";
    for (int i = 0; i < subset.size(); i++) {
        if (i > 0) {
            std::cout << ", ";
        }
        std::cout << subset[i];
    }
    std::cout << "}" << std::endl;
}

void generateSubsets(int m) {
    std::vector<int> subset;
    for (int i = 0; i < (1 << m); i++) {
        subset.clear();
        for (int j = 0; j < m; j++) {
            if (i & (1 << j)) {
                subset.push_back(j + 1);
            }
        }
        printSubsets(subset);
    }
}

int main() {
    int m;
    std::cout << "Введіть m: ";
    std::cin >> m;

    generateSubsets(m);

    return 0;
}
