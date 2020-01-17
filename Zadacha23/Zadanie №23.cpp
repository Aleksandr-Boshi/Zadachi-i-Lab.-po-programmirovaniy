#include <iostream>
#include <string>

using namespace std;
void polinom(char*a, int b) {
	bool p = 0;

	for (int i = 0, k = b - 1; i < b && k >= 0;) {
		p = 0;

		if ((a[k] < 48) || (a[k] > 122) || ((a[k] > 90) && (a[k] < 97)) || ((a[k] < 65) && (a[k] > 57))) {
			k--; continue;
		}
		else
			if ((a[i] < 48) || (a[i] > 122) || ((a[i] > 90) && (a[i] < 97)) || ((a[i] < 65) && (a[i] > 57))) {
				i++; continue;
			}
		if ((a[i] == a[k] - 32) || (a[i] == a[k]) || (a[i] == a[k] + 32)) {
			p = 1; i++; k--;
		}
		else i = b;
	}
	if (p == 1) { cout << "Пaлиндром"; }
	else cout << "Не пaлиндром";
}

int main() {
	setlocale(LC_ALL, "RUS");

	char a[21];
		cout << "Эта программа проверяет являеться ли строка палиндромом, введите строку: ";
		cin >> a;
	int i = strlen(a);

	polinom(&a[0], i);
}