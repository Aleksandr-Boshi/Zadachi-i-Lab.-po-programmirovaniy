

#include <iostream>
using namespace std;

int main()
{	  
	setlocale(0, "");

	int a, b;

	cout << "Введите первое число: ";
cin >> a;

	cout << "Введите второе число: ";
cin >> b;

a = a + b;

b = a - b;

a = a - b;


cout << a << endl;

cout << b << endl;


return 0;
}











