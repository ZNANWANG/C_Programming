/**
 * 实验10-10 递归实现顺序输出整数 (15分)
 *
 * 本题要求实现一个函数，对一个整数进行按位顺序输出。
 *
 * 函数接口定义：
 * void printdigits( int n );
 *
 * 函数printdigits应将n的每一位数字从高位到低位顺序打印出来，每位数字占一行。
 *
 * 裁判测试程序样例：
 * #include <stdio.h>
 *
 * void printdigits( int n );
 *
 * int main()
 * {
 *      int n;
 *
 *      scanf("%d", &n);
 *      printdigits(n);
 *
 *      return 0;
 * }
 *
 * 输入样例：
 * 12345
 *
 * 输出样例：
 * 1
 * 2
 * 3
 * 4
 * 5
 *
 * @Author: Wang An
 * @Date: 5/5/2020 10:06 PM
 */
#include <stdio.h>

void printdigits(int n);

int main() {
    int n;

    scanf("%d", &n);
    printdigits(n);

    return 0;
}

void printdigits(int n) {
    if (n >= 0 && n < 10) {
        printf("%d\n", n);
    } else if (n >= 10) {
        printdigits(n / 10);
        printf("%d\n", n % 10);
    }
}