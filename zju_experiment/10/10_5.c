/**
 * 实验10-5 递归求简单交错幂级数的部分和 (15分)
 *
 * 本题要求实现一个函数，计算下列简单交错幂级数的部分和：
 *
 * f(x,n)= x−x^2​​+x^3−x^​4​​+⋯+(−1)​^n−1x^n
 *
 * 函数接口定义：
 * double fn( double x, int n );
 *
 * 其中题目保证传入的n是正整数，并且输入输出都在双精度范围内。函数fn应返回上述级数的部分和。建议尝试用递归实现。
 *
 * 裁判测试程序样例：
 * #include <stdio.h>
 *
 * double fn( double x, int n );
 *
 * int main()
 * {
 *      double x;
 *      int n;
 *
 *      scanf("%lf %d", &x, &n);
 *      printf("%.2f\n", fn(x,n));
 *
 *      return 0;
 * }
 *
 * 输入样例：
 * 0.5 12
 *
 * 输出样例：
 * 0.33
 *
 * @Author: Wang An
 * @Date: 5/5/2020 9:33 PM
 */
#include <stdio.h>

double fn(double x, int n);

int main() {
    double x;
    int n;

    scanf("%lf %d", &x, &n);
    printf("%.2f\n", fn(x, n));

    return 0;
}

double fn1(double x, int n) {
    if (n == 1) {
        return x;
    } else {
        int flag = 1;
        if (n % 2 == 0) {
            flag = -1;
        }
        double t = 1;
        for (int i = 0; i < n; i++) {
            t *= x;
        }
        t *= flag;
        return t += fn(x, n - 1);
    }
}

/**
 * 递归是数学的抽象
 * @param x 双精度数
 * @param n 正整数
 * @return 级数的和
 */
double fn(double x, int n) {
    double result;
    if (n == 0 || n == 1) {
        result = x;
    } else {
        result = x - x * fn(x, n - 1);
    }
    return result;
}