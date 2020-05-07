/**
 * 统计一个整数的位数
 *
 * @Author: Wang An
 * @Date: 4/26/2020 9:50 AM
 */
#include <stdio.h>

int main() {
    int num;
    printf("Please input a number:\n");
    scanf("%d", &num);
    int count = 0;
    do {
        num /= 10;
        count++;
    } while (num != 0);
    printf("The number of digit is: %d", count);
}