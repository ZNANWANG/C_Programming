/**
 * C语言中double类型计算的每个算子都必须保证为double，否则会丢失精度，这一点和Java不同。
 *
 * @Author: Wang An
 * @Date: 4/26/2020 8:53 PM
 */
#include <stdio.h>

int main() {
    double a = 0;
    int b;
    scanf("%d", &b);
    a += 1 / b;
    printf("0 + 1/%d = %f\n", b, a);
    return 0;
}