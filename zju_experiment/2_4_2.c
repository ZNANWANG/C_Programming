/**
 * 生成3的乘方表
 *
 * 输入一个非负整数n，生成一张3的乘方表，输出3^0~3^n的值。可调用幂函数计算3的乘方。
 *
 * 输入格式:
 * 输入在一行中给出一个非负整数n。
 *
 * 输出格式:
 * 按照幂的递增顺序输出n+1行，每行格式为“pow(3,i) = 3的i次幂的值”。题目保证输出数据不超过长整型整数的范围。
 *
 * 输入样例:
 * 3
 *
 * 输出样例:
 * pow(3,0) = 1
 * pow(3,1) = 3
 * pow(3,2) = 9
 * pow(3,3) = 27
 *
 * @Author: Wang An
 * @Date: 4/29/2020 11:00 PM
 */
#include <stdio.h>
#include <math.h>

void output(int n);

void output1(int n);

int getPowOfThree(int n);

int main() {
    int n = 0;
    scanf("%d", &n);
    output1(n);
}

void output(int n) {
    for (int i = 0; i <= n; i++) {
        printf("pow(3,%d) = %.0f\n", i, pow(3, i));
    }
}

void output1(int n) {
    for (int i = 0; i <= n; i++) {
        printf("pow(3,%d) = %d\n", i, getPowOfThree(i));
    }
}


int getPowOfThree(int n) {
    int ret = 1;
    for (int i = 0; i < n; i++) {
        ret *= 3;
    }
    return ret;
}