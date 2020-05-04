/**
 * 实验7-2-7 方阵循环右移 (20分)
 *
 * 本题要求编写程序，将给定n×n方阵中的每个元素循环向右移m个位置，即将第0、1、⋯、n−1列变换为第n−m、n−m+1、⋯、n−1、0、1、⋯、n−m−1列。
 *
 * 输入格式：
 * 输入第一行给出两个正整数m和n（1≤n≤6）。接下来一共n行，每行n个整数，表示一个n阶的方阵。
 *
 * 输出格式：
 * 按照输入格式输出移动后的方阵：即输出n行，每行n个整数，每个整数后输出一个空格。
 *
 * 输入样例：
 * 2 3
 * 1 2 3
 * 4 5 6
 * 7 8 9
 *
 * 输出样例：
 * 2 3 1
 * 5 6 4
 * 8 9 7
 *
 * @Author: Wang An
 * @Date: 5/3/2020 10:11 PM
 */
#include <stdio.h>

int main(int argc, const char *argv[]) {
    int m = 0, n = 0;
    scanf("%d %d", &m, &n);
    int arr[n][n];
    int num;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &num);
            arr[i][(j + m) % n] = num;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}