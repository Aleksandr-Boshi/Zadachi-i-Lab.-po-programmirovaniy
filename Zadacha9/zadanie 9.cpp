#include <ctime>
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	srand(time(NULL));
	int i = 0;
	int a, n = rand() % 101;
	cout << n;
	int s;

	do {
		cout << "Приветствую. Давай сыграем в игру, угадай число которое я загадал от 0 до 100." << endl;

		for (int i = 0; i < 5; i++) {

			cin >> a;

			if (a < n) {
				cout << "Загаданное число больше." << endl;

			}
			
			if (a > n) {
				cout << "Загаданное число меньше." << endl;

			}
			
			if (a == n) {
				cout << "Поздравляю, ты угдал число. Желаете сыграть еще раз?(1 - Да)" << endl;
				n = rand() % 101;
				break;
			}

			if (i == 4) {
				cout << "Вы проиграли, было загадано: " << n << endl << "хотите начать заново?(1 - Да)" << endl;
				n = rand() % 101;
			}
		}

		cin >> s;

	} while (s == 1);

	return 0;
}
