/**
 * 实验7-2-6 打印杨辉三角 (20分)
 *
 * 本题要求按照规定格式打印前N行杨辉三角。
 *
 * 输入格式：
 * 输入在一行中给出N（1≤N≤10）。
 *
 * 输出格式：
 * 以正三角形的格式输出前N行杨辉三角。每个数字占固定4位。
 *
 * 输入样例：
 * 6
 *
 * 输出样例：
 *           1
 *         1   1
 *       1   2   1
 *     1   3   3   1
 *   1   4   6   4   1
 * 1   5  10  10   5   1
 *
 * @Author: Wang An
 * @Date: 5/3/2020 9:30 PM
 */
#include <stdio.h>
#include <string.h>

#define N 10

void print();

void print1();

int main(int argc, const char *argv[]) {
    print1();

    return 0;
}

void print1() {
    int i, j, n, a[N][N] = {0};
    scanf("%d", &n);
    //先为首尾赋值为1
    for (i = 0; i < n; i++) {
        a[i][0] = 1;
        a[i][i] = 1;
    }

    //计算杨辉三角的中间数值
    for (i = 2; i < n; i++) {
        for (j = 1; j < i; j++) {
            //等于上一行两个数相加
            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
        }

    }
    //打印
    for (i = 0; i < n; i++) {
        //先输出每一行空格
        for (j = n - 1 - i; j > 0; j--)
            printf(" ");
        //在输出每一行杨辉三角
        for (j = 0; j <= i; j++)
            printf("%4d", a[i][j]);
        printf("\n");
    }
}

/**
 * 格式错误
 */
void print() {
    int n = 0;
    scanf("%d", &n);
    int arr[n][2 * n - 1];
    for (int i = 0; i < n; i++) {
        memset(arr[i], 0, sizeof(arr[i]));
    }

    arr[0][n - 1] = 1;
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < 2 * n - 1; j++) {
            if (j - 1 >= 0 && j - 1 < 2 * n - 1) {
                arr[i][j] += arr[i - 1][j - 1];
            }
            if (j + 1 >= 0 && j + 1 < 2 * n - 1) {
                arr[i][j] += arr[i - 1][j + 1];
            }
        }
    }

    //
    {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < 2 * n - 1; j++) {
                if (arr[i][j] != 0) {
                    printf("%d", arr[i][j]);
                } else {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    //
}
