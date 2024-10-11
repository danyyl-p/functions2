#include <iostream>
#include <string>
#include <windows.h>

using namespace std;
// Функция определяющая знак числа
void findsign(int x)
{
	if (x < 0)
	{
		cout << x << " - отрицательное" << endl;
	}
	else if (x > 0)
	{
		cout << x << " - положительное" << endl;
	}
	else
	{
		cout << "число равно 0" << endl;
	}
}
// Функция среднего значения
float srznach(int y1, int y2)
{
	float sz = (y1 + y2) / 2;
	cout << "Среднее значение: " << sz << endl;
	return sz;
}
// Функция опрделяющая четность числа
void chetnechet(int x)
{
	if (x % 2 == 0)
	{
		cout << "Число чётное" << endl;
	}
	else if (x % 2 != 0)
	{
		cout << "Число нечётное" << endl;
	}
}
int main()
{
	SetConsoleCP(1251); SetConsoleOutputCP(1251);
	int x = -312;
	int a1 = 13;
	int a2 = 12;
	findsign(x);
	srznach(a1, a2);
	chetnechet(a1);
}
