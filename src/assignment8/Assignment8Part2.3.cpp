#include <iostream>
#include <string>

int main() {
    std::string string1, string2, string3;
    std::cout << "Введіть перший рядок: ";
    std::cin >> string1;
    std::cout << "Введіть другий рядок (заміна): ";
    std::cin >> string2;
    std::cout << "Введіть третій рядок (зразок): ";
    std::cin >> string3;

    if (string2.length() == string3.length()) {
        for (size_t i = 0; i < string2.length(); i++) {
            size_t pos = string1.find(string2[i]);
            while (pos != std::string::npos) {
                string1[pos] = string3[i];
                pos = string1.find(string2[i], pos + 1);
            }
        }

        std::cout << "Результат: " << string1 << std::endl;
    } else {
        std::cout << "Другий та третій рядки повинні мати однакову довжину." << std::endl;
    }

    return 0;
}
