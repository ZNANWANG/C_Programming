/**
 * 测试数组越界导致的覆盖问题，例如，a bcdefgh
 *
 * @Author: Wang An
 * @Date: 5/4/2020 8:46 AM
 */
#include <stdio.h>

int main(int argc, const char *argv[]) {
    char c;
    scanf("%c", &c);
    printf("c = %c\n", c); // c = a

    char t[4];
    scanf("%s", t);
    printf("t = %s\n", t); // t = bcdefgh

    printf("c = %c\n", c); // c = f， 因为在栈里面相邻排放c和t，当t中字符越界之后，超出的字符会覆盖c。

    return 0;
}