#include <iostream>
#include <cmath>
#include <Windows.h> // Бібліотека для підтримки кирилиці

using namespace std;

int main()
{
    // Налаштування для підтримки кирилиці у Windows консолі
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double x; // вхідний аргумент
    double R; // вхідний параметр
    double y; // результат обчислення виразу

    // Введення параметра R та аргументу x
    cout << "R = ";
    cin >> R;
    cout << "x = ";
    cin >> x;

    // Розгалуження в повній формі
    if (x <= -2 * R)
        y = R;
    else if (-2 * R < x && x <= 0)
        y = -1. / 2. * x;
    else if (0 < x && x <= R)
        y = R - sqrt(R * R - x * x);
    else if (R < x && x <= 2 * R)
        y = sqrt(R * R - (x - R) * (x - R));
    else
        y = -(x - 2 * R) / (6 - 2 * R);

    // Виведення результату
    cout << endl;
    cout << "y = " << y << endl;

    return 0;
}
