/**
 * 求平方与倒数序列的部分和
 *
 * 本题要求对两个正整数m和n（m≤n）编写程序，计算序列和m^2+1/m+(m+1)^​2+1/(m+1)+⋯+n​^2+1/n。
 *
 * 输入格式:
 * 输入在一行中给出两个正整数m和n（m≤n），其间以空格分开。
 *
 * 输出格式:
 * 在一行中按照“sum = S”的格式输出部分和的值S，精确到小数点后六位。题目保证计算结果不超过双精度范围。
 *
 * 输入样例:
 * 5 10
 *
 * 输出样例:
 * sum = 355.845635
 *
 * @Author: Wang An
 * @Date: 4/29/2020 10:56 PM
 */
#include <stdio.h>
#include <math.h>

double f(int m, int n);

int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    double ret = f(m, n);
    printf("sum = %.6f", ret);
    return 0;
}

double f(int m, int n) {
    double ret = 0;
    for (int i = m; i <= n; i++) {
        ret += pow(i, 2);
        ret += 1.0 / i;
    }
    return ret;
}
