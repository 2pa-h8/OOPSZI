#include <iostream>;
using namespace std;

int i;
double eps, s, a, res;

double sum2(double eps) {
	i = 0;
	s = 0;
	a = 0;
	do {
		a = pow(-1, i) * (pow(2, i) / (pow(i, i + 1) + 1));
		s += a;
		i++;
	} while (abs(a) >= eps);
	return s;
}

void main(double eps) {
	setlocale(LC_ALL, "RUS");
	cout << "eps:";
	cin >> eps;
	res = sum2(eps);
	cout << "Сумма:" << s << endl;
}
