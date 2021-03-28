#include <iostream>;
using namespace std;

int i, k;
double eps, s, res;

int findFirstElement(double eps) {
	i = 0;
	s = 0;
	do {
		if (abs(s) <= eps) break;
		i++;
		s = pow(-1, i) * (pow(2, i) / (pow(i, i + 1) + 1));
		k = i;
	} while (true);
	return k;
}

void main(double eps) {
	setlocale(LC_ALL, "RUS");
	cout << "eps:";
	cin >> eps;
	res = findFirstElement(eps);
	cout << "Первый член последовательности:" << res << endl;
}
