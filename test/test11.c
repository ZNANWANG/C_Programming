/**
 * 根据用户输入建立素数表（可参照prac24.c)
 *
 * 思路：
 * 不能被前n-1个素数整除是一个数字是第n个素数的充分必要条件。
 *
 * @Author: Wang An
 * @Date: 5/2/2020 11:32 PM
 */
#include <stdio.h>

int main(int argc, const char *argv[]) {
    int n = 0;
    scanf("%d", &n);
    int primes[n];
    primes[0] = 2;
    int count = 1;
    int num = 3;
    while (count < n) {
        int isPrime = 1;
        for (int j = 0; j < count; j++) {
            if (num % primes[j] == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            primes[count++] = num;
        }
        num++;
    }

    for (int i = 0; i < n; i++) {
        printf("%d\t", primes[i]);
    }

    return 0;
}