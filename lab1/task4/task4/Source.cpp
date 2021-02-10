#include<iostream>
#include <cmath>
using namespace std;

double x,result;

void f(void) {
	
	result = tan(2 * x) + 1 / cos(2 * x);
}

void main() {
	setlocale(LC_ALL, "Rus");
	x = 27;
	f();
	cout << "Значение x = " << x << endl;
	cout << "\n" << "Значение функции " << result << endl;

	cout << "\n" << "Введите x " << "\n" << endl;
	cin >> x;
	f();
	cout << "\n" << "Значение функции " << result << endl;
}