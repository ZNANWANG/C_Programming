/**
 * 从高位开始逐位输出该整数的各位数字 —— 典型错误做法（注意末尾为0的数字，例如700）
 *
 * @Author: Wang An
 * @Date: 5/1/2020 9:53 AM
 */
#include <stdio.h>

long reverse(long num);

void displayDigits(long reversed);

int main() {
    long num = 0;
    scanf("%ld", &num);
    long reversed = reverse(num);
    displayDigits(reversed);

    return 0;
}

void displayDigits(long num) {
    int digit = 0;
    do {
        digit = num % 10;
        printf("%d ", digit);
        num /= 10;
    } while (num != 0);
    printf("\n");
}

long reverse(long num) {
    long reversed = 0, digit = 0;
    do {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    } while (num != 0);
    return reversed;
}