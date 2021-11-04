#include <iostream>
using namespace std;
float F;

int main()
{
	setlocale(LC_ALL, "ru");
	cout << "Введите температуру: ";
	cin >> F;
	cout << (5*(F-32))/9 << " градусов Цельсия";
	return 0;
}