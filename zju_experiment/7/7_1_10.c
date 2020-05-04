/**
 * 实验7-1-10 交换最小值和最大值 (15分)
 *
 * 本题要求编写程序，先将输入的一系列整数中的最小值与第一个数交换，然后将最大值与最后一个数交换，最后输出交换后的序列。
 *
 * 注意：题目保证最大和最小值都是唯一的。
 *
 * 输入格式：
 * 输入在第一行中给出一个正整数N（≤10），第二行给出N个整数，数字间以空格分隔。
 *
 * 输出格式：
 * 在一行中顺序输出交换后的序列，每个整数后跟一个空格。
 *
 * 输入样例：
 * 5
 * 8 2 5 1 4
 *
 * 输出样例：
 * 1 2 5 4 8
 *
 * @Author: Wang An
 * @Date: 5/3/2020 12:34 PM
 */
#include <stdio.h>

void swap(int arr[], int i, int j);

int main(int argc, const char *argv[]) {
    int n = 0;
    scanf("%d", &n);
    int arr[n];
    int num = 0;
    int minIndex = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        arr[i] = num;
        if (num < arr[minIndex]) {
            minIndex = i;
        }
    }
//    printf("minIndex = %d\n", minIndex);
    swap(arr, 0, minIndex);

    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }
//    printf("maxIndex = %d\n", maxIndex);
    swap(arr, n - 1, maxIndex);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

void swap(int arr[], int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
