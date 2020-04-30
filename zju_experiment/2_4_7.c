/**
 * 求组合数
 *
 * 本题要求编写程序，根据公式Cn​m​​ = n!/​m!(n−m)!算出从n个不同元素中取出m个元素（m≤n）的组合数。
 * 建议定义和调用函数fact(n)计算n!，其中n的类型是int，函数类型是double。
 *
 * 输入格式:
 * 输入在一行中给出两个正整数m和n（m≤n），以空格分隔。
 *
 * 输出格式:
 * 按照格式“result = 组合数计算结果”输出。题目保证结果在double类型范围内。
 *
 * 输入样例:
 * 2 7
 *
 * 输出样例:
 * result = 21
 *
 * @Author: Wang An
 * @Date: 4/29/2020 11:26 PM
 */
#include <stdio.h>

double fact(int n);

int fact1(int n);

long fact2(int n);

int main() {
    int m = 0, n = 0;
    scanf("%d %d", &m, &n);
//    double ret = fact(n) / (fact(m) * fact(n - m));
    // 下面这种写法会超出int范围，最终导致出错，详见test1.c。
//    double ret = fact1(n) * 1.0 / (1.0 * fact1(m) * fact1(n - m));
    // 改用long型整数，就可以AC了。
    double ret = fact2(n) * 1.0 / (fact2(m) * fact2(n - m));
    printf("result = %.0f\n", ret);
    return 0;
}

long fact2(int n) {
    long ret = 1;
    for (int i = 1; i <= n; i++) {
        ret *= i;
    }
    return ret;
}


int fact1(int n) {
    int ret = 1;
    for (int i = 1; i <= n; i++) {
        ret *= i;
    }
    return ret;
}

double fact(int n) {
    double ret = 1;
    for (int i = 1; i <= n; i++) {
        ret *= i;
    }
    return ret;
}
