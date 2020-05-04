/**
 * 实验8-2-9 长整数转化成16进制字符串 (15分)
 *
 * 本题要求实现一个将长整数转化成16进制字符串的简单函数。
 *
 * 函数接口定义：
 * void f( long int x, char *p );
 *
 * 其中x是待转化的十进制长整数，p指向某个字符数组的首元素。函数f的功能是把转换所得的16进制字符串写入p所指向的数组。16进制的A~F为大写字母。
 *
 * 裁判测试程序样例：
 * #include <stdio.h>
 * #define MAXN 10
 *
 * void f( long int x, char *p );
 *
 * int main()
 * {
 *      long int x;
 *      char s[MAXN] = "";
 *
 *      scanf("%ld", &x);
 *      f(x, s);
 *      printf("%s\n", s);
 *
 *      return 0;
 * }
 *
 * 输入样例1：
 * 123456789
 *
 * 输出样例1：
 * 75BCD15
 *
 * 输入样例2：
 * -125
 *
 * 输出样例2：
 * -7D
 *
 * @Author: Wang An
 * @Date: 5/4/2020 9:13 PM
 */
#include <stdio.h>

#define MAXN 10

void f(long int x, char *p);

int main() {
    long int x;
    char s[MAXN] = "";

    scanf("%ld", &x);
    f(x, s);
    printf("%s\n", s);

    return 0;
}

void f(long int x, char *p) {
    int rem = 0, isNegative = 0;
    if (x < 0) {
        isNegative = 1;
        x *= -1;
    }
    char hex[MAXN];
    int cnt = 0;
    do {
        rem = x % 16;
        char t = '\0';
        if (rem >= 0 && rem <= 9) {
            t = '0' + rem;
        } else if (rem == 10) {
            t = 'A';
        } else if (rem == 11) {
            t = 'B';
        } else if (rem == 12) {
            t = 'C';
        } else if (rem == 13) {
            t = 'D';
        } else if (rem == 14) {
            t = 'E';
        } else if (rem == 15) {
            t = 'F';
        }
        hex[cnt++] = t;
        x /= 16;
    } while (x != 0);

    char *t = p;
    if (isNegative) {
        *t++ = '-';
    }
    for (int i = 0; i < cnt; i++) {
        *t++ = hex[cnt - 1 - i];
    }
}