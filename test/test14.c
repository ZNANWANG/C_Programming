/**
 * 全排列算法
 *
 * @Author: Wang An
 * @Date: 5/3/2020 4:58 PM
 */
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

void permute(int arr[], int length, int start);

void swap(int *arr, int i, int j);

int isUnique(int arr[], int length, int num);

int main(int argc, const char *argv[]) {
    srand(time(0));
    int length = 4;
    int arr[length];
    memset(arr, 0, length);
    for (int i = 0; i < length; i++) {
        arr[i] = rand() % 10;
        printf("arr[%d] = %d\t", i, arr[i]);
    }
    printf("\n");

    permute(arr, length, 0);

    return 0;
}

void permute(int arr[], int length, int start) {
    if (start >= length) {
        for (int i = 0; i < length; i++) {
            printf("%d\t", arr[i]);
        }
        printf("\n");
    } else {
        int exist[length];
        memset(exist, 0, length);
        int cnt = 0;

        for (int i = start; i < length; i++) {
            if (isUnique(exist, cnt, arr[i])) {
                exist[cnt++] = arr[i];
                swap(arr, start, i);
                permute(arr, length, start + 1);
                swap(arr, start, i);
            }
        }
    }
}

int isUnique(int arr[], int length, int num) {
    int ret = 1;
    for (int i = 0; i < length; i++) {
        if (arr[i] == num) {
            ret = 0;
            break;
        }
    }
    return ret;
}

void swap(int *arr, int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
