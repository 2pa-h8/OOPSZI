#include <iostream>
using namespace std;

double sum(int n) {
    double sum1 = 0;
    for (int i = 0; i < n; ++i) {
        sum1 += pow(-1, i) * (pow(2, i) / (pow(i, i + 1) + 1));
    }
    return sum1;
}

double sum2(double eps) {
    double s = 0;
    double a = 0;
    for (int i = 0; ; i++) {
        a = pow(-1, i) * (pow(2, i) / (pow(i, i + 1) + 1));
        s += a;
        if (abs(a) < eps) break;
    }
    return s;
}

void print(int n, int k) {
    double sum1 = 0;
    for (int i = 0; i < n; ++i) {

        if (i % k == k - 1) continue;
        sum1 = pow(-1, i) * (pow(2, i) / (pow(i, i + 1) + 1));
        cout << sum1 << endl;
    }
}

int findFirstElement(double eps) {
    int k;
    double sum1 = 0;
    for (int i = 0;; i++) {
        k = i;
        sum1 = pow(-1, i) * (pow(2, i) / (pow(i, i + 1) + 1));
        if (abs(sum1) <= eps) break;
    }
    return k;
}

int findFirstNegativeElement(double eps) {
    int k;
    double sum1 = 0;
    for (int i = 0;; i++) {
        k = i;
        sum1 = pow(-1, i) * (pow(2, i) / (pow(i, i + 1) + 1));
        if (sum1 > 0) continue;
        if (abs(sum1) <= eps) break;
    }
    return k;
}