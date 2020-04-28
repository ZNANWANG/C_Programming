/**
 * 冒泡排序
 *
 * @Author: Wang An
 * @Date: 4/28/2020 10:53 PM
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubbleSort(int array[], int length);

void swap(int array[], int i, int j);

int main() {
    srand(time(0));
    const int length = 10;
    int array[length];
    for (int i = 0; i < length; i++) {
        array[i] = rand() % 50;
        printf("%d\t", array[i]);
    }
    printf("\n");

    bubbleSort(array, length);

    for (int i = 0; i < length; i++) {
        printf("%d\t", array[i]);
    }
    printf("\n");

    return 0;
}

/**
 * 冒泡排序
 * @param array 待排序int数组
 * @param length 数组长度
 */
void bubbleSort(int array[], int length) {
    if (length == 0) {
        return;
    }
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length - 1 - i; j++) {
            if (array[j] > array[j + 1]) {
                swap(array, j, j + 1);
            }
        }
    }
}

/**
 * 交换数组中的两个元素
 * @param array 待交换的int数组
 * @param i 第一个交换数字在数组中的下标
 * @param j 第二个交换数字在数组中的下标
 */
void swap(int array[], int i, int j) {
    int temp = array[i];
    array[i] = array[j];
    array[j] = temp;
}