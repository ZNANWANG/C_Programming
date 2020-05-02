/**
 * 复制字符串前面的部分
 *
 * @Author: Wang An
 * @Date: 5/2/2020 8:48 AM
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, const char *argv[]) {
    char a[] = "hello";
    char *p = strchr(a, 'l');
    printf("%p\n", p);
    printf("%s\n", p); // p表示所指向的字符串
    printf("%c\n", *p); // *p表示指针所指位置的单个字符

    printf("%lld\n", a - p);
    printf("%s\n", p - 1);

    char b = *p;
    printf("%c\n", b);
    printf("%p\n", &b);
    *p = '\0';
    printf("%p\n", p);
    printf("%s\n", p);
    char *q = (char *) malloc(strlen(a) + 1);
    printf("%s\n", a);
    strcpy(q, a);
    printf("%s\n", q);
    printf("%p\n", q);
    *p = b;
    printf("%p\n", p);
    printf("%s\n", p);

    return 0;
}