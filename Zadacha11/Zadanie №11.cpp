#include <iostream>

using namespace std;

long double fact(int x)
{
	if (x < 0)
		return 0;
	if (x == 0)
		return 1;
	else
		return fact(x - 1) * x; // делаем рекурсию.

}

int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	setlocale(0, "");

	int x;

	cout << "Эта программа выводит факториал числа, введите число: ";
	cin >> x;
	
	cout << "Факториал от " << x << " = " << fact(x) << endl;

	return 0;
}




