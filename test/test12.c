/**
 * 插入排序
 *
 * 将给定的n个整数存入数组中，将数组中的这n个数排序存放，再按顺序输出数组中的元素。
 *
 * @Author: Wang An
 * @Date: 5/3/2020 12:18 AM
 */
#include <stdio.h>

int main(int argc, const char *argv[]) {
    int n = 0;
    scanf("%d", &n);
    int array[n];
    int num = 0, preIndex = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        array[i] = num;
        preIndex = i - 1;
        while (preIndex >= 0 && array[preIndex] > num) {
            array[preIndex + 1] = array[preIndex];
            preIndex--;
        }
        array[preIndex + 1] = num;
    }

    for (int i = 0; i < n; i++) {
        printf("%d", array[i]);
        if (i != n - 1) {
            printf(" ");
        }
    }

    return 0;
}