/**
 * 习题2.2 数组循环左移 (20分)
 *
 * 本题要求实现一个对数组进行循环左移的简单函数：一个数组a中存有n（>0）个整数，在不允许使用另外数组的前提下，将每个整数循环向左移m（≥0）个位置，
 * 即将a中的数据由（a​0​​ a1​​ ⋯ a​n−1）变换为（am​​ ⋯ an−1​​ a0​​ a1​​ ⋯ a​m−1）（最前面的m个数循环移至最后面的m个位置）。如果还需要考虑程序移动数据
 * 的次数尽量少，要如何设计移动的方法？
 *
 * 输入格式:
 * 输入第1行给出正整数n（≤100）和整数m（≥0）；第2行给出n个整数，其间以空格分隔。
 *
 * 输出格式:
 * 在一行中输出循环左移m位以后的整数序列，之间用空格分隔，序列结尾不能有多余空格。
 *
 * 输入样例：
 * 8 3
 * 1 2 3 4 5 6 7 8
 *
 * 输出样例：
 * 4 5 6 7 8 1 2 3
 *
 * @Author: Wang An
 * @Date: 5/7/2020 5:47 PM
 */
#include <stdio.h>
#include <stdlib.h>

void ringShiftLeft1();

void displayArray(int *arr, int len);

void ringShiftLeft2(int *arr, int m, int n);

void swap(int *arr, int i, int j);

void ringShiftLeft3(int *arr, int m, int n);

void ringShiftLeft4(int *arr, int m, int n);

int main(int argc, const char *argv[]) {
//    ringShiftLeft1();

    int n = 0, m = 0;
    scanf("%d%d", &n, &m);
    int *arr = (int *) malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    ringShiftLeft2(arr, m, n);

    displayArray(arr, n);

    return 0;
}

/**
 * 颠倒交换法
 *
 * 思路：
 * 循环左移k位, 先把前面 0 到 k-1位置的数字首尾交换, 然后再把 k 到 len-1位置首尾交换, 最后再把 0 到 len-1下标位置首位交换即可实现。
 *
 * @param arr 数组
 * @param m 左移位数
 * @param n 数组长度
 */
void ringShiftLeft4(int *arr, int m, int n) {
    m %= n;
    int j = 0;
    for(int i = 0; i <= (m - 1)/2; i++){
        j = m - 1 - i;
        if(i < j) {
            swap(arr, i, j);
        }
    }

    for(int i = m; i <= (m + n - 1)/2; i++){
        j = n - 1 + m - i;
        if(i < j) {
            swap(arr, i, n - 1 + m - i);
        }
    }

    for(int i = 0; i <= (n - 1)/2; i++){
        j = n - 1 - i;
        if(i < j) {
            swap(arr, i, n - 1 - i);
        }
    }
}

/**
 * 存储回填
 *
 * 思路：
 * 先将数组前i个元素存在临时数组,在将余下的n-i个元素左移i个位置,最后将临时数组中的元素复制到后面i个位置
 *
 * @param arr 数组
 * @param m 左移位数
 * @param n 数组长度
 */
void ringShiftLeft3(int *arr, int m, int n) {
    m %= n;
    int *tmp = (int *)malloc(m * sizeof(int));
    for(int i = 0; i <= m; i++){
        tmp[i] = arr[i];
    }

    for(int i = 0; i < n - m; i++){
        arr[i] = arr[i + m];
    }

    int idx = 0;
    for(int i = n - m; i < n; i++){
        arr[i] = tmp[idx++];
    }
}

/**
 * 颠倒交换法
 *
 * 思路：
 * 循环左移k位, 先把前面 0 到 k-1位置的数字首尾交换, 然后再把 k 到 len-1位置首尾交换, 最后再把 0 到 len-1下标位置首位交换即可实现。
 *
 * @param arr 数组
 * @param m 左移位数
 * @param n 数组长度
 */
void ringShiftLeft2(int *arr, int m, int n) {
    m %= n;
    int i = 0, j = m - 1;
    while(i < j){
        swap(arr, i, j);
        i++;
        j--;
    }

    i = m, j = n -1;
    while(i < j){
        swap(arr, i, j);
        i++;
        j--;
    }

    i = 0, j = n-1;
    while(i < j){
        swap(arr, i, j);
        i++;
        j--;
    }
}

/**
 * 在线处理
 *
 * 思路：
 * 左移m位相当于右移n-m%n位（m可能大于n）
 */
void ringShiftLeft1() {
    int n = 0, m = 0;
    scanf("%d%d", &n, &m);
    int *arr = (int *) malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[(i + n - m % n) % n]);
    }
    displayArray(arr, n);
}

void swap(int *arr, int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void displayArray(int *arr, int len) {
    for (int i = 0; i < len; i++) {
        printf("%d", arr[i]);
        if (i != len - 1) {
            printf(" ");
        }
    }
    printf("\n");
}
