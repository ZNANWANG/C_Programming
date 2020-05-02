/**
 * 实验2-2-6 计算分段函数[3] (10分)
 *
 * 本题目要求计算下列分段函数f(x)的值：
 * 公式见图2_2_6.jpg
 *
 * 输入格式：
 * 输入在一行中给出实数x。
 *
 * 输出格式：
 * 在一行中按“f(x) = result”的格式输出，其中x与result都保留一位小数。
 *
 * 输入样例1：
 * 10
 *
 * 输出样例1：
 * f(10.0) = 0.1
 *
 * 输入样例2：
 * 234
 *
 * 输出样例2：
 * f(234.0) = 234.0
 *
 * @Author: Wang An
 * @Date: 4/29/2020 6:37 PM
 */
#include <stdio.h>

double f(double x);

int main() {
    double x = 0;
    scanf("%lf", &x);
    double ret = f(x);
    printf("f(%.1f) = %.1f\n", x, ret);

    return 0;
}

double f(double x) {
    double ret = 0;
    if (x != 10) {
        ret = x;
    } else {
        ret = 1 / x;
    }
    return ret;
}
