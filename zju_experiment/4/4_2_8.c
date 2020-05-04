/**
 * 实验4-2-8 输出整数各位数字 (15分)
 *
 * 本题要求编写程序，对输入的一个整数，从高位开始逐位分割并输出它的各位数字。
 *
 * 输入格式：
 * 输入在一行中给出一个长整型范围内的非负整数。
 *
 * 输出格式：
 * 从高位开始逐位输出该整数的各位数字，每个数字后面有一个空格。
 *
 * 输入样例：
 * 123456
 *
 * 输出样例：
 * 1 2 3 4 5 6
 *
 * 注：错误做法详见test/test3.c
 *
 * @Author: Wang An
 * @Date: 5/1/2020 10:28 AM
 */
#include <stdio.h>
#include <math.h>

int getNumOfDigits(long num);

void displayNumer(long num, int numOfDigits);

int main() {
    long num = 0;
    scanf("%ld", &num);
    int numOfDigits = getNumOfDigits(num);
    displayNumer(num, numOfDigits);

    return 0;
}

void displayNumer(long num, int numOfDigits) {
    int n = 0;
    int digit = 0;
    do {
        n = pow(10, numOfDigits - 1);
        digit = num / n;
        printf("%d ", digit);
        num %= n;
        numOfDigits--;
    } while (numOfDigits > 0);
}

int getNumOfDigits(long num) {
    int numOfDigits = 0;
    do {
        numOfDigits++;
        num /= 10;
    } while (num != 0);
    return numOfDigits;
}
