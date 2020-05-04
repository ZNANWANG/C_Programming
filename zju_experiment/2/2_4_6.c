/**
 * 实验2-4-6 求幂之和 (15分)
 *
 * 本题要求编写程序，计算sum=2^1​​ +2^2 +2^​3 +⋯+2^n。可以调用pow函数求幂。
 *
 * 输入格式:
 * 输入在一行中给出正整数n（≤10）。
 *
 * 输出格式:
 * 按照格式“result = 计算结果”输出。
 *
 * 输入样例:
 * 5
 *
 * 输出样例:
 * result = 62
 *
 * @Author: Wang An
 * @Date: 4/29/2020 11:22 PM
 */
#include <stdio.h>
#include <math.h>

int getResult(int n);

int main() {
    int n = 0;
    scanf("%d", &n);
    int ret = getResult(n);
    printf("result = %d\n", ret);
    return 0;
}

int getResult(int n) {
    int ret = 0;
    for (int i = 1; i <= n; i++) {
        ret += pow(2, i);
    }
    return ret;
}
