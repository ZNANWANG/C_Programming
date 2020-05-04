/**
 * 实验2-3-6 求交错序列前N项和 (15分)
 *
 * 本题要求编写程序，计算交错序列 1-2/3+3/5-4/7+5/9-6/11+... 的前N项之和。
 *
 * 输入格式:
 * 输入在一行中给出一个正整数N。
 *
 * 输出格式:
 * 在一行中输出部分和的值，结果保留三位小数。
 *
 * 输入样例:
 * 5
 *
 * 输出样例:
 * 0.917
 *
 * @Author: Wang An
 * @Date: 4/29/2020 10:49 PM
 */
#include <stdio.h>

double f(int n);

int main() {
    int n = 0;
    scanf("%d", &n);
    double sum = f(n);
    printf("%.3f", sum);
    return 0;
}

double f(int n) {
    double ret = 0;
    int numerator = 1;
    int denominator = 1;
    while (numerator <= n) {
        if (numerator % 2 == 1) {
            ret += numerator * 1.0 / denominator;
        } else {
            ret -= numerator * 1.0 / denominator;
        }
        denominator += 2;
        numerator++;
    }
    return ret;
}
