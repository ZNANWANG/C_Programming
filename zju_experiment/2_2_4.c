/**
 * 计算分段函数（2）
 *
 * 本题目要求计算下列分段函数f(x)的值：
 * 公式见图2_2_4.jpg
 *
 * 注：可在头文件中包含math.h，并调用sqrt函数求平方根，调用pow函数求幂。
 *
 * 输入格式:
 * 输入在一行中给出实数x。
 *
 * 输出格式:
 * 在一行中按“f(x) = result”的格式输出，其中x与result都保留两位小数。
 *
 * 输入样例1:
 * 10
 *
 * 输出样例1:
 * f(10.00) = 3.16
 *
 * 输入样例2:
 * -0.5
 *
 * 输出样例2:
 * f(-0.50) = -2.75
 *
 * @Author: Wang An
 * @Date: 4/29/2020 6:00 PM
 */
#include <stdio.h>
#include <math.h>

double f(double x);

int main() {
    double x = 0;
    scanf("%lf", &x);
    double ret = f(x);
    printf("f(%.2f) = %.2f\n", x, ret);
    return 0;
}

double f(double x) {
    double ret = 0;
    if (x >= 0) {
        ret = pow(x, 0.5);
    } else {
        ret = pow((x + 1), 2) + 2 * x + 1 / x;
    }
    return ret;
}
