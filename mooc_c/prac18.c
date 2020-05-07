/**
 * C语言永远只传值给函数
 *
 * @Author: Wang An
 * @Date: 4/27/2020 8:55 PM
 */
#include <stdio.h>

void swap(int a, int b);

int main() {
    int a, b;
    printf("Please input two numbers:\n");
    scanf("%d %d", &a, &b);
    printf("a = %d, b = %d\n", a, b);
    swap(a, b);
    printf("a = %d, b = %d\n", a, b);
    return 0;
}

void swap(int a, int b) {
    int t = a;
    a = b;
    b = t;
}
