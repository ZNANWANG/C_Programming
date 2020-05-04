/**
 * 实验3-2 计算符号函数的值 (10分)
 *
 * 对于任一整数n，符号函数sign(n)的定义如下：见图3_2.jpg
 *
 * 请编写程序计算该函数对任一输入整数的值。
 *
 * 输入格式:
 * 输入在一行中给出整数n。
 *
 * 输出格式:
 * 在一行中按照格式“sign(n) = 函数值”输出该整数n对应的函数值。
 *
 * 输入样例1:
 * 10
 *
 * 输出样例1:
 * sign(10) = 1
 *
 * 输入样例2:
 * 0
 *
 * 输出样例2:
 * sign(0) = 0
 *
 * 输入样例3:
 * -98
 *
 * 输出样例3:
 * sign(-98) = -1
 *
 * @Author: Wang An
 * @Date: 4/30/2020 9:07 AM
 */
#include <stdio.h>

int sign(int n);

int main() {
    int n = 0;
    scanf("%d", &n);
    int ret = sign(n);
    printf("sign(%d) = %d\n", n, ret);

    return 0;
}

int sign(int n) {
    int ret = 0;
    if (n < 0) {
        ret = -1;
    } else if (n == 0) {
        ret = 0;
    } else {
        ret = 1;
    }
    return ret;
}
