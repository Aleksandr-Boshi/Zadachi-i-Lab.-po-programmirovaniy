#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUSSIAN");

	int a;

	cout << "Введите размер массива: " << endl;
	cin >> a;

	if ((a < 0) | (a > 9)) {
		cout << "Размер массива не должен быть меньше 0 и/или больше 9." << endl;
		return 1;
	}

	int* array = new int[a];
	cout << "Введите массив через пробел: " << endl;

	for (int i = 0; i < a; i++) {
		cin >> array[i];
	}

	for (int i = 0, b = 0, c = 0, d = 0; i < 9 * a; b++, i++) {

		if (array[b] == d) {
			c++;
		}

		if (b == a - 1) {
			if (c > 0) { cout << d << ":" << c << endl; }
			c = 0;
			d++;
			b = -1;
		}
	}

	delete[] array;
	return 0;
}