#include <iostream>;
using namespace std;

int i, k;
double eps, s, res;

int findFirstNegativeElement(double eps) {
	i = 0;
	s = pow(-1, i) * (pow(2, i) / (pow(i, i + 1) + 1));
	while (true) {
		i++;
		s = pow(-1, i) * (pow(2, i) / (pow(i, i + 1) + 1));
		k = i;
		if (s > 0) continue;
		if (abs(s) <= eps) {
			return k;
		}
	}
}

void main(double eps) {
	setlocale(LC_ALL, "RUS");
	cout << "eps:";
	cin >> eps;
	res = findFirstNegativeElement(eps);
	cout << "Первый отрицательный член последовательности:" << res << endl;
}
