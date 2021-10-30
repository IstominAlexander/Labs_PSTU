#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int number, i, a;
bool F = true;
int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	number = rand() % 100;
	number = number + 1;
	number = 10;
	for (i = 6; i > 0; i--)
	{
		if (F)
		{
			cout << "У вас осталось " << i << " попыток" << endl << "Угадайте число от 1 до 100: ";
			cin >> a;
			cout << endl;
			if (a == number)
			{
				cout << "Вы угадали число!";
				F = false;
			}else if(number > a)
			{
				cout << "Загаданное число больше введенного вами" << endl;
			}
			else if (number < a)
			{
				cout << "Загаданное число меньше введенного вами" << endl;
			}
		}
	}
	if (F)
	{
		cout << "К сожалению, вы не угадали число";
	}
}