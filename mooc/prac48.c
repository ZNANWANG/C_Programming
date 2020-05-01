/**
 * strchr()
 *
 * @Author: Wang An
 * @Date: 5/2/2020 12:21 AM
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, const char *argv[]){
    char a[] = "hello";
    char *b = strchr(a, 'l');

    // 复制前半部分字符串
    char d = *b;
    *b = '\0';
    char *e = (char*)malloc(strlen(a) + 1);
    strcpy(e, a);
    printf("%s\n", e);
    // 恢复b的指向
    *b = d;
    printf("%s\n", b);
    free(e);

    // 复制后半部分字符串
    char *c = (char*)malloc(strlen(b) + 1);
    strcpy(c, b);
    printf("%s\n", c);
    free(c);

    // 查找第二个‘l'
    b = strchr(b+1,'l');
    printf("%s\n", b);
    printf("%lld\n", b - a);

    return 0;
}