#include <iostream>;
using namespace std;

int i;
double eps, s, a, res;

double sum2(double eps) {
	i = 0;
	a = pow(-1, i) * (pow(2, i) / (pow(i, i + 1) + 1));
	s = a;
	while (abs(a) >= eps) {
		i++;
		a = pow(-1, i) * (pow(2, i) / (pow(i, i + 1) + 1));
		s += a;
	}
	return s;
}

void main(double eps) {
	setlocale(LC_ALL, "RUS");
	cout << "eps:";
	cin >> eps;
	res = sum(eps);
	cout << "Сумма:" << s << endl;
}
