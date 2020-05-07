/**
 * 统计输入数字出现的次数
 *
 * @Author: Wang An
 * @Date: 4/27/2020 8:22 AM
 */
#include <stdio.h>

int main() {
    const int length = 10;
    int count[length];
    //正确的遍历方法
    for (int i = 0; i < length; i++) {
        count[i] = 0;
    }

    printf("Please input a number:\n");
    int number;
    scanf("%d", &number);
    while (number != -1) {
        count[number]++;
        scanf("%d", &number);
    }

    for (int i = 0; i < length; i++) {
        printf("The number of digit \"%d\" is %d.\n", i, count[i]);
    }
    return 0;
}