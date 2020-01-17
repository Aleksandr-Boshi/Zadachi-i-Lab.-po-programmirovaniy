#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main()
{
	setlocale (LC_ALL, "RUSSIAN");

	const int N = 20;
	int massiv[N];
	int i, min, max;

	/* Заполняем массив числами от -100 до 100 */
	for (int i = 0; i < N; ++i)
		massiv[i] = rand()%201 - 100;

	/* Выводим массив */
	for (int i = 0; i < N; i++) {
		cout << massiv[i] << " ";
	}

	/* Нахождение минимального элемента */
	min = massiv[0]; 
	for (i = 1; i < N; i++)
		if (massiv[i] < min) 
		{
			min = massiv[i];
		} 

	/* Ннахождение максимального элемента */
	max = massiv[0]; 
	for (i = 1; i < N; i++)
		if (massiv[i] > max) 
		{
			max = massiv[i];
		} 

	printf("\n Min element = %d.", min); // Выводим минимальный элемент.
	printf("\n Max element = %d.", max); // Выводим максимальный элемент.

	return 0;
}
