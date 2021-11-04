#include <iostream>
using namespace std;
string S,a,b,c;
int sec1,sec2,sec;

int main()
{
	setlocale(LC_ALL, "ru");
	cout << "Введите начальное время в формате чч.мм.сс: ";
	cin >> S;
	a = S.substr(0, 2);
	b = S.substr(3, 2);
	c = S.substr(6, 2);
	sec1 = atoi(a.c_str()) * 3600 + atoi(b.c_str()) * 60 + atoi(c.c_str());
	cout << "Введите конечное  время в формате чч.мм.сс: ";
	cin >> S;
	a = S.substr(0, 2);
	b = S.substr(3, 2);
	c = S.substr(6, 2);
	sec2 = atoi(a.c_str()) * 3600 + atoi(b.c_str()) * 60 + atoi(c.c_str());
	sec = sec2 - sec1;
	printf("%02d.%02d.%02d", sec / 3600, (sec % 3600) / 60, sec % 60);
	return 0;
}