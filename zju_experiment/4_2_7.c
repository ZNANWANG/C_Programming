/**
 * 找完数
 *
 * 所谓完数就是该数恰好等于除自身外的因子之和。例如：6=1+2+3，其中1、2、3为6的因子。本题要求编写程序，找出任意两正整数m和n之间的所有完数。
 *
 * 输入格式：
 * 输入在一行中给出2个正整数m和n（1<m≤n≤10000），中间以空格分隔。
 *
 * 输出格式：
 * 逐行输出给定范围内每个完数的因子累加形式的分解式，每个完数占一行，格式为“完数 = 因子1 + 因子2 + ... + 因子k”，其中完数和因子均按递增顺序给
 * 出。若区间内没有完数，则输出“None”。
 *
 * 输入样例：
 * 2 30
 *
 * 输出样例：
 * 6 = 1 + 2 + 3
 * 28 = 1 + 2 + 4 + 7 + 14
 *
 * @Author: Wang An
 * @Date: 5/1/2020 10:05 AM
 */
#include <stdio.h>

int isCompleteNumber(int num);


int main() {
    int m = 0, n = 0;
    scanf("%d %d", &m, &n);
    int count = 0;
    for (int i = m; i <= n; i++) {
        if (isCompleteNumber(i)) {
            count++;
        }
    }
    if (count == 0) {
        printf("None");
    }

    return 0;
}

int isCompleteNumber(int num) {
    int ret = 0;
    int factors[num];
    int count = 0;
    int sum = 0;
    //注意i不可以从0开始，因为num%0会出错，导致程序崩溃，可以尝试输出下面一句：printf("%d\n", 6%0);。
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            factors[count] = i;
            count++;
            sum += i;
        }
    }

    if (sum == num) {
        printf("%d = ", num);
        for (int i = 0; i < count; i++) {
            printf("%d", factors[i]);
            if (i != count - 1) {
                printf(" + ");
            } else {
                printf("\n");
            }
        }
        ret = 1;
    }

    return ret;
}
