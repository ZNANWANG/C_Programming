/**
 * 二分查找 —— 时间复杂度O(logn)
 *
 * @Author: Wang An
 * @Date: 4/28/2020 8:24 PM
 */
#include <stdio.h>

int binarySearch(int number, int sorted[], int length);

int binarySearch1(int number, int sorted[], int start, int end, int length);

int main() {
    int sorted[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int length = 10;
    // 遍历数组
    for (int i = 0; i < length; i++) {
        printf("%d\t", sorted[i]);
    }
    printf("\n");
    int number;
    printf("Please input a number:\n");
    scanf("%d", &number);
//    int ret = binarySearch(number, sorted, length);
    int ret = binarySearch1(number, sorted, 0, length - 1, length);
    if (ret != -1) {
        printf("%d在数组第%d个位置上", number, ret + 1);
    } else {
        printf("%d在数组中不存在", number);
    }
    return 0;
}

/**
 * 递归 —— 对有序数组进行二分查找
 * @param number 目标整数
 * @param sorted 排序数组
 * @param start 排序数组的开始位
 * @param end 排序数组结束位
 * @param length 排序数组的长度
 * @return -1 —— 目标数字在数组中不存在，不等于-1的整数 —— 目标数字在数组中的下标。
 */
int binarySearch1(int number, int sorted[], int start, int end, int length) {
    if (length == 0 || start < 0 || start >= length || end < 0 || end >= length || start > end) {
        return -1;
    }
    int mid = (start + end) / 2;
    if (sorted[mid] == number) {
        return mid;
    } else if (sorted[mid] < number) {
        return binarySearch1(number, sorted, mid + 1, end, length);
    } else if (sorted[mid] > number) {
        return binarySearch1(number, sorted, start, mid - 1, length);
    }
    return -1;
}

/**
 * 非递归 —— 对有序数组进行二分查找
 * @param number 目标数字
 * @param sorted 排序数组
 * @param length 排序数组长度
 * @return -1 —— 目标数字在数组中不存在，不等于-1的整数 —— 目标数字在数组中的下标。
 */
int binarySearch(int number, int sorted[], int length) {
    int start = 0;
    int end = length - 1;
    int ret = -1;
    while (start <= end) {
        int mid = (start + end) / 2;
        if (sorted[mid] == number) {
            ret = mid;
            break;
        } else if (sorted[mid] < number) {
            start = mid + 1;
        } else if (sorted[mid] > number) {
            end = mid - 1;
        }
    }
    return ret;
}
