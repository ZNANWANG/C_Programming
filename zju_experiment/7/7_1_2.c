/**
 * 实验7-1-2 求最大值及其下标 (20分)
 *
 * 本题要求编写程序，找出给定的n个数中的最大值及其对应的最小下标（下标从0开始）。
 *
 * 输入格式:
 * 输入在第一行中给出一个正整数n（1<n≤10）。第二行输入n个整数，用空格分开。
 *
 * 输出格式:
 * 在一行中输出最大值及最大值的最小下标，中间用一个空格分开。
 *
 * 输入样例:
 * 6
 * 2 8 10 1 9 10
 *
 * 输出样例:
 * 10 2
 *
 * @Author: Wang An
 * @Date: 5/3/2020 12:06 AM
 */
#include <stdio.h>

int main(int argc, const char *argv[]) {
    int n = 0;
    scanf("%d", &n);
    int array[n];
    int maxIndex = 0, num = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        array[i] = num;
        if (num > array[maxIndex]) {
            maxIndex = i;
        }
    }
    printf("%d %d\n", array[maxIndex], maxIndex);

    return 0;
}