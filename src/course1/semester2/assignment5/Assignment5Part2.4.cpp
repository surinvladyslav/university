#include <iostream>
#include <string>

int main() {
    std::string str;
    std::cout << "Введіть рядок: ";
    std::getline(std::cin, str);

    std::string searchStr = "password:";
    size_t pos = str.find(searchStr);
    while (pos != std::string::npos) {
        str.replace(pos + searchStr.length(), 8, "********");
        pos = str.find(searchStr, pos + 1);
    }

    std::cout << "Результат: " << str << std::endl;

    return 0;
}
