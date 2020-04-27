/**
 * C语言中关系运算后返回的是0(false)或者1(true)
 *
 * @Author: Wang An
 * @Date: 4/25/2020 10:13 PM
 */
#include <stdio.h>

int main() {
    int a = 0;
    printf("Please input a number:");
    scanf("%d", &a);
    printf("0 < %d < 10 -> %d", a, 0 < a < 10);
    return 0;
}