/**
 * 字符串测试
 *
 * @Author: Wang An
 * @Date: 4/29/2020 12:44 AM
 */
#include <stdio.h>

int main() {
    int a[] = {5, 15, 34, 54, 14, 2, 52, 72};
    int *p = &a[1];
    printf("%d\n", *p);
    printf("%d\n", a[1]);

    char c;
    printf("Please input a character:");
    scanf("%d", &c);
    printf("%c\n", c);

    // 把前面的换行符读掉
    scanf("%c", &c);
    printf("Please input a character:");
    scanf("%c", &c);
    printf("%d\n", c);

    char line[] = "hello";
    printf("The size of line is %d\n", sizeof(line) / sizeof(line[0])); // 字符串结尾是0或者\0
    for (int i = 0; i < sizeof(line) / sizeof(line[0]); i++) {
        printf("i = %d\t, line[%d] = %d\n", i, i, line[i]); // 字符串最后一位是\0(也就是0)
    }
    printf("\n");
}