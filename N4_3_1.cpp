#include <iostream>
using namespace std;
float a, b;

int main()
{
    setlocale(LC_ALL, "ru");
    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;
    cout << a * b;
    return 0;
}

