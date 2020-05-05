/**
 * 实验11-1-9 藏尾诗 (20分)
 * 本题要求编写一个解密藏尾诗的程序。
 *
 * 输入格式：
 * 输入为一首中文藏尾诗，一共四句。每句一行，但句子不一定是等长的，最短一个汉字，最长九个汉字。注意：一个汉字占两个字节。
 *
 * 输出格式：
 * 取出每句的最后一个汉字并连接在一起形成一个字符串并输出。同时在末尾输入一个换行符。
 *
 * 输入样例：
 * 悠悠田园风
 * 然而心难平
 * 兰花轻涌浪
 * 兰香愈幽静
 *
 * 输出样例：
 * 风平浪静
 *
 * @Author: Wang An
 * @Date: 5/6/2020 12:25 AM
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[]) {
    char *poetry = (char *) malloc(19 * sizeof(char));
    for (int i = 0; i < 4; i++) {
        scanf("%s", poetry);
        int len = strlen(poetry);
        printf("%s", poetry + len - 2);
    }
    printf("\n");

    return 0;
}