/**
 * 实验7-3-7 字符转换 (15分)
 *
 * 本题要求提取一个字符串中的所有数字字符（'0'……'9'），将其转换为一个整数输出。
 *
 * 输入格式：
 * 输入在一行中给出一个不超过80个字符且以回车结束的字符串。
 *
 * 输出格式：
 * 在一行中输出转换后的整数。题目保证输出不超过长整型范围。
 *
 * 输入样例：
 * free82jeep5
 *
 * 输出样例：
 * 825
 *
 * @Author: Wang An
 * @Date: 5/4/2020 10:45 AM
 */
#include <stdio.h>

int main(int argc, const char *argv[]) {
    char c;
    int arr[80] = {};
    int cnt = 0;
    while ((c = getchar()) != '\n') {
        if (c >= '0' && c <= '9') {
            arr[cnt++] = c - '0';
        }
    }

    int sum = 0, t = 1;
    for (int i = cnt - 1; i >= 0; i--) {
        sum += arr[i] * t;
        t *= 10;
    }
    printf("%d\n", sum);

    return 0;
}