/**
 * 求两个整数的最大公约数
 *
 * @Author: Wang An
 * @Date: 4/26/2020 9:00 PM
 */
#include <stdio.h>

/**
 * 蛮力遍历法
 */
void getGreatestCommonDivisor() {
    int a, b;
    printf("Please input two numbers:\n");
    scanf("%d %d", &a, &b);
    int min = a > b ? b : a;
    int greatestDivisor = 0;
    // 0和任何整数的最大公约数是其绝对值。
    for (int i = 1; i <= min; i++) {
        if (a % i == 0 && b % i == 0) {
            greatestDivisor = i;
        }
    }
    printf("The greatest common divisor of %d and %d is %d.\n", a, b, greatestDivisor);
}

/**
 * 辗转相除法
 */
void getGreatestCommonDivisor1() {
    int a, b;
    printf("Please input two numbers: \n");
    scanf("%d %d", &a, &b);
    while (b != 0) {
        int reminder = a % b;
        a = b;
        b = reminder;
    }
    printf("The greatest common divisor is %d.\n", a);
}

int main() {
    getGreatestCommonDivisor1();
    return 0;
}