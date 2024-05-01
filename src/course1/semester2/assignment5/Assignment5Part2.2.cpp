#include <iostream>
#include <string>

int main() {
    std::string str1, str2;
    std::cout << "Введіть перший рядок: ";
    std::getline(std::cin, str1);
    std::cout << "Введіть другий рядок: ";
    std::getline(std::cin, str2);

    int count = 0;
    size_t pos = str1.find(str2);
    while (pos != std::string::npos) {
        count++;
        pos = str1.find(str2, pos + 1);
    }

    std::cout << "Число входжень другого рядка до першого: " << count << std::endl;

    return 0;
}
