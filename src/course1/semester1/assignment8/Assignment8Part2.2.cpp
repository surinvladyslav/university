#include <iostream>
#include <string>

int main() {
    std::string string1, string2;
    std::cout << "Введіть перший рядок: ";
    std::cin >> string1;
    std::cout << "Введіть другий рядок: ";
    std::cin >> string2;

    size_t count = 0;
    size_t pos = string1.find(string2);

    while (pos != std::string::npos) {
        count++;
        pos = string1.find(string2, pos + 1);
    }

    std::cout << "Число входжень другого рядка в перший: " << count << std::endl;

    return 0;
}
