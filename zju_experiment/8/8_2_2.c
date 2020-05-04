/**
 * 实验8-2-2 找最长的字符串 (15分)
 *
 * 本题要求编写程序，针对输入的N个字符串，输出其中最长的字符串。
 *
 * 输入格式：
 * 输入第一行给出正整数N；随后N行，每行给出一个长度小于80的非空字符串，其中不会出现换行符，空格，制表符。
 *
 * 输出格式：
 * 在一行中用以下格式输出最长的字符串：
 *
 * The longest is: 最长的字符串
 *
 * 如果字符串的长度相同，则输出先输入的字符串。
 *
 * 输入样例：
 * 5
 * li
 * wang
 * zhang
 * jin
 * xiang
 *
 * 输出样例：
 * The longest is: zhang
 *
 * @Author: Wang An
 * @Date: 5/4/2020 10:04 PM
 */
#include <stdio.h>
#include <stdlib.h>

int mylen(char *p);

void mycpy(char *dst, char *src);

int main(int argc, const char *argv[]) {
    int N = 0;
    scanf("%d", &N);
    char *p = (char *) malloc(80 * sizeof(char));
    scanf("%s", p);
    char *longest = (char *) malloc(80 * sizeof(char));
    mycpy(longest, p);

    for (int i = 1; i < N; i++) {
        scanf("%s", p);
        if (mylen(p) > mylen(longest)) {
            mycpy(longest, p);
        }
    }

    printf("The longest is: %s\n", longest);

    return 0;
}

void mycpy(char *dst, char *src) {
    char *p = dst;
    while (*src) {
        *p++ = *src++;
    }
    *p = *src;
}

int mylen(char *p) {
    char *q = p;
    while (*q) {
        q++;
    }
    return q - p;
}
