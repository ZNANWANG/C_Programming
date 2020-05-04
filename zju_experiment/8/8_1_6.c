/**
 * 实验8-1-6 函数实现字符串逆序 (15分)
 *
 * 本题要求实现一个字符串逆序的简单函数。
 *
 * 函数接口定义：
 * void f( char *p );
 *
 * 函数f对p指向的字符串进行逆序操作。要求函数f中不能定义任何数组，不能调用任何字符串处理函数。
 *
 * 裁判测试程序样例：
 * #include <stdio.h>
 * #define MAXS 20
 *
 * void f( char *p );
 * void ReadString( char *s ); // 由裁判实现，略去不表
 *
 * int main()
 * {
 *      char s[MAXS];
 *
 *      ReadString(s);
 *      f(s);
 *      printf("%s\n", s);
 *
 *      return 0;
 * }
 *
 * 输入样例：
 * Hello World!
 *
 * 输出样例：
 * !dlroW olleH
 *
 * @Author: Wang An
 * @Date: 5/4/2020 1:03 PM
 */
#include <stdio.h>

#define MAXS 20

void f(char *p);

void ReadString(char *s); /* 由裁判实现，略去不表 */

int main() {
    char s[MAXS];

    ReadString(s);
    f(s);
    printf("%s\n", s);

    return 0;
}

void ReadString(char *s) {
    scanf("%[^\n]", s);
}


/**
 * 定义了数组，不符合题目要求。
 * @param p 数组指针
 */
void f1(char *p) {
    char *q = p;
    char copy[MAXS];
    int cnt = 0;
    while (*q) {
        copy[cnt++] = *q++;
    }

    for (int i = cnt - 1; i >= 0; i--) {
        *p++ = copy[i];
    }
}

void f(char *p) {
    char *q = p;
    int cnt = 0;
    while (*q) {
        q++;
        cnt++;
    }

    // 注意不能写成i <= cnt/2;
    for (int i = 0; i < cnt / 2; i++) {
        char *m = p + i;
        char *n = p + cnt - 1 - i;
        int tmp = *m;
        *m = *n;
        *n = tmp;
    }
}