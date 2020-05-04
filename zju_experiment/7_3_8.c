/**
 * 实验7-3-8 统计字符出现次数 (20分)
 *
 * 本题要求编写程序，统计并输出某给定字符在给定字符串中出现的次数。
 *
 * 输入格式：
 * 输入第一行给出一个以回车结束的字符串（少于80个字符）；第二行输入一个字符。
 *
 * 输出格式：
 * 在一行中输出给定字符在给定字符串中出现的次数。
 *
 * 输入样例：
 * programming is More fun!
 * m
 *
 * 输出样例：
 * 2
 *
 * @Author: Wang An
 * @Date: 5/4/2020 10:51 AM
 */
#include <stdio.h>

int main(int argc, const char *argv[]) {
    char arr[80] = {};
    char c;
    int cnt = 0;
    while ((c = getchar()) != '\n') {
        arr[cnt++] = c;
    }
    c = getchar();

    int ret = 0;
    for (int i = 0; i < cnt; i++) {
        if (c == arr[i]) {
            ret++;
        }
    }
    printf("%d\n", ret);

    return 0;
}