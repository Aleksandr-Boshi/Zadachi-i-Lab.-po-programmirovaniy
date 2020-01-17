#include <iostream>
#include <string>

using namespace std;
bool cool(long long int a) {

	for (int i = 2; i < a; i++) {
		if (a % i == 0) {
			return false;
		}
	}
	return true;
}

bool factorization(long long int a, string& result_str) {
	int k = 1;

	for (int i = 2; i <= a; i++) {
		if (a % i == 0) {
			k = 1;
			a /= i;
				while (a % i == 0) {
					k++;
					a /= i;
				}
				if (k != 1) result_str += to_string(i) + "^" + to_string(k) + "*";
					else result_str += to_string(i) + "*";
		}
	}
	result_str[result_str.length() - 1] = '\0';
	return true;
}

int main()
{
	setlocale(LC_ALL, "Russian");

	long long int num;
	string result;
	int k = 1;

		cout << "Введите число для факторизации(например 99): ";
		cin >> num;

	factorization(num, result);

		cout << result;

	return 0;
}