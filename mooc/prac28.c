/**
 * 选择排序
 *
 * @Author: Wang An
 * @Date: 4/28/2020 8:50 PM
 */
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void selectionSort(int array[], int length);

void selectionSort1(int array[], int length);

void swap(int array[], int i, int j);

int main() {
    srand(time(0));
    const int length = 10;
    int array[length];
    for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++) {
        array[i] = rand() % 50;
        printf("%d\t", array[i]);
    }
    printf("\n");

    selectionSort1(array, length);

    for (int i = 0; i < length; i++) {
        printf("%d\t", array[i]);
    }
    printf("\n");

    return 0;
}

/**
 * 选择排序 —— 从前往后放
 * @param array 待排序int数组
 * @param length 数组长度
 */
void selectionSort(int array[], int length) {
    if (length == 0) {
        return;
    }

    for (int i = 0; i < length; i++) {
        int minIndex = i;
        for (int j = i + 1; j < length; j++) {
            if (array[j] < array[minIndex]) {
                minIndex = j;
            }
        }
        swap(array, i, minIndex);
    }
}

/**
 * 选择排序 —— 从后往前放
 * @param array 待排序int数组
 * @param length 数组长度
 */
void selectionSort1(int array[], int length) {
    if (length == 0) {
        return;
    }

    for (int i = length - 1; i > 0; i--) {
        int maxIndex = i;
        for (int j = 0; j < i; j++) {
            if (array[j] > array[maxIndex]) {
                maxIndex = j;
            }
        }
        swap(array, i, maxIndex);
    }
}

/**
 * 交换数组中的两个元素
 * @param array 待交换的数组
 * @param i 第一个交换数字在数组中的下标
 * @param j 第二个交换数字在数组中的下标
 */
void swap(int array[], int i, int j) {
    int temp = array[i];
    array[i] = array[j];
    array[j] = temp;
}


