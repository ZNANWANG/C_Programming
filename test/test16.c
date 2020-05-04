/**
 * 测试读取日期，例如2009/03/02
 *
 * @Author: Wang An
 * @Date: 5/3/2020 8:13 PM
 */
#include <stdio.h>

int main(int argc, const char *argv[]) {
    int n = 0;
    scanf("%d", &n);
    printf("%d\n", n);
    int year = n;
    getchar();
    scanf("%d", &n);
    printf("%d\n", n);
    int month = n;
    getchar();
    scanf("%d", &n);
    printf("%d\n", n);
    int day = n;

    return 0;
}