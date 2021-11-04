#include <iostream>
using namespace std;
float a;

int main()
{
    setlocale(LC_ALL, "ru");
    cout << "¬ведите число галлонов: ";
    cin >> a;
    cout << a / 7.481 << " кубических футов";
    return 0;
}
