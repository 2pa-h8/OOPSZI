#include<iostream>
#include <cmath>
using namespace std;

void main(double x) {
	setlocale(LC_ALL, "Rus");
	double result;
	x = 27;
	result = tan(2 * x) + 1 / cos(2 * x);
	cout << "�������� x = " << x << endl ;
	cout <<"\n"<< "�������� ������� " << result << endl;

	cout << "\n" << "������� x " << "\n" << endl;
	cin >> x;
	result = tan(2 * x) + 1 / cos(2 * x);
	cout << "\n" << "�������� ������� " << result << endl;
}