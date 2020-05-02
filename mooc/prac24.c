/**
 * 输出前100个素数
 *
 * 思路：
 * 不能被前n-1个素数整除是一个数字是第n个素数的充分必要条件。
 *
 * @Author: Wang An
 * @Date: 4/28/2020 4:01 PM
 */
#include <stdio.h>
#include <string.h>

int isPrime(int x, int knownPrimes[], int numberOfKnownPrimes);

int main() {
    const int number = 10;
    int prime[number];
    // 初始化数组
    prime[0] = 2;
    for (int i = 1; i < number; i++) {
        prime[i] = 0;
    }
    int count = 1;
    int i = 3;

    // 调试代码块
    {
        printf("\t\t\t");
        for (int i = 0; i < number; i++) {
            printf("%d\t", i);
        }
        printf("\n");
    }

    while (count < number) {
        if (isPrime(i, prime, count)) {
            prime[count++] = i;
        }

        // 调试语句放入代码块内，便于管理。
        {
            printf("i = %d\t count = %d\t", i, count);
            for (int i = 0; i < number; i++) {
                printf("%d\t", prime[i]);
            }
            printf("\n");
        }

        i++;
    }
    for (int i = 0; i < number; i++) {
        printf("%d ", prime[i]);
        if ((i + 1) % 5) {
            printf("\t");
        } else {
            printf("\n");
        }
    }

    return 0;
}

/**
 * 判断一个数是否是素数
 * @param x 待判断的数
 * @param knownPrimes 已记录的素数
 * @param numberOfKnownPrimes 已记录素数的个数
 * @return 1 —— 代表当前数字是素数， 0 —— 代表当前数字不是素数
 */
int isPrime(int x, int knownPrimes[], int numberOfKnownPrimes) {
    int ret = 1;
    for (int i = 0; i < numberOfKnownPrimes; i++) {
        if (x % knownPrimes[i] == 0) {
            ret = 0;
            break;
        }
    }
    return ret;
}
