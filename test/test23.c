/**
 * 测试scanf()读取整型数字对于空格或换行符的处理，以及浮点数运算精度的问题。
 *
 * @Author: Wang An
 * @Date: 5/5/2020 8:45 PM
 */
#include <stdio.h>
#include <math.h>

#define eps 1e-6

int main(int argc, const char *argv[]) {
    int a = 0, b = 0;
    scanf("%d%d", &a, &b);
    printf("a = %d, b = %d\n", a, b);

    int c = 111;
    double d = sqrt(c);
    printf("d = %lf\n", d);
    double e = d * d;
    printf("e = %lf\n", e);
    printf("c == e = %d\n", c == e);
    printf("c == e = %d\n", abs(c - e) <= eps);

    return 0;
}