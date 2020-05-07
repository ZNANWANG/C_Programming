/**
 * 判断一个整数是否是素数
 *
 * @Author: Wang An
 * @Date: 4/26/2020 6:00 PM
 */
#include <stdio.h>
#include <math.h>

int isPrime2(int number); //函数原型声明
int isPrime1(int number);

int main() {
    printf("Please input a number: \n");
    int number;
    scanf("%d", &number);
    int isPrime = isPrime2(number);

    if (isPrime == 1) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }
    return 0;
}

int isPrime2(int number) {
    int isPrime = 1;

    if (number < 3 == 1) {
        isPrime = number > 1;
        return isPrime;
    }

    int index = 2;
    while (index <= sqrt(number)) {
        if (number % index == 0) {
            isPrime = 0;
            break;
        }
        index++;
    }

    return isPrime;
}

int isPrime1(int number) {
    int isPrime = 1;

    if (number < 2) {
        isPrime = 0;
        return isPrime;
    }

    if (number % 2 == 0 && number != 2) {
        isPrime = 0;
        return isPrime;
    }

    for (int i = 3; i <= sqrt(number); i += 2) {
        if (number % i == 0) {
            isPrime = 0;
            break;
        }
    }
    return isPrime;
}