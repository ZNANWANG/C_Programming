/**
 * 测试用strcmp()比较字符数组和常量字符串
 *
 * @Author: Wang An
 * @Date: 5/6/2020 12:04 AM
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[]) {
    char *str = (char *) malloc(10 * sizeof(char));
    scanf("%s", str);
    if (strcmp(str, "#") == 0) {
        printf("Equal!");
    } else {
        printf("Not equal!");
    }

    return 0;
}