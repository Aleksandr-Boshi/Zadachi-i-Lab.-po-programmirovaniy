#include <iostream>
using namespace std;

double bmi, weight, height = 1;


double BMI(double weight, double height) {

	return bmi = (weight / pow(height, 2.0));
}

void printBMI(double BMI) {

	if (BMI < 18.5) {
		cout << "Недостаточная масса" << endl;
	}
	else if ((BMI >= 18.5) and (BMI < 25.0)) {
		cout << "Норма" << endl;
	}
	else if ((BMI >= 25.0) and (BMI < 30.0)) {
		cout << "Избыточная масса" << endl;
	}
	else if (BMI >= 30.0)
		cout << "Ожирение" << endl;

}

int main(){
	setlocale(LC_ALL, "RUSSIAN");
	

	cout << "Введите через пробел свой весс и рост(вес в килограммах, рост в сантиметрах): " << endl;
	cin >> weight >> height;

	height = height / 100;

	if ((weight <= 0) | (height <= 0)) {
		cout << "Вес и рост должны быть больше 0." << endl;
		return 1;
	}

	BMI(weight, height);
	printBMI(bmi);

	return 0;
}