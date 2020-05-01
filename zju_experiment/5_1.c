/**
 * 使用函数计算两个复数之积
 *
 * 若两个复数分别为：c1​​=x​1+y​1​​×i和c2​​=x2+y2×i，则它们的乘积为 c1×c2 =(x1​​×x​2−y1×y2 )+(x1×y2+x2×y1)×i。
 *
 * 本题要求实现一个函数计算两个复数之积。
 *
 * 函数接口定义：
 * double result_real, result_imag;
 * void complex_prod( double x1, double y1, double x2, double y2 );
 *
 * 其中用户传入的参数为两个复数x1+y1i和x2+y2i；函数complex_prod应将计算结果的实部存放在全局变量result_real中、虚部存放在全局变量
 * result_imag中。
 *
 * 裁判测试程序样例：
 * #include<stdio.h>
 *
 * double result_real, result_imag;
 * void complex_prod( double x1, double y1, double x2, double y2 );
 *
 * int main(void)
 * {
 *      double imag1, imag2, real1, real2;
 *
 *      scanf("%lf %lf", &real1, &imag1);
 *      scanf("%lf %lf", &real2, &imag2);
 *      complex_prod(real1, imag1, real2, imag2);
 *      printf("product of complex is (%f)+(%f)i\n", result_real, result_imag);
 *
 *      return 0;
 * }
 *
 * 输入样例：
 * 1 2
 * -2 -3
 *
 * 输出样例：
 * product of complex is (4.000000)+(-7.000000)i
 *
 * @Author: Wang An
 * @Date: 5/1/2020 11:43 AM
 */
#include<stdio.h>

double result_real, result_imag;

void complex_prod(double x1, double y1, double x2, double y2);

int main(void) {
    double imag1, imag2, real1, real2;

    scanf("%lf %lf", &real1, &imag1);
    scanf("%lf %lf", &real2, &imag2);
    complex_prod(real1, imag1, real2, imag2);
    printf("product of complex is (%f)+(%f)i\n", result_real, result_imag);

    return 0;
}

void complex_prod(double x1, double y1, double x2, double y2) {
    result_real = x1 * x2 + y1 * y2 * -1;
    result_imag = x1 * y2 + x2 * y1;
}