/**
 * 实验8-2-7 字符串的连接 (15分)
 *
 * 本题要求实现一个函数，将两个字符串连接起来。
 *
 * 函数接口定义：
 * char *str_cat( char *s, char *t );
 *
 * 函数str_cat应将字符串t复制到字符串s的末端，并且返回字符串s的首地址。
 *
 * 裁判测试程序样例：
 * #include <stdio.h>
 * #include <string.h>
 *
 * #define MAXS 10
 *
 * char *str_cat( char *s, char *t );
 *
 * int main()
 * {
 *      char *p;
 *      char str1[MAXS+MAXS] = {'\0'}, str2[MAXS] = {'\0'};
 *
 *      scanf("%s%s", str1, str2);
 *      p = str_cat(str1, str2);
 *      printf("%s\n%s\n", p, str1);
 *
 *      return 0;
 * }
 *
 * 输入样例：
 * abc
 * def
 *
 * 输出样例：
 * abcdef
 * abcdef
 *
 * @Author: Wang An
 * @Date: 5/4/2020 9:08 PM
 */
#include <stdio.h>
#include <string.h>

#define MAXS 10

char *str_cat(char *p, char *t);

int main() {
    char *p;
    char str1[MAXS + MAXS] = {'\0'}, str2[MAXS] = {'\0'};

    scanf("%s%s", str1, str2);
    p = str_cat(str1, str2);
    printf("%s\n%s\n", p, str1);

    return 0;
}

char *str_cat(char *s, char *t) {
    char *p = s;
    while (*p) {
        p++;
    }
    while (*t) {
        *p++ = *t++;
    }

    *p = *t;

    return s;
}