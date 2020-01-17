#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "RUSSIAN");

	int s;
	//Код ошибки "1": Недопустимый ввод.
	do {
		cout << "Введите число и степень в которую вы возводите это число." << endl;

		double x, n, r = 1;
		cout << "Введите x: ";
		cin >> x;
		cout << "Введите n: ";
		cin >> n;

		if (n == 0) {
			cout << x << " в степени n = 1" << endl;
			break;
		}else if ((x == 0) and (n < 0)) {
			cout << "Недопустимый ввод.";
			return 1;
		}
		else {

			while (n > 0)
			{
				r *= x;
				n--;
			}

			while (n < 0)
			{
				r *= 1.0 / x;
				n++;

			}

			cout << x << " в степени n:" << r << endl;
		}

		cout << "Продолжить? (1 - ДА): ";
		cin >> s;

	} while (s == 1);

	return 0;
}