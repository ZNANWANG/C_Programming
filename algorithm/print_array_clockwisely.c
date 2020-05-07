/**
 * 顺时针打印旋转数组
 *
 * @Author: Wang An
 * @Date: 5/7/2020 11:40 PM
 */
#include <stdio.h>
#include <stdlib.h>

void displayMatrix(int **matrix, int row, int col);

void createMatrix1(int row, int col);

void createMatrix2(int row, int col);

int main(int argc, const char *argv[]) {
    int row = 0, col = 0;
    scanf("%d%d", &row, &col);
    createMatrix2(row, col);
}

/**
 * 设置方向
 *
 * @param row 数组行数
 * @param col 数组列数
 */
void createMatrix2(int row, int col) {
    int dir[][2] = {{0,  1},
                    {1,  0},
                    {0,  -1},
                    {-1, 0},};
    int num = 1;
    int **matrix = (int **)malloc(row * sizeof(int *));
    for(int i = 0; i < row; i++){
        matrix[i] = (int *)malloc(col * sizeof(int));
    }
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            matrix[i][j] = -1;
        }
    }

    int x = 0, y = -1, flag = 0;
    while(num <= row * col){
        int tx = x + dir[flag][0];
        int ty = y + dir[flag][1];
        if(tx >= 0 && tx < row && ty >= 0 && ty < col && matrix[tx][ty] == -1) {
            x = tx;
            y = ty;
            matrix[x][y] = num++;
        } else {
            flag++;
            flag %= 4;
        }
    }

    displayMatrix(matrix, row, col);

    free(matrix);
}

/**
 * 设置基准位
 *
 * @param row 数组行数
 * @param col 数组列数
 */
void createMatrix1(int row, int col) {
    int num = 1;
    int left = 0;
    int right = col - 1;
    int low = 0;
    int high = row - 1;
    int **matrix = (int **) malloc(row * sizeof(int *));
    for (int i = 0; i < row; i++) {
        matrix[i] = (int *) malloc(col * sizeof(int));
    }

    while (num <= row * col) {
        if (left > right) {
            goto next;
        }
        for (int i = left; i <= right; i++) {
            matrix[low][i] = num++;
        }

        if (low + 1 > high) {
            goto next;
        }
        for (int i = low + 1; i <= high; i++) {
            matrix[i][right] = num++;
        }

        if (right - 1 < left) {
            goto next;
        }
        for (int i = right - 1; i >= left; i--) {
            matrix[high][i] = num++;
        }

        if (high - 1 <= low) {
            goto next;
        }
        for (int i = high - 1; i > low; i--) {
            matrix[i][left] = num++;
        }

        next:
        low++;
        high--;
        left++;
        right--;
    }

    displayMatrix(matrix, row, col);

    free(matrix);
}

void displayMatrix(int **matrix, int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%-6d", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}