/**
 * 实验7-3-3 统计大写辅音字母 (15分)
 *
 * 英文辅音字母是除A、E、I、O、U以外的字母。本题要求编写程序，统计给定字符串中大写辅音字母的个数。
 *
 * 输入格式：
 * 输入在一行中给出一个不超过80个字符、并以回车结束的字符串。
 *
 * 输出格式：
 * 输出在一行中给出字符串中大写辅音字母的个数。
 *
 * 输入样例：
 * HELLO World!
 *
 * 输出样例：
 * 4
 *
 * @Author: Wang An
 * @Date: 5/4/2020 10:02 AM
 */
#include <stdio.h>

int main(int argc, const char *argv[]) {
    char c;
    int cnt = 0;
    while ((c = getchar()) != '\n') {
        if (c >= 'A' && c <= 'Z') {
            if (c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U') {
                cnt++;
            }
        }
    }
    printf("%d\n", cnt);

    return 0;
}