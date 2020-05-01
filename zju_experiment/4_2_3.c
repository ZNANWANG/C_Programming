/**
 * 验证”哥德巴赫猜想“
 *
 * 数学领域著名的“哥德巴赫猜想”的大致意思是：任何一个大于2的偶数总能表示为两个素数之和。比如：24=5+19，其中5和19都是素数。本实验的任务是设计一
 * 个程序，验证20亿以内的偶数都可以分解成两个素数之和。
 *
 * 输入格式：
 * 输入在一行中给出一个(2, 2 000 000 000]范围内的偶数N。
 *
 * 输出格式：
 * 在一行中按照格式“N = p + q”输出N的素数分解，其中p ≤ q均为素数。又因为这样的分解不唯一（例如24还可以分解为7+17），要求必须输出所有解中p最
 * 小的解。
 *
 * 输入样例：
 * 24
 *
 * 输出样例：
 * 24 = 5 + 19
 *
 * @Author: Wang An
 * @Date: 5/1/2020 8:07 AM
 */
#include <stdio.h>
#include <math.h>

int isPrime(long num);

int main() {
    long num = 0;
    scanf("%ld", &num);
    for (long i = 2; i <= num; i++) {
        if (isPrime(i) && isPrime(num - i)) {
            printf("%ld = %ld + %ld", num, i, num - i);
            break;
        }
    }

    return 0;
}

int isPrime(long num) {
    int ret = 1;
    if (num < 3) {
        return num > 1;
    } else if (num % 2 == 0) {
        return 0;
    }

    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) {
            ret = 0;
            break;
        }
    }
    return ret;
}
