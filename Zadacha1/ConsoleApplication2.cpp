#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUSSIAN");

	int x = 1;
	x = 2 + 2 * 2;

	cout << "Результат вычисления выражения 2+2*2 = " << x << endl;

	return 0;
}