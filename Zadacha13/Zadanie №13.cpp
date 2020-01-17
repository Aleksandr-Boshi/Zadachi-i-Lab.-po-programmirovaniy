#include <iostream>

using namespace std;
int main()
{
	setlocale(LC_ALL, "RUSSIAN");

	int stepen = 0;
	int chislo = 0;

	cout << "Введите число: " << endl;
	cin >> chislo;

		for (int i = 1; i <= chislo; i *= 2)
			stepen++;

	cout << stepen << endl;

	return 0;
}