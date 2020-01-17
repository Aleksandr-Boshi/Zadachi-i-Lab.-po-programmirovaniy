#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");

		double a, b, c, x1, x2, D;

	cout << "Введите a: ";
	cin >> a;
	cout << "Введите b: ";
	cin >> b;
	cout << "Введите с: ";
	cin >> c;
	
if ((a == 0) && (b == 0) && (c == 0)){
	cout << "Любое значение x верно" << endl;
}
if ((a == 0) && (b == 0) && (c != 0)) {
	cout << "Решения нет" << endl;
}
if ((a == 0) && (c == 0) && (b != 0)) {
	cout << "x = 0" << endl;
}
if ((c == 0) && (a != 0) && (b != 0)) {
	if (b >= a) {
		D = b * b - 4 * a;

		if (D > 0) {
			x1 = (-b + sqrt(D)) / (2 * a);

			x2 = (-b - sqrt(D)) / (2 * a);
			if (x1 != x2) {
				cout << "x1 = " << x1 << endl;

				cout << "x2 = " << x2 << endl;
			}
			else {
				cout << "x = " << x1 << endl;
			}
		}
		else cout << "Решения нет, так как Дискриминант меньше нуля" << endl;

		if (b < a) {
			cout << "Решения нет, так как Дискриминант меньше нуля." << endl;
		}
	}
}
	if (c != 0) {
		if ((b != 0) && (a != 0)) {
			D = b * b - 4 * a * c;
			if (D > 0) {
				x1 = (-b + sqrt(D)) / (2 * a);

				x2 = (-b - sqrt(D)) / (2 * a);

				if (x1 != x2) {

					cout << "x1 = " << x1 << endl;

					cout << "x2 = " << x2 << endl;
				}
				else {

					cout << "x = " << x1 << endl;
				}
			}
			else cout << "Решения нет, так как Дискриминант меньше нуля." << endl;

		}
		else if (b != 0) {
			x1 = -c / b;

			x2 = -c / b;

			cout << "x = " << x1 << endl;
		}
		else if (a != 0) {
			x1 = sqrt(-c / a);

			x2 = sqrt(-c / a);

			cout << "x = " << x1 << endl;
		}


	}

return 0;
}
