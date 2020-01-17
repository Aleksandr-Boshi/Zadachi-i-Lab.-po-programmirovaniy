#include <iostream>

using namespace std;
int o = 1;

void swap(int* a, int* b) {

	int k;
	k = *a;
	*a = *b;
	*b = k;
}

void info(const int* p) {
	cout << "Адрес:" << p << "; Значение:" << *p << endl;
}

int msort(int* a, int* b, int* c) {
	if ((*a >= *b) && (*a >= *c)) {
		return *a;
	}
	else if ((*b >= *a) && (*b >= *c)) {
		return *b;
	}
	else return *c;

}

int* add(int* a, const int* p) {
	*a = *a + *p;
	return a;
}

int main() {
	setlocale(LC_ALL, "Russian");

	int a = 1, b = 2, c = 3;

	info(&a);
	info(&b);
	info(&c);
	cout << "Максимум:" << msort(&a, &b, &c);
	cout << endl;
	add(&a, &b);

	info(add(&a, &c));
}