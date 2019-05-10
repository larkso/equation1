#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    setlocale(LC_CTYPE,"Russian");
    int number1;
    int number2;

    cout << "Решите уравнение:\r\n" << endl;

    cout << " 2 * x^2 + 3 * x     x - x^2" << endl;
    cout << "----------------- = ---------" << endl;
    cout << "    3 - x             x - 3" << endl;

    cout << "\r\nВведите 1-e число:" << endl;
    cin >> number1;
    cout << "\r\nВведите 2-e число:" << endl;
    cin >> number2;
    if (((number1 == -4) && (number2 ==0))||((number2 == -4) && (number1 ==0))) {
        cout << "Правильно!" << endl;
    } else {
        cout << "Неправильно!" << endl;
    }

    cout << "\r\nДосвиданья! Нажмите Enter" << endl;
    getch();
    return 0;
}
