/**
 * 实验8-2-10 IP地址转换 (20分)
 *
 * 一个IP地址是用四个字节（每个字节8个位）的二进制码组成。请将32位二进制码表示的IP地址转换为十进制格式表示的IP地址输出。
 *
 * 输入格式：
 * 输入在一行中给出32位二进制字符串。
 *
 * 输出格式：
 * 在一行中输出十进制格式的IP地址，其由4个十进制数组成（分别对应4个8位的二进制数），中间用“.”分隔开。
 *
 * 输入样例：
 * 11001100100101000001010101110010
 *
 * 输出样例：
 * 204.148.21.114
 *
 * @Author: Wang An
 * @Date: 5/4/2020 11:05 PM
 */
#include <stdio.h>

int binaryToDecimal(int byte[]);

int main(int argc, const char *argv[]) {
    int byte[8] = {};
    char c;
    for (int i = 0; i < 32; i++) {
        scanf("%c", &c);
        byte[i % 8] = c - '0';
        if (i % 8 == 7) {
            int tmp = binaryToDecimal(byte);
            printf("%d", tmp);
            if (i != 31) {
                printf(".");
            }
        }
    }

    return 0;
}

int binaryToDecimal(int byte[]) {
    int ret = 0;
    int t = 1;
    for (int i = 0; i < 8; i++) {
        ret += byte[7 - i] * t;
        t *= 2;
    }
    return ret;
}
