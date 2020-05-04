/**
 * 实验7-3-2 查找指定字符 (15分)
 *
 * 本题要求编写程序，从给定字符串中查找某指定的字符。
 *
 * 输入格式：
 * 输入的第一行是一个待查找的字符。第二行是一个以回车结束的非空字符串（不超过80个字符）。
 *
 * 输出格式：
 * 如果找到，在一行内按照格式“index = 下标”输出该字符在字符串中所对应的最大下标（下标从0开始）；否则输出"Not Found"。
 *
 * 输入样例1：
 * m
 * programming
 *
 * 输出样例1：
 * index = 7
 *
 * 输入样例2：
 * a
 * 1234
 *
 * 输出样例2：
 * Not Found
 *
 * @Author: Wang An
 * @Date: 5/4/2020 8:11 AM
 */
#include <stdio.h>
#include <string.h>

int main(int argc, const char *argv[]) {
    char tgt;
    scanf("%c", &tgt);
    {
        printf("tgt = %c\n", tgt);
    }
    getchar();

    char str[81]; // 因为scanf()会为字符数组末尾自动填充\0，不多加一的话，数组越界，字符tgt会被覆盖为'\0'。
    scanf("%[^\n]", str);
    getchar();
    {
        printf("str = %s\n", str);
        printf("tgt = %c\n", tgt);
    }

    int idx = -1;

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == tgt) {
            idx = i;
        }
    }

    if (idx == -1) {
        printf("Not Found\n");
    } else {
        printf("index = %d\n", idx);
    }

    return 0;
}