/**
 * 求最大连续子列和
 *
 * 注：对于时间效率的测试不准确。
 *
 * @Author: Wang An
 * @Date: 5/7/2020 10:46 AM
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define MAXK 1e7

clock_t start, stop;

double duration;

int *initArray(int length, int range);

void displayArray(int *arr, int len);

int maxSequenceSum1(int *arr, int len);

int maxSequenceSum2(int *arr, int len);

int maxSequenceSum3(int *arr, int len);

int maxSequenceSum4(int *arr, int len);

int maxSequenceSum3Helper(int *arr, int start, int end);

int getMax(int a, int b, int c);

int maxSequenceSum5(int *arr, int len);

int Max3(int A, int B, int C);

int DivideAndConquer(int List[], int left, int right);

int main(int argc, const char *argv[]) {
    int n = 0, r = 0;
    printf("Please input the length and range of the array:\n");
    scanf("%d%d", &n, &r);
    while (n < 1) {
        printf("The length of array must be positive.");
        printf("Please input the length and range of the array:\n");
        scanf("%d%d", &n, &r);
    }
    int *arr = initArray(n, r);
//    displayArray(arr, n);
    int max = 0;

    // 算法一
//    start = clock();
//    for (int i = 0; i < MAXK; i++) {
//        max = maxSequenceSum1(arr, n);
//    }
//    stop = clock();
//    printf("max = %d\n", max);
//    duration = ((double) stop - start) / CLK_TCK / MAXK;
//    printf("ticks1: %lf\n", (double) stop - start);
//    printf("duration1: %6.2e\n", duration);

    // 算法二
    start = clock();
    for (int i = 0; i < MAXK; i++) {
        max = maxSequenceSum2(arr, n);
    }
    stop = clock();
    printf("max = %d\n", max);
    duration = ((double) stop - start) / CLK_TCK / MAXK;
    printf("ticks2: %lf\n", (double) stop - start);
    printf("duration2: %6.2e\n", duration);

    // 算法三
    start = clock();
    for (int i = 0; i < MAXK; i++) {
        max = maxSequenceSum3(arr, n);
    }
    stop = clock();
    printf("max = %d\n", max);
    duration = ((double) stop - start) / CLK_TCK / MAXK;
    printf("ticks3: %lf\n", (double) stop - start);
    printf("duration3: %6.2e\n", duration);

    // 算法四
    start = clock();
    for (int i = 0; i < MAXK; i++) {
        max = maxSequenceSum4(arr, n);
    }
    stop = clock();
    printf("max = %d\n", max);
    duration = ((double) stop - start) / CLK_TCK / MAXK;
    printf("ticks4: %lf\n", (double) stop - start);
    printf("duration4: %6.2e\n", duration);

    // 算法五
    start = clock();
    for (int i = 0; i < MAXK; i++) {
        max = maxSequenceSum5(arr, n);
    }
    stop = clock();
    printf("max = %d\n", max);
    duration = ((double) stop - start) / CLK_TCK / MAXK;
    printf("ticks5: %lf\n", (double) stop - start);
    printf("duration5: %6.2e\n", duration);

    return 0;
}

int maxSequenceSum5(int *arr, int len) {
    return DivideAndConquer(arr, 0, len - 1);
}

int Max3(int A, int B, int C) { /* 返回3个整数中的最大值 */
    return A > B ? A > C ? A : C : B > C ? B : C;
}

int DivideAndConquer(int List[], int left, int right) { /* 分治法求List[left]到List[right]的最大子列和 */
    int MaxLeftSum, MaxRightSum; /* 存放左右子问题的解 */
    int MaxLeftBorderSum, MaxRightBorderSum; /*存放跨分界线的结果*/

    int LeftBorderSum, RightBorderSum;
    int center, i;

    if (left == right) { /* 递归的终止条件，子列只有1个数字 */
        return List[left];
    }

    /* 下面是"分"的过程 */
    center = (left + right) / 2; /* 找到中分点 */
    /* 递归求得两边子列的最大和 */
    MaxLeftSum = DivideAndConquer(List, left, center);
    MaxRightSum = DivideAndConquer(List, center + 1, right);

    /* 下面求跨分界线的最大子列和 */
    MaxLeftBorderSum = List[center];
    LeftBorderSum = 0;
    for (i = center; i >= left; i--) { /* 从中线向左扫描 */
        LeftBorderSum += List[i];
        if (LeftBorderSum > MaxLeftBorderSum)
            MaxLeftBorderSum = LeftBorderSum;
    } /* 左边扫描结束 */

    MaxRightBorderSum = List[center + 1];
    RightBorderSum = 0;
    for (i = center + 1; i <= right; i++) { /* 从中线向右扫描 */
        RightBorderSum += List[i];
        if (RightBorderSum > MaxRightBorderSum)
            MaxRightBorderSum = RightBorderSum;
    } /* 右边扫描结束 */

    /* 下面返回"治"的结果 */
    return Max3(MaxLeftSum, MaxRightSum, MaxLeftBorderSum + MaxRightBorderSum);
}

int maxSequenceSum3(int *arr, int len) {
    return maxSequenceSum3Helper(arr, 0, len - 1);
}

int maxSequenceSum3Helper(int *arr, int start, int end) {
    int maxSum = 0;
    if (start == end) {
        maxSum = arr[start];
    } else {
        int mid = (start + end) / 2;
        int left = maxSequenceSum3Helper(arr, start, mid);
        int right = maxSequenceSum3Helper(arr, mid + 1, end);
//        printf("mid = %d, left = %d, rigtht = %d, ", mid, left, right);
        int center = arr[mid];
        int thisSum = 0;
        for (int i = mid; i >= start; i--) {
            thisSum += arr[i];
            center = center > thisSum ? center : thisSum;
        }

        thisSum = center;
        for (int i = mid + 1; i <= end; i++) {
            thisSum += arr[i];
            center = center > thisSum ? center : thisSum;
        }
        maxSum = getMax(center, left, right);
//        printf("center = %d, maxSum = %d.\n", center, maxSum);
    }

    return maxSum;
}

int getMax(int a, int b, int c) {
    int max = a > b ? a : b;
    max = max > c ? max : c;
    return max;
}

int maxSequenceSum4(int *arr, int len) { /* 在线处理 */
    int maxSum = arr[0], thisSum = 0;
    for (int i = 0; i < len; i++) {
        thisSum += arr[i];
        maxSum = maxSum > thisSum ? maxSum : thisSum;
        if (thisSum < 0) {
            thisSum = 0;
        }
    }
    return maxSum;
}

int maxSequenceSum2(int *arr, int len) {
    int maxSum = arr[0], thisSum = 0;
    for (int i = 0; i < len; i++) {
        thisSum = 0;
        for (int j = i; j < len; j++) {
            thisSum += arr[j];
            maxSum = maxSum > thisSum ? maxSum : thisSum;
        }
    }
    return maxSum;
}

int maxSequenceSum1(int *arr, int len) {
    int maxSum = arr[0], thisSum = 0;
    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) {
            thisSum = 0;
            for (int k = i; k <= j; k++) {
                thisSum += arr[k];
            }
            maxSum = maxSum > thisSum ? maxSum : thisSum;
        }
    }
    return maxSum;
}

void displayArray(int *arr, int len) {
    for (int i = 0; i < len; i++) {
        printf("%-5d", arr[i]);
    }
    printf("\n");
}

int *initArray(int length, int range) {
    int *arr = (int *) malloc(length * sizeof(int));
    for (int i = 0; i < length; i++) {
        arr[i] = rand() % range - range / 2;
    }
    return arr;
}
