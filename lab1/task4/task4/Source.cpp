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
	cout << "�������� x = " << x << endl;
	cout << "\n" << "�������� ������� " << result << endl;

	cout << "\n" << "������� x " << "\n" << endl;
	cin >> x;
	f();
	cout << "\n" << "�������� ������� " << result << endl;
}