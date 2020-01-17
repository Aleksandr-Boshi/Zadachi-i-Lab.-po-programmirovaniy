#include <iostream>

using namespace std;
void print(int* array, int a) {

	for (int i = 0; i < a; i++) 
		cout << array[i] << " ";
}

void buble(int* array, int a) {
	bool c = true;

	while (c) {
		c = false;

			for (int i = 1, min = 0; i < a; i++, min++){
				if (array[min] > array[i]) { swap(array[min], array[i]); c = true; }
			}

		a--;
	}
}

int main() {
	setlocale (LC_ALL, "Russian");

	int a;
		cout << "Введите количество элементов массива: " << endl;
		cin >> a;
	int* array = new int[a];
		cout << "Введите элементы массива: " << endl;

	for (int i = 0; i < a; i++) 
		cin >> array[i];

	buble(array, a);
	print(array, a);

	delete[] array;
	return 0;
}