/**
 * 求奇数和
 *
 * 本题要求计算给定的一系列正整数中奇数的和。
 *
 * 输入格式:
 * 输入在一行中给出一系列正整数，其间以空格分隔。当读到零或负整数时，表示输入结束，该数字不要处理。
 *
 * 输出格式:
 * 在一行中输出正整数序列中奇数的和。
 *
 * 输入样例:
 * 8 7 4 3 70 5 6 101 -1
 *
 * 输出样例:
 * 116
 *
 * @Author: Wang An
 * @Date: 4/30/2020 11:30 AM
 */
#include <stdio.h>

void getResult();

void getResult1();

int main() {
    getResult1();

    return 0;
}

void getResult1() {
    int num = 0;
    int sum = 0;
    do {
        scanf("%d", &num);
        if (num % 2 == 1) {
            sum += num;
        }
    } while (num > 0);
    printf("%d", sum);
}

void getResult() {
    int num = 0;
    scanf("%d", &num);
    int sum = 0;
    while (num > 0) {
        if (num % 2 == 1) {
            sum += num;
        }
        scanf("%d", &num);
    }
    printf("%d", sum);
}
