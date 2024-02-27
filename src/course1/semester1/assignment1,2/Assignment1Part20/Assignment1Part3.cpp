/*Два моменти часу однієї доби виражено годинами h1, h2 та хвилинами m1, m2
відповідно. Причому перший момент часу передує другому. Визначити інтервал часу у
годинах та хвилинах між цими двома моментами. Триває k-та секунда доби. Визначити,
скільки повних годин (h) та хвилин (m) пройшло до цього моменту (наприклад, якщо
k=13257=3*3600+40*60+57, то h=3, m=40).*/

#include <iostream>
using namespace std;

int main() {
    int h1, m1, h2, m2, k;
    cout << "Enter the first time (hours minutes): ";
    cin >> h1 >> m1;
    cout << "Enter the second time (hours minutes): ";
    cin >> h2 >> m2;
    cout << "Enter the number of seconds elapsed (k): ";
    cin >> k;

    // Calculate the time interval in hours and minutes
    int totalSeconds = (h2 - h1) * 3600 + (m2 - m1) * 60 + k;
    int h = totalSeconds / 3600;
    int m = (totalSeconds % 3600) / 60;

    cout << "Time interval: " << h << " hours and " << m << " minutes." << endl;

    return 0;
}
