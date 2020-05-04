/**
 * 实验6-1 近似求PI (15分)
 *
 * 本题要求编写程序，根据下式求π的近似值，直到最后一项小于给定精度eps。见图6_1.jpg
 *
 * 输入格式：
 * 输入在一行中给出精度eps，可以使用以下语句来读输入：
 *
 * scanf("%le", &eps);
 *
 * 输出格式：
 * 在一行内，按照以下格式输出π的近似值（保留小数点后5位）：
 *
 * PI = 近似值
 *
 * 输入样例：
 * 1E-5
 *
 * 输出样例：
 * PI = 3.14158
 *
 * @Author: Wang An
 * @Date: 5/2/2020 4:00 PM
 */
#include <stdio.h>

int main(int argc, const char *argv[]) {
    double eps = 0;
    scanf("%le", &eps);
    double numerator = 1;
    double denominator = 1;
    double sum = 0;
    double cnt = 0;
    do {
        double temp = numerator / denominator;
//        printf("numerator = %lf, denominator = %lf.\n", numerator, denominator);
        if (temp > eps) {
            sum += temp;
            cnt++;
            numerator *= cnt;
            denominator *= (2 * cnt + 1);
        } else {
            sum += temp;
            break;
        }
    } while (1);
    printf("PI = %.5lf\n", sum * 2);

    return 0;
}