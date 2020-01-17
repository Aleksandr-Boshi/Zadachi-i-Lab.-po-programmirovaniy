#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");

	double a, b, c, x1, y1, x2, y2, x3, y3, n, p, S;

	cout << "Выберите способ ввода параметров треугольника, 1й или 2й: ";

		cin >> n;

	if (n == 1) {
		
		cout << "Введите a: ";
		cin >> a;
		cout << "Введите b: ";
		cin >> b;
		cout << "Введите с: ";
		cin >> c;

		if ((a < b + c) && (b < a + c) && (c < a + b)) {

			p = (a + b + c) / 2.0;

			S = sqrt(p * (p - a) * (p - b) * (p - c));

			cout << "S = " << S << endl;
		}
		else cout << "Треугольник не существует. ";
	}

	if (n == 2) {

		if (((x1 == x2) && (y1 == y2)) || ((x2 == x3) && (y2 == y3)) || ((x1 == x3) && (y1 == y3))) {
			cout << "Такой треугольник не существует. ";
		}
		else {

			cout << "Введите x1: ";
			cin >> x1;
			cout << "Введите y1: ";
			cin >> y1;
			cout << "Введите x2: ";
			cin >> x2;
			cout << "Введите y2: ";
			cin >> y2;
			cout << "Введите x3: ";
			cin >> x3;
			cout << "Введите y3: ";
			cin >> y3;

			S = ((1.0 / 2.0) * ((x2 - x1) * (y3 - y1) - (x3 - x1) * (y2 - y1)));

			cout << "S = " << S << endl;
		}

	}
	
	if ((n != 1) and (n != 2)) {

		cout << "Неправильно введен способ ввода параметров треугольника, попробуйте заново." << endl;
	}

	return 0;
}
