/**
 * 计算给定多项式在给定点x处的值
 *
 * 多项式定义如下：
 * f(x) = a0 + a1x + a2x^2 + a3x^3 + ...+ aix^i + ... + anx^n
 * 递推公式为：
 * f(x) = a0 + x(a1 + x(...(an-1 + x(an))...))
 *
 * 注：
 * 1+2+3+……+n = (n^2+n)/2
 * 分析算法复杂度的时候，经常关注两种情况的复杂度：
 * (1)最坏情况的复杂度 Tworst(n)
 * (2)平均复杂度 Tavg(n)
 *
 * @Author: Wang An
 * @Date: 5/6/2020 9:28 PM
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define MAXK 1e7

clock_t start, stop;

double duration;

void f1(int n, int x, double *a);

void f2(int n, int x, double *a);

void f3(int n, int x, double *a);

int main(int argc, const char *argv[]) {
    // 预处理工作不算入函数运行时间
    int n = 0, x = 0;
    scanf("%d%d", &n, &x);
    double *a = (double *) malloc(n * sizeof(double));
    double *p = a;
    for (int i = 1; i <= n; i++) {
        *p++ = i;
    }

    start = clock();
    for(int i = 0; i < MAXK; i++) {
        f1(n, x, a);
    }
    stop = clock();
    duration = ((double)stop - start)/CLK_TCK/MAXK;
    printf("ticks1 = %lf\n", (double)stop - start);
    printf("duration1 = %6.2e\n", duration);

    start = clock();
    for(int i = 0; i < MAXK; i++) {
        f2(n, x, a);
    }
    stop = clock();
    duration = ((double)stop - start)/CLK_TCK/MAXK;
    printf("ticks2 = %lf\n", (double)stop - start);
    printf("duration2 = %6.2e\n", duration);

    start = clock();
    for(int i = 0; i < MAXK; i++) {
        f3(n, x, a);
    }
    stop = clock();
    duration = ((double)stop - start)/CLK_TCK/MAXK;
    printf("ticks3 = %lf\n", (double)stop - start);
    printf("duration3 = %6.2e\n", duration);

    return 0;
}

/**
 * 时间效率较高
 * T(n) = c * n
 */
void f2(int n, int x, double *a) {
    double sum = 0;
    for (int i = n - 1; i > 0; i--) {
        sum = x * (sum + a[i]);
    }
    sum += a[0];
//    printf("%.2lf\n", sum);
}

/**
 * 时间效率最高
 * T(n) = c * n
 */
void f3(int n, int x, double *a) {
    double sum = a[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        sum = x * sum + a[i];
    }
//    printf("%.2lf\n", sum);
}

/**
 * 时间效率较高
 * T(n) = c1 * n^2 + c2 * n
 */
void f1(int n, int x, double *a) {
    double sum = a[0];
    for (int i = 1; i < n; i++) {
        sum += a[i] * pow(x, i);
    }
//    printf("%.2lf\n", sum);
}
