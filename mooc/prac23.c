/**
 * 在数组中查找整数
 *
 * @Author: Wang An
 * @Date: 4/28/2020 1:30 PM
 */
#include <stdio.h>

int search(int array[], int length, int x);

int main() {
    int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int length = sizeof(array) / sizeof(array[0]);
    int x;
    int ret;
    printf("Please input a number:\n");
    scanf("%d", &x);
    ret = search(array, length, x);
    if (ret == -1) {
        printf("%d在数组中不存在", x);
    } else if (ret != 1) {
        printf("%d在数组中第%d个位置上", x, ret);
    }
    return 0;
}

/**
 * 在数组中遍历查找目标整数
 * @param array int类型整数数组
 * @param length 数组长度
 * @param x 目标整数
 * @return -1 —— 数组中找不到目标整数，在[1,length]范围内的一个整数 —— 目标整数在数组中的位置
 */
int search(int array[], int length, int x) {
    int ret = -1;
    for (int i = 0; i < length; i++) {
        if (array[i] == x) {
            ret = i + 1;
            break;
        }
    }
    return ret;
}
