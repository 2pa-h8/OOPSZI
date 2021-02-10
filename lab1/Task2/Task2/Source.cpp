#include<iostream>
#include <cmath>
using namespace std;

double f(double x) {
	double func;
	func = tan(2 * x) + 1 / cos(2 * x);
	return func;
}

void main(double x) {
	setlocale(LC_ALL, "Rus");
	double result;
	x = 27;
	result = f(x);
	cout << "Значение x = " << x << endl;
	cout << "\n" << "Значение функции " << result << endl;

	cout << "\n" << "Введите x " << "\n" << endl;
	cin >> x;
	result = f(x);
	cout << "\n" << "Значение функции " << result << endl;
}