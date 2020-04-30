/**
 * @Author: Wang An
 * @Date: 4/30/2020 1:06 AM
 */
#include <stdio.h>

double fact(int n);

int fact1(int n);

int main() {
    // 巨坑：输出是-0.00
    double b = 0;
    double ret = -b / 2;
    printf("%.2lf\n", ret);

    for (int c = 0; c < 100; c++) {
        printf("%d\t", c);
        printf("%.6f\t", fact(c));
        printf("%d\n", fact1(c));
    }
}

int fact1(int n) {
    int ret = 1;
    for (int i = 1; i <= n; i++) {
        ret *= i;
    }
    return ret;
}

double fact(int n) {
    double ret = 1;
    for (int i = 1; i <= n; i++) {
        ret *= i;
    }
    return ret;
}