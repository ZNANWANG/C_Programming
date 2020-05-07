/**
 * 顺序打印1到n的值 —— 循环实现和递归实现
 *
 * @Author: Wang An
 * @Date: 5/6/2020 9:20 PM
 */
#include <stdio.h>

void printN1(int n);

void printN2(int n);

int main(int argc, const char *argv[]) {
    int n = 0;
    scanf("%d", &n);
    printN2(n);
}

/**
 * 递归打印时，当n = 100000，程序会因为栈溢出而异常退出。
 * S(n) = c * n
 * @param n 输出的最大整型数字
 */
void printN2(int n) {
    if (n) {
        printN2(n - 1);
        printf("%d\n", n);
    }
}

/**
 * 循环打印时，当n = 100000，程序仍然能够正常输出。
 * @param n 输出的最大整型数字
 */
void printN1(int n) {
    for (int i = 1; i <= n; i++) {
        printf("%d\n", i);
    }
}
