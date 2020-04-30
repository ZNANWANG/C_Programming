/**
 * 高空坠球
 *
 * 皮球从某给定高度自由落下，触地后反弹到原高度的一半，再落下，再反弹，……，如此反复。问皮球在第n次落地时，在空中一共经过多少距离？第n次反弹的高
 * 度是多少？
 *
 * 输入格式:
 * 输入在一行中给出两个非负整数，分别是皮球的初始高度和n，均在长整型范围内。
 *
 * 输出格式:
 * 在一行中顺序输出皮球第n次落地时在空中经过的距离、以及第n次反弹的高度，其间以一个空格分隔，保留一位小数。题目保证计算结果不超过双精度范围。
 *
 * 输入样例:
 * 33 5
 *
 * 输出样例:
 * 94.9 1.0
 *
 * @Author: Wang An
 * @Date: 4/30/2020 5:47 PM
 */
#include <stdio.h>

int main() {
    long height = 0, n = 0;
    scanf("%ld %ld", &height, &n);
    double distance = 0, bounce = 0;
    if (n > 0) {
        // 添加启动量
        distance = height;
        bounce = height / 2.0;
        for (int i = 1; i < n; i++) {
            distance += 2 * bounce;
            bounce /= 2;
        }
    }
    printf("%.1lf %.1lf", distance, bounce);

    return 0;
}
