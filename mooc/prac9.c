/**
 * 判断一个整数是否是素数
 *
 * @Author: Wang An
 * @Date: 4/26/2020 6:00 PM
 */
#include <stdio.h>

void isPrime(int number); //函数原型声明

int main() {
    printf("Please input a number: \n");
    int number;
    scanf("%d", &number);
    isPrime(number);
    return 0;
}

void isPrime(int number) {
    int isPrime = 1;

    if (number < 3 == 0) {
        isPrime = 0;
    }

    int index = 2;
    while (index < number) {
        if (number % index == 0) {
            isPrime = 0;
            break;
        }
        index++;
    }


    if (isPrime == 1) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }
}