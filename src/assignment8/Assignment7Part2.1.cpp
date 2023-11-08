#include <iostream>
#include <string>
#include <filesystem>

int main() {
    std::string file_path;
    std::cout << "Введіть ім'я файлу з шляхом: ";
    std::cin >> file_path;

    // a) Шлях без імені файлу
    std::string path_without_filename = std::filesystem::path(file_path).parent_path().string();
    std::cout << "a) Шлях без імені файлу: " << path_without_filename << std::endl;

    // б) Ім'я файлу з розширенням, але без шляху
    std::string filename_with_extension = std::filesystem::path(file_path).filename().string();
    std::cout << "б) Ім'я файлу з розширенням, але без шляху: " << filename_with_extension << std::endl;

    // в) Розширення імені файлу
    std::string file_extension = std::filesystem::path(filename_with_extension).extension().string();
    std::cout << "в) Розширення імені файлу: " << file_extension << std::endl;

    // г) Ім'я файлу без шляху та без розширення
    std::string filename_without_extension = std::filesystem::path(filename_with_extension).stem().string();
    std::cout << "г) Ім'я файлу без шляху та без розширення: " << filename_without_extension << std::endl;

    // д) Ім'я останньої папки за шляхом
    std::string last_folder_name = std::filesystem::path(path_without_filename).filename().string();
    std::cout << "д) Ім'я останньої папки за шляхом: " << last_folder_name << std::endl;

    // е) Ім'я файлу зі шляхом, але розширення замінено на html
    std::string filename_with_path = path_without_filename + "/" + filename_without_extension + ".html";
    std::cout << "е) Ім'я файлу зі шляхом, але розширення замінено на html: " << filename_with_path << std::endl;

    return 0;
}
