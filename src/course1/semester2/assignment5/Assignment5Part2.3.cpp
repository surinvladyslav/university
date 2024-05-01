#include <iostream>
#include <string>

int main() {
    std::string str1, str2, str3;
    std::cout << "Введіть перший рядок: ";
    std::getline(std::cin, str1);
    std::cout << "Введіть другий рядок: ";
    std::getline(std::cin, str2);
    std::cout << "Введіть третій рядок: ";
    std::getline(std::cin, str3);

    for (size_t i = 0; i < str2.length(); ++i) {
        size_t pos = str1.find(str2[i]);
        if (pos != std::string::npos) {
            str1[pos] = str3[i];
        }
    }

    std::cout << "Результат: " << str1 << std::endl;

    return 0;
}
