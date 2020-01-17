#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUSSIAN");

	int n, f, i;

	cout << "Введите число:\n";
	cin >> n;

	for (i = 2, f = 0; i < n; i++)
		if ((n % i) == 0)
			f = 1;

	if ((!f) && (n > 1))
		cout << "Число " << n << " простое\n";
	else
		cout << "Число " << n << " не простое\n";

	system("pause");

	return 0;
}