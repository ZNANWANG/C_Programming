/**
 * 二维数组的初始化，如果省略，自动补零。
 *
 * @Author: Wang An
 * @Date: 4/27/2020 9:45 PM
 */
#include <stdio.h>

int main() {
    int matrix[][5] = {
            {1, 2, 3, 4, 5},
            {6, 7},
    };
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
