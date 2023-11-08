#include <iostream>
#include <stack>
#include <vector>

int main() {
    std::string input;
    std::cout << "Введіть рядок: ";
    std::cin >> input;

    std::stack<int> openBrackets;
    std::vector<int> openPositions;
    int index = 0;

    for (char c : input) {
        if (c == '{') {
            openBrackets.push(index);
            openPositions.push_back(index);
        } else if (c == '}') {
            if (!openBrackets.empty()) {
                int openIndex = openBrackets.top();
                openBrackets.pop();
                openPositions.pop_back();
                std::cout << "Знайдено відкриту фігурну дужку на позиції " << openIndex
                          << " та закриту фігурну дужку на позиції " << index << std::endl;
            } else {
                std::cout << "Помилка: знайдено закриту фігурну дужку на позиції " << index
                          << ", але немає відкритої дужки для відповідності." << std::endl;
            }
        }
        index++;
    }

    while (!openBrackets.empty()) {
        int openIndex = openBrackets.top();
        openBrackets.pop();
        openPositions.pop_back();
        std::cout << "Помилка: знайдено відкриту фігурну дужку на позиції " << openIndex
                  << ", але немає відповідної закритої дужки." << std::endl;
    }

    std::string result = input;
    for (int i = openPositions.size() - 1; i >= 0; i--) {
        result.erase(openPositions[i], 1);
        result.erase(openBrackets.top(), 1);
        openBrackets.pop();
    }

    std::cout << "Результат без символів всередині дужок: " << result << std::endl;

    return 0;
}