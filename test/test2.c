/**
 * printf打印小细节
 *
 * @Author: Wang An
 * @Date: 4/30/2020 10:59 AM
 */
#include <stdio.h>d

int main() {
    int a = 0;
    scanf("%d", &a);
    int b = a * 99.0;
    double c = a * 99.0;
    printf("b = %d, c = %lf\n", b, c);
    // 注意用%lf打印int数会显示0.000000，用%d打印double数会显示0，这都是因为类型不匹配。
    printf("b = %lf, c = %dn", b, c);

    return 0;
}