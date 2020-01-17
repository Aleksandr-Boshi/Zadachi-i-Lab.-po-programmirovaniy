#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	double xt, x0, v0, t, a;

		cout << "Введите x0: ";
		cin >> x0;
		cout << "Введите v0: ";
		cin >> v0;
		cout << "Введите t: ";
		cin >> t;

	a = -9.8;
	xt = ( x0 + v0 * t + a * t * t / 2);

		cout << "Растояние которе преодолеет объект: ";
		cout << xt << endl;

	xt = (x0 + v0 * t + 1.0 / 2 * a * t * t );

		cout << "Растояние которе преодолеет объект: ";
		cout << xt << endl;

	return 0;

}