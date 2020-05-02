/**
 * 诡异的程序
 *
 * @Author: Wang An
 * @Date: 5/2/2020 5:29 PM
 */
#include <stdio.h>

int main(int argc, const char *argv[]) {
    char c;
    int cnt = 0;
    do {
        if (cnt % 2 == 0) {
            scanf("%c\n", &c);
            printf("1%c\t", c);
        } else {
            scanf("%d\n", &c);
            printf("2%d\t", c);
        }
        printf("cnt = %d\n", cnt++);
    } while (c != '=');
}