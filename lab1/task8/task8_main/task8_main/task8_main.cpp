#include<iostream>
#include <cmath>
#include "task8.h"

using namespace std;

void f(void);

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

	cin >> x;
}