/**
 * C语言自动实现类型转换，千万注意！！！
 *
 * @Author: Wang An
 * @Date: 4/27/2020 12:47 PM
 */
#include <stdio.h>

void cheer(int num);

int main() {
    int a[10];
    cheer(a);
    return 0;
}

void cheer(int num) {
    printf("%d\n", num); //自动类型转换
}
