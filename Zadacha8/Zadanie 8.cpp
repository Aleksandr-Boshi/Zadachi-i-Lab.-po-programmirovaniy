#include <iostream>
#include <locale>
#include <cstdlib>

using namespace std;

int main() {
	setlocale(LC_ALL, "RUSSIAN");
	char ss;

	do
	{
		cout << "Введите арифметичекое действие: число + - * / число." << endl;

		float x, y, r;

		char z;

		cin >> x;
		cin >> z;
		cin >> y;
		
		switch (z) {
		case '+':
			r = x + y;
			cout << x << z << y << " = " << r << endl;
			break;
		case '-':
			r = x - y;
			cout << x << z << y << " = " << r << endl;
			break;
		case '*':
			r = x * y;
			cout << x << z << y << " = " << r << endl;
			break;
		case '/':
			if (y == 0) {
				cout << "На ноль делить нельзя." << endl;
			}
			if (y != 0) {
				r = x / y;
				cout << x << z << y << " = " << r << endl;
			}
			break;
		

		default:
			cout << "Неправильно введено арифметическое значение.";
			break;
		}

		cout << "Продолжить? (y/n): ";

		cin >> ss;

	} while (ss == 'y');

	return 0;

}
