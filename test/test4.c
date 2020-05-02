/**
 * 测试精度
 *
 * @Author: Wang An
 * @Date: 5/1/2020 11:37 AM
 */
#include <stdio.h>

int main() {
    long long b = 479001600;
    printf("%d\n", 479001600 * 13);
    printf("%lld\n", b * 13);
    printf("%lf\n", 479001600 * 13.0);

    return 0;
}