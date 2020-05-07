/**
 * 将一个整数逆序输出
 *
 * @Author: Wang An
 * @Date: 4/26/2020 5:41 PM
 */
#include <stdio.h>

int main() {
    printf("Please input a number:\n");
    int number;
    scanf("%d", &number);
    int res = 0;
    do {
        int digit = number % 10;
        res = res * 10 + digit;
        number /= 10;
    } while (number != 0);
    printf("The reversed number is: %d\n", res);
    return 0;
}