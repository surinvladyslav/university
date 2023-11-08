#include <iostream>
#include <string>
#include <regex>

int main() {
    std::string inputStr;
    std::cout << "Введіть рядок: ";
    std::getline(std::cin, inputStr);

    std::regex pattern(R"((\d+)\+(\d+))");
    std::smatch match;

    while (std::regex_search(inputStr, match, pattern)) {
        int num1 = std::stoi(match[1]);
        int num2 = std::stoi(match[2]);
        int sum = num1 + num2;
        inputStr = std::regex_replace(inputStr, pattern, std::to_string(sum));
    }

    std::cout << "Результат: " << inputStr << std::endl;

    return 0;
}
