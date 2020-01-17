#include <iostream>
using namespace std;

int main()
{
	setlocale (LC_ALL, "RUSSIAN");

	int a = 3.5;
	int b = 2.5;
	double c = 5.5;
	double d = 4.5;
	
	cout << "int a = 3.5;" << endl;
	cout << "int b = 2.5;" << endl;
	cout << "double c = 5.5;" << endl;
	cout << "double d = 4.5;" << endl;
	 
	cout << endl;

	cout << "int с int" << endl;
		cout << a << " + " << b << " = " << a + b << endl;
		cout << a << " - " << b << " = " << a - b << endl;
		cout << a << " * " << b << " = " << a * b << endl;
		cout << a << " / " << b << " = " << a / b << endl;

		cout << endl;

	cout << "double с double" << endl;
		cout << c << " + " << d << " = " << c + d << endl;
		cout << c << " - " << d << " = " << c - d << endl;
		cout << c << " * " << d << " = " << c * d << endl;
		cout << c << " / " << d << " = " << c / d << endl;

		cout << endl;

	cout << "int с double" << endl;
		cout << a << " + " << d << " = " << a + d << endl;
		cout << a << " - " << d << " = " << a - d << endl;
		cout << a << " * " << d << " = " << a * d << endl;
		cout << a << " / " << d << " = " << a / d << endl;

		cout << endl;

	cout << "double с int" << endl;
		cout << c << " + " << b << " = " << c + b << endl;
		cout << c << " - " << b << " = " << c - b << endl;
		cout << c << " * " << b << " = " << c * b << endl;
		cout << c << " / " << b << " = " << c / b << endl;

		cout << endl;

	return 0;
}