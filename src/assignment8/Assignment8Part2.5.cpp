#include <iostream>
#include <string>

std::string replaceInBrackets(const std::string& inputStr, const std::string& targetStr) {
    std::string result = inputStr;
    size_t pos = result.find(targetStr);

    while (pos != std::string::npos) {
        result.replace(pos, targetStr.length(), "(" + targetStr + ")");
        pos = result.find(targetStr, pos + targetStr.length() + 2);
    }

    return result;
}

int main() {
    std::string string1, string2;
    std::cout << "Введіть перший рядок: ";
    std::cin >> string1;
    std::cout << "Введіть другий рядок: ";
    std::cin >> string2;

    std::string result = replaceInBrackets(string1, string2);
    std::cout << "Результат: " << result << std::endl;

    return 0;
}
