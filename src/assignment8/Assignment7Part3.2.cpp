#include <iostream>
#include <string>

std::string expandBrackets(const std::string& input) {
    std::string result;
    size_t startPos = 0;

    for (size_t i = 0; i < input.length(); i++) {
        if (input[i] == '{') {
            result += input.substr(startPos, i - startPos);
            size_t endPos = input.find('}', i);
            if (endPos != std::string::npos) {
                std::string options = input.substr(i + 1, endPos - i - 1);
                std::string rest = expandBrackets(options);
                result += rest;
                i = endPos;
                startPos = i + 1;
            }
        }
    }

    result += input.substr(startPos);
    return result;
}

int main() {
    std::string inputStr;
    std::cout << "Введіть рядок з розгортанням фігурних дужок: ";
    std::getline(std::cin, inputStr);

    std::string expanded = expandBrackets(inputStr);

    std::cout << "Результат розгортання: " << expanded << std::endl;

    return 0;
}
