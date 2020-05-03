/**
 * 实验7-1-8 输出数组元素 (15分)
 *
 * 本题要求编写程序，对顺序读入的n个整数，顺次计算后项减前项之差，并按每行三个元素的格式输出结果。
 *
 * 输入格式：
 * 输入的第一行给出正整数n（1<n≤10）。随后一行给出n个整数，其间以空格分隔。
 *
 * 输出格式：
 * 顺次计算后项减前项之差，并按每行三个元素的格式输出结果。数字间空一格，行末不得有多余空格。
 *
 * 输入样例：
 * 10
 * 5 1 7 14 6 36 4 28 50 100
 *
 * 输出样例：
 * -4 6 7
 * -8 30 -32
 * 24 22 50
 *
 * @Author: Wang An
 * @Date: 5/3/2020 9:05 AM
 */
#include <stdio.h>

int main(int argc, const char *argv[]) {
    int n = 0;
    scanf("%d", &n);
    int lat = 0;
    int pre = 0;
    int cnt = 0;
    scanf("%d", &pre);
    for (int i = 1; i < n; i++) {
        scanf("%d", &lat);
        printf("%d", lat - pre);
        cnt++;
        if (cnt % 3 == 0) {
            printf("\n");
        } else {
            if (cnt != n - 1) {
                printf(" ");
            }
        }
        pre = lat;
    }

    return 0;
}