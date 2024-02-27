#include <iostream> // Include standard input/output header
#include <cmath>    // Include math library for sqrt function
using namespace std;

int main() {
    float S, R, a; // Declare variables for the area, radius, and side length

    cout << "Enter the area of the circle (S): "; // Prompt the user to enter the area of the circle
    cin >> S; // Read the area from the user

    R = sqrt(S / M_PI); // Calculate the radius of the circle using the area formula
    a = R * sqrt(3);    // Calculate the side length of the inscribed equilateral triangle

    cout << "Side length of the inscribed equilateral triangle: " << a << endl; // Display the result

    cin.get(); // Pause the program to view the result
    return 0; // Return 0 to indicate successful execution
}

//У ній оголошено три змінні з плаваючою комою S (площа круга), R (радіус круга) і a (довжина сторони вписаного рівностороннього трикутника).
//
//Програма пропонує користувачеві ввести площу круга (S) і зчитує введене значення.
//
//Обчислює радіус R за формулою R = sqrt(S / M_PI), де M_PI - константа, що представляє π.
//
//Обчислює довжину сторони a вписаного рівностороннього трикутника за формулою a = R * sqrt(3).
//
//Результат обчислення виводиться на екран.
//
//getch() використовується для призупинення програми, щоб можна було переглянути результат.
//
//Нарешті, програма повертає 0, що означає успішне виконання.
//
//Коли ви запустите цю програму і введете площу кола, вона обчислить і виведе на екран довжину сторони вписаного рівностороннього трикутника.