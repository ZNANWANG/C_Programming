/**
 * 求奇数分之一序列前N项和
 *
 * 本题要求编写程序，计算序列 1 + 1/3 + 1/5 + ... 的前N项之和。
 *
 * 输入格式:
 * 输入在一行中给出一个正整数N。
 *
 * 输出格式:
 * 在一行中按照“sum = S”的格式输出部分和的值S，精确到小数点后6位。题目保证计算结果不超过双精度范围。
 *
 * 输入样例:
 * 23
 *
 * 输出样例:
 * sum = 2.549541
 *
 * @Author: Wang An
 * @Date: 4/29/2020 10:10 PM
 */
#include <stdio.h>

double f(int number);

double f1(int number);

int main() {
    int number = 0;
    scanf("%d", &number);
    double sum = f1(number);
    printf("sum = %.6f\n", sum);
    return 0;
}

double f(int number) {
    double ret = 0;
    int i = 0;
    int denominator = 1;
    while (i < number) {
        ret += 1.0 / denominator;
        denominator += 2;
        i++;
    }
    return ret;
}

double f1(int number) {
    double ret = 0;
    for (int i = 0; i < number; i++) {
        int denominator = 2 * i + 1;
        ret += 1.0 / denominator;
    }
    return ret;
}
