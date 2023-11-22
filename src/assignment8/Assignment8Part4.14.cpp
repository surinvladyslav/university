#include <iostream>
#include <string>
#include <vector>
#include <sstream>

int main() {
    std::string input;
    std::cout << "Введіть рядок слів: ";
    std::getline(std::cin, input);

    std::istringstream iss(input);
    std::vector<std::string> words;
    std::string word;

    while (iss >> word) {
        words.push_back(word);
    }

    for (std::string& word : words) {
        std::string doubledWord;
        for (char c : word) {
            for (int i = 0; i < 2; i++) {
                doubledWord += c;
            }
        }
        word = doubledWord;
    }

    std::string result;
    for (const std::string& word : words) {
        result += word + " ";
    }

    std::cout << "Результат: " << result << std::endl;

    return 0;
}
