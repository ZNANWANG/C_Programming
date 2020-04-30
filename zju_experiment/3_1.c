/**
 * 求一元二次方程的根
 *
 * 本题目要求一元二次方程的根，结果保留2位小数。
 *
 * 输入格式:
 * 输入在一行中给出3个浮点系数a、b、c，中间用空格分开。
 *
 * 输出格式:
 * 根据系数情况，输出不同结果：
 * 1)如果方程有两个不相等的实数根，则每行输出一个根，先大后小；
 * 2)如果方程有两个不相等复数根，则每行按照格式“实部+虚部i”输出一个根，先输出虚部为正的，后输出虚部为负的；
 * 3)如果方程只有一个根，则直接输出此根；
 * 4)如果系数都为0，则输出"Zero Equation"；
 * 5)如果a和b为0，c不为0，则输出"Not An Equation"。
 *
 * 输入样例1:
 * 2.1 8.9 3.5
 *
 * 输出样例1:
 * -0.44
 * -3.80
 *
 * 输入样例2:
 * 1 2 3
 *
 * 输出样例2:
 * -1.00+1.41i
 * -1.00-1.41i
 *
 * 输入样例3:
 * 0 2 4
 *
 * 输出样例3:
 * -2.00
 *
 * 输入样例4:
 * 0 0 0
 *
 * 输出样例4:
 * Zero Equation
 *
 * 输入样例5:
 * 0 0 1
 *
 * 输出样例5:
 * Not An Equation
 *
 * @Author: Wang An
 * @Date: 4/29/2020 11:51 PM
 */
#include <stdio.h>
#include <math.h>

int getResult(double a, double b, double c);

int main() {
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    getResult(a, b, c);
    return 0;
}

int getResult(double a, double b, double c) {
    if (a == 0 && b == 0 && c == 0) {
        printf("Zero Equation\n");
    } else if (a == 0 && b == 0) {
        printf("Not An Equation\n");
    } else if (a == 0) {
        printf("%.2lf\n", -c / b);
    } else {
        double delta = pow(b, 2) - 4 * a * c;
        if (delta == 0) {
            printf("%.2lf\n", -b / (2 * a));
        } else if (delta > 0) {
            double x1 = (-b + sqrt(delta)) / (2 * a);
            double x2 = (-b - sqrt(delta)) / (2 * a);
            printf("%.2lf\n", x1);
            printf("%.2lf\n", x2);
        } else {
            delta = 4 * a * c - b * b;
            double real = -b / (2 * a); //实部；
            double imag = sqrt(delta) / (2 * a); //虚部；
            if (b == 0) real = 0; //若方程有纯虚根，则real==0;（注：纯虚根是实部为零）；如果不写这一句，real == -0.00，巨坑。
            printf("%.2lf+%.2lfi\n", real, imag);
            printf("%.2lf%.2lfi", real, -imag);
        }
    }
}
