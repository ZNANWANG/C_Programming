/**
 * 实验2-4-5 简单实现x的n次方 (10分)
 *
 * 本题要求实现一个计算xn （n≥0）的函数。
 *
 * 函数接口定义：
 * double mypow( double x, int n );
 *
 * 裁判测试程序样例：
 * #include <stdio.h>
 *
 * double mypow( double x, int n );
 *
 * int main()
 * {
 *      double x;
 *      int n;
 *
 *      scanf("%lf %d", &x, &n);
 *      printf("%f\n", mypow(x, n));
 *
 *      return 0;
 * }
 *
 * 输入样例：
 * 0.24 4
 *
 * 输出样例：
 * 0.003318
 *
 * @Author: Wang An
 * @Date: 5/1/2020 11:26 AM
 */
#include <stdio.h>

double mypow(double x, int n);

int main() {
    double x;
    int n;

    scanf("%lf %d", &x, &n);
    printf("%f\n", mypow(x, n));

    return 0;
}

double mypow(double x, int n) {
    double ret = 1;
    for (int i = 0; i < n; i++) {
        ret *= x;
    }
    return ret;
}