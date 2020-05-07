/**
 * 数组初始化
 *
 * @Author: Wang An
 * @Date: 4/27/2020 11:49 PM
 */
#include <stdio.h>
#include <string.h>

int main() {
//    const int size = 10;
//    int c[size] = {0};
//    for(int i = 0; i < size; i++){
//        printf("%d\t", c[i]);
//    }
//    printf("\n");

    const int length = 10;
    int b[length];
    memset(b, 0, length * sizeof(b[0]));
    for (int i = 0; i < length; i++) {
        printf("%d\t", b[i]);
    }
    printf("\n");

    int a[10] = {
            [0] = 0, [2] = 4, 5,
    };
    for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++) {
        printf("%d\t", a[i]);
    }
    printf("\n");

    return 0;
}