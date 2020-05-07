/**
 * strchr()
 *
 * @Author: Wang An
 * @Date: 5/2/2020 12:21 AM
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, const char *argv[]) {
    char a[] = "hello";
    char *b = strchr(a, 'l');

    // 复制前面部分的字符串
    char d = *b; // 保存b指针位置上的字符，下一步要替换成'\0'，b指针后面的字符实际上没动。
    *b = '\0';
    char *e = (char *) malloc(strlen(a) + 1);
    strcpy(e, a);
    printf("%s\n", e);
    // 恢复b指针位置上的字符
    *b = d;
    printf("%s\n", b);
    free(e);

    // 复制后面部分的字符串
    char *c = (char *) malloc(strlen(b) + 1);
    strcpy(c, b);
    printf("%s\n", c);
    free(c);

    // 查找第二个‘l'
    b = strchr(b + 1, 'l');
    printf("%s\n", b);
    printf("%lld\n", b - a);

    return 0;
}