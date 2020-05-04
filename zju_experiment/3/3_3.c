/**
 * 实验3-3 比较大小 (10分)
 *
 * 本题要求将输入的任意3个整数从小到大输出。
 *
 * 输入格式:
 * 输入在一行中给出3个整数，其间以空格分隔。
 *
 * 输出格式:
 * 在一行中将3个整数从小到大输出，其间以“->”相连。
 *
 * 输入样例:
 * 4 2 8
 *
 * 输出样例:
 * 2->4->8
 *
 * @Author: Wang An
 * @Date: 4/30/2020 9:12 AM
 */
#include <stdio.h>

int getMin(int a, int b, int c);

int getMax(int a, int b, int c);

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int min = getMin(a, b, c);
    int max = getMax(a, b, c);
    int mid = 0;
    if (a != max && a != min) {
        mid = a;
    } else if (b != max && b != min) {
        mid = b;
    } else {
        mid = c;
    }
    printf("%d->%d->%d\n", min, mid, max);

    return 0;
}

int getMax(int a, int b, int c) {
    int max = a > b ? a : b;
    max = max > c ? max : c;
    return max;
}

int getMin(int a, int b, int c) {
    int min = a < b ? a : b;
    min = min < c ? min : c;
    return min;
}
