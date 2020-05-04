/**
 * getchar()方法读取字符
 *
 * @Author: Wang An
 * @Date: 5/4/2020 9:56 AM
 */
#include <stdio.h>
#include <string.h>

int main(int argc, const char *argv[]) {
    char arr[4] = {1, 1, 1, 1};
    int idx = 0;
    char c;
    while ((c = getchar()) != '\n') {
        arr[idx++] = c;
    }

    for (int i = 0; i < 4; i++) {
        printf("arr[%d] = %d\t", i, arr[i]);
    }
    printf("\n");
    // 因为末尾没有填充'\0'，所以长度不确定，有可能超出数组范围，好的应对方法是初始化数组的所有元素为0。
    printf("strlen(arr) = %d\n", strlen(arr));
}