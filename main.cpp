#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    setlocale(LC_CTYPE,"Russian");
    int number;

    cout << "Решите уравнение:\r\n" << endl;

    cout << " 2 * x^2 + 3 * x     x - x^2" << endl;
    cout << "----------------- = ---------" << endl;
    cout << "    3 - x             x - 3" << endl;

    cout << "\r\nВведите число:" << endl;
    cin >> number;
    if (number != -4) {
        cout << "Неправильно!" << endl;
    } else {
        cout << "Правильно!" << endl;
    }

    cout << "\r\nДосвиданья! Нажмите Enter" << endl;
    getch();
    return 0;
}
