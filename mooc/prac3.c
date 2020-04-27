/**
 * 计算三数最大数
 *
 * @Author: Wang An
 * @Date: 4/25/2020 10:05 PM
 */
#include <stdio.h>

int main() {
    int max;
    int a;
    int b;
    int c;
    printf("Please input three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    max = a > b ? a : b;
    max = max > c ? max : c;
    printf("max = %d", max);
    return 0;
}