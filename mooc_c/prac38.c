/**
 * 数组变量是特殊的指针
 *
 * (1) 数组变量本身表达地址，因此
 *      int a[10];
 *      int *p = a; (无需用&取地址）
 * (2) 但是数组的单元表达的是变量，需要用&取地址。
 *      int *p = &a[2];
 * (3) a == &a[0] (数组a的地址就等于a[0]的地址）
 * (4) []可以对数组做，也可以对指针做。
 * (5) p[0] == *p
 * (6) 数组变量是const指针，所以不能被赋值。
 *
 * @Author: Wang An
 * @Date: 5/1/2020 5:24 PM
 */
#include <stdio.h>

void minmax(int array[], int size, int *max, int *min);

int main() {
    int a[] = {1, 2, 3, 6, 8, 1, 2, 45, 57, 23, 45, 79, 10, 43,};
    int max = 0, min = 0;
    minmax(a, sizeof(a) / sizeof(a[0]), &min, &max);
    printf("the address of a is %p\n", a);
    printf("sixeOf(array) = %llu\n", sizeof(a)); // 56 —— 数组变量是特殊的指针
    printf("a[0] =  %d\n", a[0]);
    printf("max = %d, min = %d\n", max, min);
    int *p = &min; // int *并不一定代表数组，有可能是int型变量。
    printf("*p = %d\n", *p);
    printf("p[0] = %d\n", p[0]); // p[0] = *p
    printf("*a = %d\n", *a);
    // 数组变量是const指针，所以不能被赋值，而int *p = a是可以的。
    // Array type 'int [14]' is not assignable
//    int b[sizeof(a) / sizeof(a[0]];
//    b = a;
}

void minmax(int array[], int size, int *max, int *min) {
    printf("array[0] = %d, *array = %d\n", array[0], *array); // array[0] = *array
    printf("the address of array is %p\n", array);
    //Sizeof on array function parameter will return size of 'int *' instead of 'int []'
    printf("sixeOf(array) = %llu\n", sizeof(array)); // 8
    printf("sixeOf(int) = %llu\n", sizeof(int)); // 4
    array[0] = 1000;
    printf("array[0] =  %d\n", array[0]);
    *max = *min = array[0];
    for (int i = 1; i < size; i++) {
        *max = *max > array[i] ? *max : array[i];
        *min = *min < array[i] ? *min : array[i];
    }
}