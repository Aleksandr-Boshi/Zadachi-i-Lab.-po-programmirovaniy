#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	setlocale(LC_ALL, "RUSSIAN");

	int s, l1, r1, l2, r2, x1, x2 = 0;
	int next = 0;

	do {
		cout << "Введите число и диапазаоны(s l1 r1 l2 r2): " << endl;
		cin >> s >> l1 >> r1 >> l2 >> r2;

		if (l1 <= r1 && l2 <= r2)
		{
			for (int i = l1; i <= r1; i++) {
				x1 = i;
				x2 = l2;

				for (int n = l2; n <= r2; n++) {

					if (x1 + x2 == s) {
						break;
					}
					else x2++;

				}
				if (x1 + x2 == s) {
					break;
				}
				else x1++;
			}

			if (x1 + x2 == s) {
				cout << x1 << " " << x2 << endl;
			}
			else cout << "-1" << endl;
		}
		else cout << "Ошибка, l1 не должно быть больше или равно r1 и/или l2 не должно бытm больше или равно r2." << endl;

		cout << "Запустить заново? (1 - Да)" << endl;
		cin >> next;
		
	} while (next == 1);

	return 0;
}