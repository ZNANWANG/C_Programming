/**
 * 实验9-10 平面向量加法 (15分)
 *
 * 本题要求编写程序，计算两个二维平面向量的和向量。
 *
 * 输入格式:
 * 输入在一行中按照“x1  y1  x2  y2”的格式给出两个二维平面向量v1​​ =(x1, y1)和v2 =(x2, y2)的分量。
 *
 * 输出格式:
 * 在一行中按照(x, y)的格式输出和向量，坐标输出小数点后一位（注意不能输出−0.0）。
 *
 * 输入样例:
 * 3.5 -2.7 -13.9 8.7
 *
 * 输出样例:
 * (-10.4, 6.0)
 *
 * @Author: Wang An
 * @Date: 5/5/2020 6:14 PM
 */
#include <stdio.h>

#define accurate -0.05

int main(int argc, const char *argv[]) {
    double x1 = 0, y1 = 0, x2 = 0, y2 = 0;
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
    double x = x1 + x2;
    double y = y1 + y2;
    if (x > accurate && x < 0)
        x = 0.0;
    if (y > accurate && y < 0)
        y = 0.0;

    printf("(%.1lf, %.1lf)\n", x, y);

    return 0;
}