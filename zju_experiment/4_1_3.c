/**
 * 找出最小值
 *
 * 本题要求编写程序，找出给定一系列整数中的最小值。
 *
 * 输入格式：
 * 输入在一行中首先给出一个正整数n，之后是n个整数，其间以空格分隔。
 *
 * 输出格式：
 * 在一行中按照“min = 最小值”的格式输出n个整数中的最小值。
 *
 * 输入样例：
 * 4 -2 -123 100 0
 *
 * 输出样例：
 * min = -123
 *
 * @Author: Wang An
 * @Date: 4/30/2020 11:49 AM
 */
#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);
    int num = 0;
    int min = ~(unsigned int) 0 / 2;
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        min = min < num ? min : num;
    }
    printf("min = %d", min);

    return 0;
}