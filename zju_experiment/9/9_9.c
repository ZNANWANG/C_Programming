/**
 * 实验9-9 有理数比较 (10分)
 *
 * 本题要求编写程序，比较两个有理数的大小。
 *
 * 输入格式：
 * 输入在一行中按照“a1/b1 a2/b2”的格式给出两个分数形式的有理数，其中分子和分母全是整形范围内的正整数。
 *
 * 输出格式：
 * 在一行中按照“a1/b1 关系符 a2/b2”的格式输出两个有理数的关系。其中“>”表示“大于”，“<”表示“小于”，“=”表示“等于”。
 *
 * 输入样例1：
 * 1/2 3/4
 *
 * 输出样例1：
 * 1/2 < 3/4
 *
 * 输入样例2：
 * 6/8 3/4
 *
 * 输出样例2：
 * 6/8 = 3/4
 *
 * @Author: Wang An
 * @Date: 5/5/2020 6:08 PM
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[]) {
    double a1 = 0, b1 = 0, a2 = 0, b2 = 0;
    scanf("%lf/%lf %lf/%lf", &a1, &b1, &a2, &b2);
    double c1 = a1 / b1;
    double c2 = a2 / b2;
    if (c1 == c2) {
        printf("%.0lf/%.0lf = %.0lf/%.0lf\n", a1, b1, a2, b2);
    } else if (c1 > c2) {
        printf("%.0lf/%.0lf > %.0lf/%.0lf\n", a1, b1, a2, b2);
    } else {
        printf("%.0lf/%.0lf < %.0lf/%.0lf\n", a1, b1, a2, b2);
    }

    return 0;
}