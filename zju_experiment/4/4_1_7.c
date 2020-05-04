/**
 * 实验4-1-7 特殊a串数列求和 (20分)
 *
 * 给定两个均不超过9的正整数a和n，要求编写程序求a+aa+aaa++⋯+aa⋯a（n个a）之和。
 *
 * 输入格式：
 * 输入在一行中给出不超过9的正整数a和n。
 *
 * 输出格式：
 * 在一行中按照“s = 对应的和”的格式输出。
 *
 * 输入样例：
 * 2 3
 *
 * 输出样例：
 * s = 246
 *
 * 注：246 = 2 + 22 + 222
 *
 * @Author: Wang An
 * @Date: 4/30/2020 12:35 PM
 */
#include <stdio.h>

int main() {
    int a = 0, n = 0;
    scanf("%d %d", &a, &n);
    int sum = 0;
    int num = 0;
    for (int i = 1; i <= n; i++) {
        num = num * 10 + a;
        sum += num;
    }
    printf("s = %d\n", sum);
    return 0;
}