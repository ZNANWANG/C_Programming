/**
 * @Author: Wang An
 * @Date: 4/29/2020 12:18 PM
 */
#include <stdio.h>

int main() {
    int i = 0;
    char *s = "Hello, world!";
    char *s2 = "Hello, world!";
    printf("i\t = %d\n", i);
    printf("&i\t = %p\n", &i);
    printf("s\t = %p\n", s);
    printf("&s\t = %p\n", &s);
    printf("s2\t = %p\n", s2);
    printf("&s2\t = %p\n", &s2);
    printf("s\t is \"%s\"\n", s);
    printf("*s\t = %c\n", *s);
    printf("s[0]\t = %c\n", s[0]);
    printf("&s[0]\t = %p\n", &s[0]);

    // 指针指向的字符串常量是只读的，不可以被修改，所以下面的代码是错的。
//    s[0] = 'B';
//    printf("s[0] = %c\t\n", s[0]);

    // 要想修改字符串的值，必须使用数组定义的字符串，不能使用指针定义的字符串。
    char s3[] = "Hello, world!";
    printf("s3\t = %p\n", s3);
    printf("&s3\t = %p\n", &s3);
    s3[0] = 'B';
    printf("s3[0]\t = %c\n", s3[0]);
    printf("&s3[0]\t = %p\n", &s3[0]);

    // s4是字符数组而不是字符串，字符串必须用\0结尾。
    char s4[] = {'H', 'e', 'l', 'l', 'o', ',', 'w', 'o', 'r', 'l', 'd', '!'};
    printf("The size of s4 is %d.\n", sizeof(s4) / sizeof(s4[0]));
    for (int i = 0; i < sizeof(s4) / sizeof(s4[0]); i++) {
        printf("i = %d,\t s4[%d] = %c\n", i, i, s4[i]);
    }
    printf("\n");

    return 0;
}
