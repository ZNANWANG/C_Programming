/**
 * 实验7-1-12 组个最小数 (20分)
 *
 * 给定数字0-9各若干个。你可以以任意顺序排列这些数字，但必须全部使用。目标是使得最后得到的数尽可能小（注意0不能做首位）。例如：给定两个0，两个1，
 * 三个5，一个8，我们得到的最小的数就是10015558。
 *
 * 现给定数字，请编写程序输出能够组成的最小的数。
 *
 * 输入格式：
 * 输入在一行中给出10个非负整数，顺序表示我们拥有数字0、数字1、……数字9的个数。整数间用一个空格分隔。10个数字的总个数不超过50，且至少拥有1个非0
 * 的数字。
 *
 * 输出格式：
 * 在一行中输出能够组成的最小的数。
 *
 * 输入样例：
 * 2 2 0 0 0 3 0 0 1 0
 *
 * 输出样例：
 * 10015558
 *
 * @Author: Wang An
 * @Date: 5/3/2020 4:47 PM
 */
#include <stdio.h>

void swap(int *arr, int i, int j);

int main(int argc, const char *argv[]) {
    int arr[50] = {};
    int n = 0, idx = 0, cnt = 0, minIndex = -1;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &n);
        if (cnt != 0 && minIndex == -1) {
            minIndex = idx;
        }
        for (int i = 0; i < n; i++) {
            arr[idx++] = cnt;
        }
        cnt++;
    }

//    printf("minIndex = %d\n", minIndex);

    if (minIndex != 0) {
        swap(arr, 0, minIndex);
    }

    for (int i = 0; i < idx; i++) {
        //
//        {
//            printf("arr[%d] = %d", i, arr[i]);
//            if ((i + 1) % 5 == 0) {
//                printf("\n");
//            } else {
//                printf("\t");
//            }
//        }
        //
        printf("%d", arr[i]);
    }

    return 0;
}

void swap(int arr[], int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}