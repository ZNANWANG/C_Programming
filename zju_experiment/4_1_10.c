/**
 * 兔子繁殖问题 —— 斐波那契数列
 *
 * 一对兔子，从出生后第3个月起每个月都生一对兔子。小兔子长到第3个月后每个月又生一对兔子。假如兔子都不死，请问第1个月出生的一对兔子，至少需要繁衍
 * 到第几个月时兔子总数才可以达到N对？
 *
 * 输入格式:
 * 输入在一行中给出一个不超过10000的正整数N。
 *
 * 输出格式:
 * 在一行中输出兔子总数达到N最少需要的月数。
 *
 * 输入样例:
 * 30
 *
 * 输出样例:
 * 9
 *
 * @Author: Wang An
 * @Date: 4/30/2020 4:43 PM
 */
#include <stdio.h>

int main() {
    int a = 1;
    int b = 1;
    int c = 1;
    int count = 2;
    int N;
    scanf("%d", &N);
    if (N < 2) {
        count = 1;
    } else {
        while (c < N) {
            c = a + b;
            a = b;
            b = c;
            count++;
        }
    }
    printf("%d\n", count);

    return 0;
}