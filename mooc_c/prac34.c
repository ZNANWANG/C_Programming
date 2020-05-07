/**
 * 指针应用场景一：
 * 交换两个变量的值
 *
 * @Author: Wang An
 * @Date: 5/1/2020 4:52 PM
 */
#include <stdio.h>

void swap(int *pa, int *pb);

int main() {
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);
    printf("a = %d, b = %d\n", a, b);
    int *pa = &a;
    int *pb = &b;
    swap(pa, pb);
    printf("a = %d, b = %d\n", a, b);
}

void swap(int *pa, int *pb) {
    int temp = *pa;
    *pa = *pb;
    *pb = temp;
}
