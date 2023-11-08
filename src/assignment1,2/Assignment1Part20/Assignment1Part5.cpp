/*Визначити нормальну вагу людини та індекс маси її тіла за формулами: h·t/240 та
m/h2, де h – зріст людини (у сантиметрах для першої формули та у метрах – для другої);
t – довжина обхвату грудей (в см); m – вага (у кг). Індекс маси тіла прийнятий
Всесвітньою організацією охорони здоров’я. Він не повинен перевищувати 25 пунктів.*/

#include <iostream>
using namespace std;

int main() {
    double h, t, m;

    cout << "Enter height in meters (h): ";
    cin >> h;
    cout << "Enter chest circumference in centimeters (t): ";
    cin >> t;
    cout << "Enter weight in kilograms (m): ";
    cin >> m;

    // Calculate BMI
    double bmi = m / (h * h);

    // Calculate normal weight
    double normalWeight = (h * t) / 240;

    cout << "BMI (Body Mass Index): " << bmi << endl;
    cout << "Normal weight: " << normalWeight << " kilograms" << endl;

    return 0;
}

