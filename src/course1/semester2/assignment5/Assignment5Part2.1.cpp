#include <iostream>
#include <string>
#include <filesystem>

namespace fs = std::filesystem;

int main() {
    std::string filename;
    std::cout << "Введіть ім'я файлу: ";
    std::getline(std::cin, filename);

    fs::path filePath = fs::path(filename);

    // а) Шлях без імені файлу
    std::cout << "а) Шлях без імені файлу: " << filePath.parent_path().string() << std::endl;

    // б) Ім'я файлу з розширенням, але без шляху
    std::cout << "б) Ім'я файлу з розширенням, але без шляху: " << filePath.filename().string() << std::endl;

    // в) Розширення імені файлу
    std::cout << "в) Розширення імені файлу: " << filePath.extension().string() << std::endl;

    // г) Ім'я файлу без шляху та без розширення
    std::cout << "г) Ім'я файлу без шляху та без розширення: " << filePath.stem().string() << std::endl;

    // д) Ім'я останньої папки за шляхом
    std::cout << "д) Ім'я останньої папки за шляхом: " << filePath.parent_path().filename().string() << std::endl;

    // е) Ім'я файлу зі шляхом, але розширення замінено на html
    fs::path filePathHtml = filePath;
    filePathHtml.replace_extension(".html");
    std::cout << "е) Ім'я файлу зі шляхом, але розширення замінено на html: " << filePathHtml.string() << std::endl;

    return 0;
}
