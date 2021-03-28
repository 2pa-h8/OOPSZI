#include <iostream>
using namespace std;

double sum(int n) {
    double sum1 = 0;
    int i = 0;
    while (i < n) {
        sum1 += pow(-1, i) * (pow(2, i) / (pow(i ,i + 1) + 1));
        i++;
    }
    return sum1;
}

double sum2(double eps) {
    int i = 0;
    double a = pow(-1, i) * (pow(2, i) / (pow(i, i + 1) + 1));
    double s = a;
    while (abs(a) >= eps) {
        a = pow(-1, i) * (pow(2, i) / (pow(i, i + 1) + 1));
        s += a;
        i++;
    }
    return s;
}



void print(int n, int k) {
    int i = 0;
    double sum1 = 0;
    while (i < n) {
        sum1 = pow(-1, i) * (pow(2, i) / (pow(i, i + 1) + 1));
        i++;
        if (i % k == 0)	continue;
        printf("���������: %d ", i); 
        printf(" ���������: %f\n", sum1);;
    }
}

int findFirstElement(double eps) {
    int i = 0;
    int k = 0;
    double sum1 = pow(-1, i) * (pow(2, i) / (pow(i, i + 1) + 1));
    while (true) {
        if (abs(sum1) <= eps) break;
        i++;
        sum1 = pow(-1, i) * (pow(2, i) / (pow(i, i + 1) + 1));
        k = i;
    }
    return k;
}

int findFirstNegativeElement(double eps) {
    int i = 0;
    int k = 0;
    double sum1 = pow(-1, i) * (pow(2, i) / (pow(i, i + 1) + 1));
    while (true) {
        i++;
        sum1 = pow(-1, i) * (pow(2, i) / (pow(i, i + 1) + 1));
        k = i;
        if (sum1 > 0) continue;
        if (abs(sum1) <= eps) {
            return k;
        }
    }
}