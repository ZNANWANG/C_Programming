/**
 * 计算非负整数的阶乘
 *
 * @Author: Wang An
 * @Date: 4/26/2020 10:43 AM
 */
#include <stdio.h>

int main() {
    int result = 1;
    int num;
    printf("Please input a number:\n");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++) {
        result *= i;
    }
    printf("The factorial of %d is %d", num, result);
    return 0;
}