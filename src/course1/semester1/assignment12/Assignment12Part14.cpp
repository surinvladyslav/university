#include <iostream>
#include <string>

std::string units[] = {"", "один", "два", "три", "чотири", "п'ять", "шість", "сім", "вісім", "дев'ять"};
std::string teens[] = {"", "одинадцять", "дванадцять", "тринадцять", "чотирнадцять", "п'ятнадцять", "шістнадцять", "сімнадцять", "вісімнадцять", "дев'ятнадцять"};
std::string tens[] = {"", "десять", "двадцять", "тридцять", "сорок", "п'ятдесят", "шістдесят", "сімдесят", "вісімдесят", "дев'яносто"};
std::string hundreds[] = {"", "сто", "двісті", "триста", "чотириста", "п'ятсот", "шістсот", "сімсот", "вісімсот", "дев'ятсот"};

std::string convertToWords(int number) {
    if (number < 0 || number > 100) {
        return "Число має бути в діапазоні від 0 до 100";
    }

    if (number == 0) {
        return "нуль";
    }

    std::string result;

    int hundredsDigit = number / 100;
    int tensDigit = (number % 100) / 10;
    int unitsDigit = number % 10;

    if (hundredsDigit > 0) {
        result += hundreds[hundredsDigit] + " ";
    }

    if (tensDigit == 1) {
        result += teens[unitsDigit] + " ";
    } else {
        result += tens[tensDigit] + " " + units[unitsDigit] + " ";
    }

    return result;
}

int main() {
    int number;
    std::cout << "Введіть ціле число в діапазоні від 0 до 100: ";
    std::cin >> number;

    std::string words = convertToWords(number);

    std::cout << "Прописний еквівалент: " << words << std::endl;

    return 0;
}
