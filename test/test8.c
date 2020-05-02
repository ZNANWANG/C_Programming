/**
 * 指针探秘
 *
 * @Author: Wang An
 * @Date: 5/2/2020 12:19 PM
 */
#include <stdio.h>

int main(int argc, const char *argv[]) {
    char a = 'a';
    printf("%p\n", &a);
    char *c = 0;
//    *c = 9; // 0地址只读不能修改
    printf("%p\n", c);
    printf("%c\n", c);
    printf("%p\n", &c);
    scanf("%c", &c);
    printf("%c\n", c);
    printf("%p\n", c);
    printf("%p\n", &c);

    return 0;
}