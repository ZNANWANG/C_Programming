/**
 * 实例1.1 最大子列和问题 (20分)
 *
 * 给定K个整数组成的序列{N​1​​, N2, ..., NK}，“连续子列”被定义为{Ni, N​i+1, ..., N​j}，其中 1≤i≤j≤K。“最大子列和”则被定义为所有连续子列元素
 * 的和中最大者。例如给定序列{ -2, 11, -4, 13, -5, -2 }，其连续子列{ 11, -4, 13 }有最大的和20。现要求你编写程序，计算给定整数序列的最大
 * 子列和。
 *
 * 本题旨在测试各种不同的算法在各种数据情况下的表现。各组测试数据特点如下：
 *
 * 数据1：与样例等价，测试基本正确性；
 * 数据2：102个随机整数；
 * 数据3：103个随机整数；
 * 数据4：104个随机整数；
 * 数据5：105个随机整数；
 *
 * 输入格式:
 * 输入第1行给出正整数K (≤100000)；第2行给出K个整数，其间以空格分隔。
 *
 * 输出格式:
 * 在一行中输出最大子列和。如果序列中所有整数皆为负数，则输出0。
 *
 * 输入样例:
 * 6
 * -2 11 -4 13 -5 -2
 *
 * 输出样例:
 * 20
 *
 * @Author: Wang An
 * @Date: 5/7/2020 12:51 PM
 */
#include <stdio.h>
#include <stdlib.h>

int maxSequenceSum1(int *arr, int len);

int maxSequenceSum2(int *arr, int len);

int maxSequenceSum3(int *arr, int len);

int maxSequenceSum3Helper(int *arr, int start, int end);

int max3(int a, int b, int c);

int maxSequenceSum4(int *arr, int len);

int maxSequenceSum5(int *arr, int len);

int DivideAndConquer(int List[], int left, int right);

int main(int argc, const char *argv[]){
    int n = 6;
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int max = maxSequenceSum4(arr, n);
    printf("%d\n", max);

    return 0;
}

int maxSequenceSum5(int *arr, int len) { /* MOOC分治解法 */
    return DivideAndConquer(arr, 0, len - 1);
}

int DivideAndConquer(int List[], int left, int right) { /* 分治法求List[left]到List[right]的最大子列和 */
    int MaxLeftSum, MaxRightSum; /* 存放左右子问题的解 */
    int MaxLeftBorderSum, MaxRightBorderSum; /*存放跨分界线的结果*/

    int LeftBorderSum, RightBorderSum;
    int center, i;

    /* 如果序列中所有整数皆为负数，则输出0 */
    if (left == right) { /* 递归的终止条件，子列只有1个数字 */
        if (List[left] > 0) return List[left];
        else return 0;
    }

    /* 下面是"分"的过程 */
    center = (left + right) / 2; /* 找到中分点 */
    /* 递归求得两边子列的最大和 */
    MaxLeftSum = DivideAndConquer(List, left, center);
    MaxRightSum = DivideAndConquer(List, center + 1, right);

    /* 下面求跨分界线的最大子列和 */
    MaxLeftBorderSum = 0;
    LeftBorderSum = 0;
    for (i = center; i >= left; i--) { /* 从中线向左扫描 */
        LeftBorderSum += List[i];
        if (LeftBorderSum > MaxLeftBorderSum)
            MaxLeftBorderSum = LeftBorderSum;
    } /* 左边扫描结束 */

    MaxRightBorderSum = 0;
    RightBorderSum = 0;
    for (i = center + 1; i <= right; i++) { /* 从中线向右扫描 */
        RightBorderSum += List[i];
        if (RightBorderSum > MaxRightBorderSum)
            MaxRightBorderSum = RightBorderSum;
    } /* 右边扫描结束 */

    /* 下面返回"治"的结果 */
    return max3(MaxLeftSum, MaxRightSum, MaxLeftBorderSum + MaxRightBorderSum);
}

int maxSequenceSum4(int *arr, int len) { /* 在线处理 */
    int maxSum = arr[0], thisSum = 0;
    for(int i = 0; i < len; i++){
        thisSum += arr[i];
        maxSum = maxSum > thisSum ? maxSum : thisSum;
        if(thisSum < 0){
            thisSum = 0;
        }
    }

    /* 如果序列中所有整数皆为负数，则输出0。 */
    return maxSum = maxSum < 0 ? 0 : maxSum;
}

int maxSequenceSum3(int *arr, int len) {
    return maxSequenceSum3Helper(arr, 0, len-1);
}

int maxSequenceSum3Helper(int *arr, int start, int end) {
    int maxSum = 0, thisSum = 0;
    if(start == end){
        maxSum = arr[start];
    }else {
        int mid = (start + end)/2;
        int left = maxSequenceSum3Helper(arr, start, mid);
        int right = maxSequenceSum3Helper(arr, mid + 1, end);
        int center = 0;
        for(int i = mid; i >= start; i--){
            thisSum += arr[i];
            center = center > thisSum ? center : thisSum;
        }
        thisSum = center;
        for(int i = mid + 1; i <= end; i++){
            thisSum += arr[i];
            center = center > thisSum ? center : thisSum;
        }
        maxSum = max3(left, center, right);
    }

    /* 如果序列中所有整数皆为负数，则输出0。 */
    return maxSum = maxSum < 0 ? 0 : maxSum;
}

int max3(int a, int b, int c) {
    return a > b ? a > c ? a : c : b > c ? b : c;
}

int maxSequenceSum2(int *arr, int len) {
    int maxSum = arr[0], thisSum = 0;
    for(int i = 0; i < len; i++){
        thisSum = 0;
        for(int j = i; j < len; j++){
            thisSum += arr[j];
            maxSum = maxSum > thisSum ? maxSum : thisSum;
        }
    }

    /* 如果序列中所有整数皆为负数，则输出0。 */
    return maxSum = maxSum < 0 ? 0 : maxSum;
}

int maxSequenceSum1(int *arr, int len) {
    int maxSum = arr[0], thisSum = 0;
    for(int i = 0; i < len; i++){
        for(int j = i; j < len; j++){
            thisSum = 0;
            for(int k = i; k <= j; k++){
                thisSum += arr[k];
            }
            maxSum = maxSum > thisSum ? maxSum : thisSum;
        }
    }

    /* 如果序列中所有整数皆为负数，则输出0。 */
    return maxSum = maxSum < 0 ? 0 : maxSum;
}
