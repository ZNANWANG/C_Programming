/**
 * 构建整数n以内的素数数组
 *
 * @Author: Wang An
 * @Date: 4/28/2020 7:30 PM
 */
#include <stdio.h>

int main() {
    int number;
    printf("Please input a number:\n");
    scanf("%d", &number);
    // 负数直接结束
    if (number < 0) {
        return 0;
    }
    // 初始化数组
    int array[number];
    array[0] = 0;
    array[1] = 0;
    for (int i = 2; i < number; i++) {
        array[i] = 1;
    }
    // 第一步，令x=2；
    // 第二步，将2x、3x、4x……ax<=n标记为非素数；
    // 第三步，接着找下一个小于n的非素数，然后重复第二步。
    for (int index = 2; index <= number; index++) {
        if (array[index] == 1) {
            int k = 2;
            while (k * index <= number) {
                array[k * index] = 0;
                k++;
            }
        }
    }
    // 显示非负数
    for (int i = 0; i < number; i++) {
        if (array[i] == 1) {
            printf("%d\t", i);
        }
    }
    return 0;
}