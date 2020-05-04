/**
 * 实验4-2-6 输出三角形字符阵列 (15分)
 *
 * 本题要求编写程序，输出n行由大写字母A开始构成的三角形字符阵列。
 *
 * 输入格式：
 * 输入在一行中给出一个正整数n（1≤n<7）。
 *
 * 输出格式：
 * 输出n行由大写字母A开始构成的三角形字符阵列。格式见输出样例，其中每个字母后面都有一个空格。
 *
 * 输入样例：
 * 4
 *
 * 输出样例：
 * A B C D
 * E F G
 * H I
 * J
 *
 * @Author: Wang An
 * @Date: 5/1/2020 10:00 AM
 */
#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);
    char first = 'A';
    for (int i = n; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            printf("%c ", first);
            first++;
        }
        printf("\n");
    }

    return 0;
}