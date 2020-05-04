/**
 * 实验7-2-8 找鞍点 (20分)
 *
 * 一个矩阵元素的“鞍点”是指该位置上的元素值在该行上最大、在该列上最小。
 *
 * 本题要求编写程序，求一个给定的n阶方阵的鞍点。
 *
 * 输入格式：
 * 输入第一行给出一个正整数n（1≤n≤6）。随后n行，每行给出n个整数，其间以空格分隔。
 *
 * 输出格式：
 * 输出在一行中按照“行下标 列下标”（下标从0开始）的格式输出鞍点的位置。如果鞍点不存在，则输出“NONE”。题目保证给出的矩阵至多存在一个鞍点。
 *
 * 输入样例1：
 * 4
 * 1 7 4 1
 * 4 8 3 6
 * 1 6 1 2
 * 0 7 8 9
 *
 * 输出样例1：
 * 2 1
 *
 * 输入样例2：
 * 2
 * 1 7
 * 4 1
 *
 * 输出样例2：
 * NONE
 *
 * @Author: Wang An
 * @Date: 5/3/2020 10:18 PM
 */
#include <stdio.h>

int main(int argc, const char *argv[]) {
    int n = 0;
    scanf("%d", &n);
    int arr[n][n];
    int num = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &num);
            arr[i][j] = num;
        }
    }

    int maxRow[n];
    for (int i = 0; i < n; i++) {
        int max = arr[i][0];
        for (int j = 0; j < n; j++) {
            max = max > arr[i][j] ? max : arr[i][j];
        }
        maxRow[i] = max;
    }

//    {
//        for (int i = 0; i < n; i++) {
//            printf("maxRow[%d] = %d\n", i, maxRow[i]);
//        }
//    }

    int minCol[n];
    for (int i = 0; i < n; i++) {
        int min = arr[0][i];
        for (int j = 0; j < n; j++) {
            min = min < arr[j][i] ? min : arr[j][i];
        }
        minCol[i] = min;
    }

//    {
//        for (int i = 0; i < n; i++) {
//            printf("maxCol[%d] = %d\n", i, maxCol[i]);
//        }
//    }

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int t = arr[i][j];
            if (t == maxRow[i] && t == minCol[j]) {
                cnt++;
                printf("%d %d\n", i, j);
            }
        }
    }
    if (cnt == 0) {
        printf("NONE\n");
    }

    return 0;
}
