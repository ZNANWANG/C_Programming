/**
 * 实验2-4-4 求阶乘序列前N项和 (15分)
 *
 * 本题要求编写程序，计算序列 1!+2!+3!+⋯ 的前N项之和。
 *
 * 输入格式:
 * 输入在一行中给出一个不超过12的正整数N
 *
 * 输出格式:
 * 在一行中输出整数结果。
 *
 * 输入样例:
 * 5
 *
 * 输出样例:
 * 153
 *
 * @Author: Wang An
 * @Date: 4/29/2020 11:11 PM
 */
#include <stdio.h>

int getSum(int n);

int getSum1(int n);

int getFactorial(int n);

int main() {
    int n = 0;
    scanf("%d", &n);
    int sum = getSum1(n);
    printf("%d\n", sum);

    return 0;
}

int getSum(int n) {
    int sum = 0;
    int factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
        sum += factorial;
    }
    return sum;
}

int getSum1(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += getFactorial(i);
    }
    return sum;
}

int getFactorial(int n) {
    int factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    return factorial;
}
