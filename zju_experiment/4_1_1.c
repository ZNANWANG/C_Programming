/**
 * 实验4-1-1 最大公约数和最小公倍数 (15分)
 *
 * 本题要求两个给定正整数的最大公约数和最小公倍数。
 *
 * 输入格式:
 * 输入在一行中给出两个正整数M和N（≤1000）。
 *
 * 输出格式:
 * 在一行中顺序输出M和N的最大公约数和最小公倍数，两数字间以1空格分隔。
 *
 * 输入样例:
 * 511 292
 *
 * 输出样例:
 * 73 2044
 *
 * 鸣谢安阳师范学院段晓云老师和软件工程五班李富龙同学补充测试数据！
 *
 * @Author: Wang An
 * @Date: 4/30/2020 11:05 AM
 */
#include <stdio.h>
#include <math.h>

int findGreatestCommonDivisor(int m, int n);

int findGreatestCommonDivisor1(int m, int n);

int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    int gcd = findGreatestCommonDivisor1(m, n);
    int lcm = m * n / gcd; // lcm —— least/lowest common multiple
    printf("%d %d", gcd, lcm);

    return 0;
}

int findGreatestCommonDivisor(int m, int n) {
    int gcd = 0;
    int min = sqrt(m) < sqrt(n) ? sqrt(m) : sqrt(n);

    for (int i = 1; i <= min; i++) {
        if (m % i == 0 && n % i == 0) {
            int divisorM = m / i;
            int divisorN = n / i;
            gcd = gcd > i ? gcd : i;
            if (m % divisorM == 0 && n % divisorM == 0) {
                gcd = gcd > divisorM ? gcd : divisorM;
            }
            if (m % divisorN == 0 && n % divisorN == 0) {
                gcd = gcd > divisorN ? gcd : divisorN;
            }
        }
    }
    return gcd;
}

/**
 * 优化版计算最大公倍数
 * @param m int数字一
 * @param n int数字二
 * @return 最大公倍数
 */
int findGreatestCommonDivisor1(int m, int n) {
    int gcd = 0;
    int min = m < n ? m : n;

    for (int i = 1; i <= min; i++) {
        if (m % i == 0 && n % i == 0) {
            gcd = i;
        }
    }
    return gcd;
}