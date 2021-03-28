#include <iostream>;
using namespace std;

int n, i;
double s, res;

double sum(int n) {

	while (i < n) {
		s += pow(-1, i) * (pow(2, i) / (pow(i, i + 1) + 1));
		i++;
	}
	return s;
}

void main(void) {
	setlocale(LC_ALL, "RUS");
	cout << "n:";
	cin >> n;
	res = sum(n);
	cout << "Сумма:" << s << endl;
}
