/**
 * 实验7-2-9 螺旋方阵 (20分)
 *
 * 所谓“螺旋方阵”，是指对任意给定的N，将1到N×N的数字从左上角第1个格子开始，按顺时针螺旋方向顺序填入N×N的方阵里。本题要求构造这样的螺旋方阵。
 *
 * 输入格式：
 * 输入在一行中给出一个正整数N（<10）。
 *
 * 输出格式：
 * 输出N×N的螺旋方阵。每行N个数字，每个数字占3位。
 *
 * 输入样例：
 * 5
 *
 * 输出样例：
 *  1  2  3  4  5
 * 16 17 18 19  6
 * 15 24 25 20  7
 * 14 23 22 21  8
 * 13 12 11 10  9
 *
 * @Author: Wang An
 * @Date: 5/3/2020 10:36 PM
 */
#include <stdio.h>
#include <string.h>

void print();

void print1();

int main(int argc, const char *argv[]) {
    print1();

    return 0;
}

/**
 * 四条基准位
 */
void print1() {
    int n = 0;
    scanf("%d", &n);
    int arr[n][n];
    int low = 0;
    int high = n - 1;
    int left = 0;
    int right = n - 1;
    int num = 1;
    while (low <= high && left <= right) {
        for (int i = left; i <= right; i++) {
            arr[low][i] = num++;
        }

        for (int i = low + 1; i <= high; i++) {
            arr[i][right] = num++;
        }

        for (int i = right - 1; i >= left; i--) {
            arr[high][i] = num++;
        }

        for (int i = high - 1; i > low; i--) {
            arr[i][left] = num++;
        }

        low++;
        high--;
        left++;
        right--;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%3d", arr[i][j]);
        }
        printf("\n");
    }
}

/**
 * 迷宫走法
 */
void print() {
    int n = 0;
    scanf("%d", &n);
    int arr[n][n];
    for (int i = 0; i < n; i++) {
        memset(arr[i], 0, sizeof(arr[i]));
    }

    int dir[4][2] = {{0,  1},
                     {1,  0},
                     {0,  -1},
                     {-1, 0},};

    int flag = 0;
    int x = 0, y = -1;
    for (int i = 1; i <= n * n; i++) {
        int xInc = dir[flag][0];
        int yInc = dir[flag][1];
        int tx = x + xInc;
        int ty = y + yInc;
        if (tx < 0 || tx >= n || ty < 0 || ty >= n || arr[tx][ty] != 0) {
            flag = (flag + 1) % 4;
            xInc = dir[flag][0];
            yInc = dir[flag][1];
        }

        arr[x += xInc][y += yInc] = i;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%3d", arr[i][j]);
        }
        printf("\n");
    }
}
