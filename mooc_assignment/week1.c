/**
 * 字符串比对（10分）
 *
 * 题目内容：
 *
 * 题目说起来很简单，你会读到两个字符串，每个字符串占据一行，每个字符串的长度均小于10000字符，而且第一个字符串的长度小于第二个字符串的。你的程序
 * 要找出第一个字符串在第二个字符串中出现的位置，输出这些位置，如果找不到，则输出-1。
 *
 * 注意，第一个字符的位置是0。
 *
 * 注意，第一个字符串在第二个字符串中的位置可能不止一处。
 *
 * 注意，字符串中可能含有空格。
 *
 * 注意，两个字符串的长度一定大于0。
 *
 * 输入格式:
 * 两个字符串，一行一个。
 *
 * 输出格式：
 * 第一个字符串在第二个字符串中出现的位置，按照从小到到的顺序排列，每个数字后面有一个空格。
 * 如果在第二个字符串中找不到第一个字符串，则输出-1。
 *
 * 输入样例：
 * abba
 * ababbba abbabbabbabbaacc
 *
 * 输出样例：
 * 8 11 14 17
 *
 * @Author: Wang An
 * @Date: 5/1/2020 4:25 PM
 */
#include <stdio.h>
#include <string.h>

int main(int argc, const char *argv[]) {
    char str1[10000];
    char str2[10000];
    scanf("%[^\n]%*c%[^\n]%*c", str1, str2);
    printf("%s\n%s\n", str1, str2);
    char *p = str2;
    int cnt = 0;
    while (*p) {
        p = strstr(p, str1);
        if (p >= str2) {
            cnt++;
            printf("%d ", p++ - str2);
        } else {
            break;
        }
    }
    if (cnt == 0) {
        printf("\n-1\n");
    }

    return 0;
}