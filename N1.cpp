#include <iostream>
using namespace std;
int number;
int a, b, c;
bool F = true;
int main()
{
	setlocale(LC_ALL, "ru");
	while (F)
	{
		cout << "Введите число от 100 до 999: ";
		cin >> number;
		a = number / 100;
		number = number % 100;
		b = number / 10;
		c = number % 10;
		number = a * 100 + b * 10 + c;
		if (number >= 100)
		{
			if (number <= 999) 
			{
				if (a != b)
				{
					if (a != c)
					{
						if (b != c)
						{
							F = false;
							cout << a << b << c << endl;
							cout << a << c << b << endl;
							cout << b << a << c << endl;
							cout << b << c << a << endl;
							cout << c << a << b << endl;
							cout << c << b << a << endl;
							cout << "Самое большое число: ";
							if (a > b)
							{
								if (a > c)
								{
									if (b > c)
									{
										cout << a << b << c;
									}
									else
									{
										cout << a << c << b;
									}
								}
							}
							else if (c > a)
							{
								if (c > b)
								{
									if (b > a)
									{
										cout << c << b << a;
									}
									else
									{
										cout << c << a << b;
									}
								}

							}
							else if (b > a)
							{
								if (b > c)
								{
									if (c > a)
									{
										cout << b << c << a;
									}
									else
									{
										cout << b << a << c;
									}
								}

							}
						}
						else
						{
							cout << "Цирфы в числе не должны повторяться!" << endl;
						}

					}
					else
					{
						cout << "Цирфы в числе не должны повторяться!" << endl;
					}
				}
				else
				{
					cout << "Цирфы в числе не должны повторяться!" << endl;
				}
			}
		}
	}
	
}