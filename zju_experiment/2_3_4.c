/**
 * 求简单交错序列前N项和
 *
 * 本题要求编写程序,计算序列 1 - 1/4 + 1/7 - 1/10 + ... 的前N项之和。
 *
 * 输入格式:
 * 输入在一行中给出一个正整数N。
 *
 * 输出格式:
 * 在一行中按照“sum = S”的格式输出部分和的值S，精确到小数点后三位。题目保证计算结果不超过双精度范围。
 *
 * 输入样例:
 * 10
 *
 * 输出样例:
 * sum = 0.819
 *
 * @Author: Wang An
 * @Date: 4/29/2020 10:21 PM
 */
#include <stdio.h>

double f(int n);

int main() {
    int n = 0;
    scanf("%d", &n);
    double sum = f(n);
    printf("sum = %.3f", sum);

    return 0;
}

double f(int n) {
    double ret = 0;
    int i = 0;
    int denominator = 1;
    while (i < n) {
        if (i % 2 != 1) {
            ret += 1.0 / denominator;
        } else {
            ret -= 1.0 / denominator;
        }
        denominator += 3;
        i++;
    }
    return ret;
}
