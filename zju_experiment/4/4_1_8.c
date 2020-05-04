/**
 * 实验4-1-8 求给定精度的简单交错序列部分和 (15分)
 *
 * 本题要求编写程序，计算序列部分和 1 - 1/4 + 1/7 - 1/10 + ... 直到最后一项的绝对值不大于给定精度eps。
 *
 * 输入格式:
 * 输入在一行中给出一个正实数eps。
 *
 * 输出格式:
 * 在一行中按照“sum = S”的格式输出部分和的值S，精确到小数点后六位。题目保证计算结果不超过双精度范围。
 *
 * 输入样例1:
 * 4E-2
 *
 * 输出样例1:
 * sum = 0.854457
 *
 * 输入样例2:
 * 0.02
 *
 * 输出样例2:
 * sum = 0.826310
 *
 * @Author: Wang An
 * @Date: 4/30/2020 12:43 PM
 */
#include <stdio.h>

int main() {
    double eps = 0;
    scanf("%lf", &eps);
//    printf("eps = %lf\n", eps);
    double denominator = 1;
    double sum = 0;
    int flag = 1;
    while (1) {
        double num = 1 / denominator;
//        printf("num = %lf\n", num);
        if (num > eps) {
            sum += num * flag;
        } else {
            sum += num * flag;
            break;
        }
        denominator += 3;
        flag *= -1;
    }
    printf("sum = %lf\n", sum);

    return 0;
}