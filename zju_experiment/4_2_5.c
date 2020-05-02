/**
 * 实验4-2-5 水仙花数 (20分)（Narcissistic number）
 *
 * 水仙花数是指一个N位正整数（N≥3），它的每个位上的数字的N次幂之和等于它本身。例如：153=1^3+5^3+3​​^3。本题要求编写程序,计算所有N位水仙花数。
 *
 * 输入格式:
 * 输入在一行中给出一个正整数N（3≤N≤7）。
 *
 * 输出格式:
 * 按递增顺序输出所有N位水仙花数，每个数字占一行。
 *
 * 输入样例:
 * 3
 *
 * 输出样例:
 * 153
 * 370
 * 371
 * 407
 *
 * @Author: Wang An
 * @Date: 5/1/2020 8:43 AM
 */
#include <stdio.h>
#include <math.h>

int isNarc(int num, int numOfDigits);

int getNumOfDigits(int num);

int powR(int digit, int numOfDigits);

int main() {
    int n = 0;
    scanf("%d", &n);
    int num = powR(10, n - 1);
    while (1) {
        if (num < powR(10, n)) {
            if (isNarc(num, n)) {
                printf("%d\n", num);
            }
        } else {
            break;
        }

        num++;
    }

    return 0;
}

int isNarc(int num, int numOfDigits) {
    int ret = 0;
    int sum = 0;
    int digit = 0;
    int n = num;
    do {
        digit = n % 10;
        sum += powR(digit, numOfDigits);
        if (sum > num) {
            goto out;
        }
        n /= 10;
    } while (n != 0);

    if (sum == num) {
        ret = 1;
    }
    out:
    return ret;
}

/**
 * 这是一个pow函数，因为PTA对最大N显示超时，这个作为优化的，当成pow就好。
 * @param digit 幂底数
 * @param numOfDigits 幂指数
 * @return 幂值
 */
int powR(int digit, int numOfDigits) {
    int ret = 1;
    for (int i = 0; i < numOfDigits; i++) {
        ret *= digit;
    }
    return ret;
}

int getNumOfDigits(int num) {
    int ret = 0;
    do {
        num /= 10;
        ret++;
    } while (num != 0);
    return ret;
}
