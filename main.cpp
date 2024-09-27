/************************************
 * Автор: Важенин С.С               *
 * Дата:  27.09.2024                *
 * Название: Лабораторная работа №4 *
 ************************************/
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    const double v = 0.009;
    const double d = 1.91;
    const double x = 9.2 * pow(10,5);

    double L;
    double R;

    int a[7] {100,  200,  500,  1000,  2000,  5000,  10000};

    for (int i = 0; i < 7; ++i) {
        R = (a[i] * d) / v;
        if (R > x) {
            L = 0.021 / pow(d, 0.3);
        } else {
            L = pow((((1.5 * pow(10, -6)) / d) + (1 / R)), 0.3);
        }
        cout << ::fixed << R;
        cout << " " << L << endl;
    }
}
