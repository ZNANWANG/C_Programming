/**
 * @Author: Wang An
 * @Date: 5/4/2020 2:06 PM
 */
#include <stdio.h>

void display(int *arr, int row, int col);

int main(int argc, const char *argv[]) {
    int arr[][2] = {{1, 2},
                    {3, 4},
                    {5, 6},};
    display(arr, sizeof(arr) / sizeof(arr[0]), 2);

    return 0;
}

void display(int *arr, int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("arr[%d][%d] = %d\n", i, j, *(arr + col * i + j));
        }
    }
}
