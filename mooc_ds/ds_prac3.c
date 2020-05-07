/**
 * 二分查找
 *
 * @Author: Wang An
 * @Date: 5/7/2020 9:20 AM
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAXK 1e7

double duration = 0;

clock_t start, stop;

int *initSortedArray(int n, int r);

int binarySearch1(int *arr, int start, int end, int target);

int binarySearch2(int *arr, int start, int end, int target, int len);

void printArray(int *arr, int a);

int main(int argc, const char *argv[]){
    int m = 0, n = 0, r = 0;
    printf("Please input the length and range of the array:\n");
    scanf("%d%d", &n, &r);
    int *arr;
    arr = initSortedArray(n, r);
    printArray(arr, n);
    printf("Please input the target to search:\n");
    scanf("%d", &m);
    srand(time(0));
    int ret = 0;

    start = clock();
    for(int i = 0; i < MAXK; i++) {
        ret = binarySearch1(arr, 0, n - 1, m);
    }
    stop = clock();
    printf("ret = %d\n", ret);
    duration = ((double)stop - start)/CLK_TCK/MAXK;
    printf("ticks1 = %lf\n", (double)stop - start);
    printf("duration1 = %6.2e\n", duration);

    start = clock();
    for(int i = 0; i < MAXK; i++) {
        ret = binarySearch2(arr, 0, n - 1, m, n);
    }
    stop = clock();
    printf("ret = %d\n", ret);
    duration = ((double)stop - start)/CLK_TCK/MAXK;
    printf("ticks2 = %lf\n", (double)stop - start);
    printf("duration2 = %6.2e\n", duration);

    if(ret == -1){
        printf("%d is not in the array.\n", m);
    } else {
        printf("%d is the index of %d in the array.\n", ret, m);
    }

    return 0;
}

/**
 * 打印显示数组
 * @param arr 数组
 * @param n 数组长度
 */
void printArray(int *arr, int n) {
    for(int i = 0; i < n; i++){
        printf("%-5d", arr[i]);
    }
    printf("\n");
}

/**
 * 时间效率低
 *
 * @param arr 已排序数组
 * @param start 初始位置
 * @param end 结束位置
 * @param target 目标值
 * @param len 数组长度
 * @return -1 —— 未在数组中找到目标值， 非负整数 —— 目标值在数组中的索引
 */
int binarySearch2(int *arr, int start, int end, int target, int len) {
    if(start < 0 || end >= len || start > end){
        return -1;
    } else {
        int mid = (start + end)/2;
        if(arr[mid] == target){
            return mid;
        } else if(arr[mid] > target){
            return binarySearch2(arr, start, mid - 1, target, len);
        } else {
            return binarySearch2(arr, mid + 1, end, target, len);
        }
    }
}

/**
 * 时间效率高
 * 时间复杂度为O(log n)
 *
 * @param arr 已排序数组
 * @param start 初始位置
 * @param end 结束位置
 * @param target 目标值
 * @return -1 —— 未在数组中找到目标值， 非负整数 —— 目标值在数组中的索引
 */
int binarySearch1(int *arr, int start, int end, int target) {
    int ret = -1;
    while(start <= end){
        int mid = (start + end)/2;
        if(arr[mid] == target){
            ret = mid;
            break;
        } else if(arr[mid] > target){
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return ret;
}

/**
 * 用插入排序生成长度为n，范围为[0, n)的有序数组（从小到大排序）
 * @param n 数组长度
 * @param r 数组元素范围
 * @return 从小到大排序的有序数组
 */
int *initSortedArray(int n, int r) {
    int *arr = (int *)malloc(n * sizeof(int));
    int preIndex = 0;
    for(int i = 0; i < n; i++){
        int tmp = rand()%r;
        preIndex = i - 1;
        while(preIndex >= 0 && arr[preIndex] > tmp) {
            arr[preIndex + 1] = arr[preIndex];
            preIndex--;
        }
        arr[preIndex + 1] = tmp;
    }
    return arr;
}
