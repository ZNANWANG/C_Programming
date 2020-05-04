/**
 * 实验7-3-6 字符串转换成十进制整数 (15分)
 *
 * 输入一个以#结束的字符串，本题要求滤去所有的非十六进制字符（不分大小写），组成一个新的表示十六进制数字的字符串，然后将其转换为十进制数后输出。
 * 如果在第一个十六进制字符之前存在字符“-”，则代表该数是负数。
 *
 * 输入格式：
 * 输入在一行中给出一个以#结束的非空字符串。
 *
 * 输出格式：
 * 在一行中输出转换后的十进制数。题目保证输出在长整型范围内。
 *
 * 输入样例：
 * +-P-xf4+-1!#
 *
 * 输出样例：
 * -3905
 *
 * @Author: Wang An
 * @Date: 5/4/2020 10:20 AM
 */
#include <stdio.h>

int main(int argc, const char *argv[]) {
    int isNegative = 0;
    char c;
    char arr[10];
    int cnt = 0;
    while ((c = getchar()) != '#') {
        if (c == '-' && cnt == 0) {
            isNegative = 1;
        } else if (c >= '0' && c <= '9') {
            arr[cnt++] = c;
        } else if (c >= 'A' && c <= 'F') {
            arr[cnt++] = c;
        } else if (c >= 'a' && c <= 'f') {
            arr[cnt++] = c;
        }
    }

    int t = 1, sum = 0;
    for (int i = cnt - 1; i >= 0; i--) {
//        printf("arr[%d] = %c\n", i, arr[i]);
        int temp = 0;
        if (arr[i] >= '0' && arr[i] <= '9') { // 如果在第一个十六进制字符之前存在字符“-”，则代表该数是负数。
            temp = arr[i] - '0';
        } else if (arr[i] == 'A' || arr[i] == 'a') {
            temp = 10;
        } else if (arr[i] == 'B' || arr[i] == 'b') {
            temp = 11;
        } else if (arr[i] == 'C' || arr[i] == 'c') {
            temp = 12;
        } else if (arr[i] == 'D' || arr[i] == 'd') {
            temp = 13;
        } else if (arr[i] == 'E' || arr[i] == 'e') {
            temp = 14;
        } else if (arr[i] == 'F' || arr[i] == 'f') {
            temp = 15;
        }
        sum += temp * t;
        t *= 16;
    }
    if (isNegative && sum > 0) { // 防止输出-0
        sum *= -1;
    }
    printf("%d", sum);

    return 0;
}