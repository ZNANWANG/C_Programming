/**
 * 指针应用场景二：
 * 函数返回多个值，某些值就只能通过指针返回。
 * 传入的参数实际上是需要保存带回的结果的变量。
 *
 * @Author: Wang An
 * @Date: 5/1/2020 4:56 PM
 */
#include <stdio.h>

void minmax(int *array, int size, int *max, int *min);

int main() {
    int a[] = {1, 2, 3, 6, 8, 1, 2, 45, 57, 23, 45, 79, 10, 43,};
    int max = 0, min = 0;
    minmax(a, sizeof(a) / sizeof(a[0]), &min, &max);
    printf("max = %d, min = %d\n", max, min);
}

void minmax(int *array, int size, int *max, int *min) {
    *max = *min = array[0];
    for (int i = 1; i < size; i++) {
        *max = *max > array[i] ? *max : array[i];
        *min = *min < array[i] ? *min : array[i];
    }
}
