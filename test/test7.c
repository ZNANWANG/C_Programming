/**
 * 测试空while循环
 *
 * @Author: Wang An
 * @Date: 5/2/2020 10:47 AM
 */
#include <stdio.h>
#include <string.h>

int main(int argc, const char *argv[]) {
    int a[] = {1, 2, 3, 4, 5};
    int b[] = {6, 7, 0, 8, 9};
    int idx1 = 0, idx2 = 0;
    while (a[idx1++] = b[idx2++]);

    for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++) {
        printf("a[%d] = %d\n", i, a[i]);
    }

    printf("%lld\n", sizeof(a) / sizeof(a[0]));

    return 0;
}