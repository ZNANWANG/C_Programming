/**
 * 实验11-1-7 藏头诗 (15分)
 *
 * 本题要求编写一个解密藏头诗的程序。
 *
 * 输入格式：
 * 输入为一首中文藏头诗，一共四句，每句一行。注意：一个汉字占两个字节。
 *
 * 输出格式：
 * 取出每句的第一个汉字并连接在一起形成一个字符串并输出。同时在末尾输入一个换行符。
 *
 * 输入样例：
 * 一叶轻舟向东流
 * 帆稍轻握杨柳手
 * 风纤碧波微起舞
 * 顺水任从雅客流
 *
 * 输出样例：
 * 一帆风顺
 *
 * @Author: Wang An
 * @Date: 5/6/2020 12:19 AM
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[]) {
    char *str = (char *) malloc(15 * sizeof(char));
    for (int i = 0; i < 4; i++) {
        scanf("%2s", str);
        printf("%s", str);
        scanf("%s", str);
    }
    printf("\n");

    return 0;
}