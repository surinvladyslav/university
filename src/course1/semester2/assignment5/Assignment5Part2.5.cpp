#include <iostream>
#include <string>

std::string replaceOccurrences(const std::string& str1, const std::string& str2) {
    std::string result = str1;
    size_t pos = result.find(str2);
    while (pos != std::string::npos) {
        result.replace(pos, str2.length(), "(" + str2 + ")");
        pos = result.find(str2, pos + 1);
    }
    return result;
}

int main() {
    std::string str1, str2;
    std::cout << "Введіть перший рядок: ";
    std::getline(std::cin, str1);
    std::cout << "Введіть другий рядок: ";
    std::getline(std::cin, str2);

    std::string result = replaceOccurrences(str1, str2);
    std::cout << "Результат: " << result << std::endl;

    return 0;
}
