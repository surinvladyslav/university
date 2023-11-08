//Об'єм конуса можна обчислити за формулою:
//
//[V = frac{1}{3} pi r^2 h]
//
//де:
//- (V) - об'єм конуса,
//- (pi) - математична константа, приблизно 3.14159,
//- (r) - радіус основи конуса,
//- (h) - висота конуса.
//

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double radius, height;

    cout << "Enter the radius of the cone: ";
    cin >> radius;
    cout << "Enter the height of the cone: ";
    cin >> height;

    if (radius <= 0 || height <= 0) {
        cout << "Both the radius and height must be positive numbers." << endl;
    } else {
        // Обчислюємо об'єм конуса
        double volume = (1.0 / 3.0) * M_PI * pow(radius, 2) * height;

        cout << "The volume of the cone is: " << volume << endl;
    }

    return 0;
}

//У цій програмі ми перевіряємо, чи введені значення радіусу і висоти є додатними числами перед обчисленням об'єму.
// Якщо хоча б одне з цих значень від'ємне або нуль, програма виводить повідомлення про помилку. В іншому випадку, вона
// обчислює та виводить об'єм конуса.