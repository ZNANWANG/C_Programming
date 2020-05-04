/**
 * 实验7-3-5 输出大写英文字母 (15分)
 *
 * 本题要求编写程序，顺序输出给定字符串中所出现过的大写英文字母，每个字母只输出一遍；若无大写英文字母则输出“Not Found”。
 *
 * 输入格式：
 * 输入为一个以回车结束的字符串（少于80个字符）。
 *
 * 输出格式：
 * 按照输入的顺序在一行中输出所出现过的大写英文字母，每个字母只输出一遍。若无大写英文字母则输出“Not Found”。
 *
 * 输入样例1：
 * FONTNAME and FILENAME
 *
 * 输出样例1：
 * FONTAMEIL
 *
 * 输入样例2：
 * fontname and filrname
 *
 * 输出样例2：
 * Not Found
 *
 * @Author: Wang An
 * @Date: 5/4/2020 10:12 AM
 */
#include <stdio.h>

int isUnique(int unique[], int cnt, char c);

int main(int argc, const char *argv[]) {
    int unique[80] = {};
    char c;
    int uniqueCnt = 0, upperCnt = 0;
    while ((c = getchar()) != '\n') {
        if (c >= 'A' && c <= 'Z' && isUnique(unique, uniqueCnt, c)) {
            unique[uniqueCnt++] = c;
            printf("%c", c);
            upperCnt++;
        }
    }
    if (upperCnt == 0) {
        printf("Not Found");
    }
    printf("\n");

    return 0;
}

int isUnique(int unique[], int cnt, char c) {
    int ret = 1;
    for (int i = 0; i < cnt; i++) {
        if (c == unique[i]) {
            ret = 0;
            break;
        }
    }
    return ret;
}
