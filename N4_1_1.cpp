#include <iostream>
using namespace std;
int i = 1;

int main()
{
    setlocale(LC_ALL, "ru");
    cout << "Значение выражения равно: " << ++i * i++;
    return 0;
}
