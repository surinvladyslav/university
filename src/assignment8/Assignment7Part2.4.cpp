#include <iostream>
#include <string>

int main() {
    std::string string;
    std::cout << "Введіть рядок: ";
    std::cin >> string;

    size_t pos = string.find("password:");
    while (pos != std::string::npos) {
        for (size_t i = pos + 9; i < pos + 17 && i < string.length(); i++) {
            string[i] = '*';
        }
        pos = string.find("password:", pos + 1);
    }

    std::cout << "Результат: " << string << std::endl;

    return 0;
}
