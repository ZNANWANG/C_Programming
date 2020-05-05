/**
 * 实验10-8 递归计算P函数 (15分)
 *
 * 本题要求实现下列函数P(n,x)的计算，其函数定义如下：见图10_8.jpg
 *
 * 函数接口定义：
 * double P( int n, double x );
 *
 * 其中n是用户传入的非负整数，x是双精度浮点数。函数P返回P(n,x)函数的相应值。题目保证输入输出都在双精度范围内。
 *
 * 裁判测试程序样例：
 * #include <stdio.h>
 *
 * double P( int n, double x );
 *
 * int main()
 * {
 *      int n;
 *      double x;
 *
 *      scanf("%d %lf", &n, &x);
 *      printf("%.2f\n", P(n,x));
 *
 *      return 0;
 * }
 *
 * 输入样例：
 * 10 1.7
 *
 * 输出样例：
 * 3.05
 *
 * @Author: Wang An
 * @Date: 5/5/2020 9:56 PM
 */
#include <stdio.h>

double P(int n, double x);

int main() {
    int n;
    double x;

    scanf("%d %lf", &n, &x);
    printf("%.2f\n", P(n, x));

    return 0;
}

double P(int n, double x) {
    if (n == 0) {
        return 1;
    } else if (n == 1) {
        return x;
    } else if (n > 1) {
        return ((2 * n - 1) * P(n - 1, x) - (n - 1) * P(n - 2, x)) / n;
    }
}