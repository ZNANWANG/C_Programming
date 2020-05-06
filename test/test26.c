/**
 * 测试指针作为函数参数的效果 —— 作为函数参数的指针是局部变量，它的指向不会改变实参指针变量的指向，但是可以改变实参指针变量所指向的变量的值。
 *
 * @Author: Wang An
 * @Date: 5/6/2020 9:54 AM
 */
#include <stdio.h>

void swap1(int x, int y), swap2(int *px, int *py), swap3(int *px, int *py);

int main(void) {
    int a = 1, b = 2;
    int *pa = &a, *pb = &b;
    swap1(a, b);
    printf("s1:a=%d,b=%d\n", a, b);

    a = 1, b = 2;
    swap2(pa, pb);
    printf("s2:a=%d,b=%d\n", a, b);

    a = 1, b = 2;
    swap3(pa, pb);
    printf("s3:a=%d,b=%d\n", a, b);

    return 0;
}

void swap1(int x, int y) {
    int t;
    t = x;
    x = y;
    y = t;
}

void swap2(int *px, int *py) {
    int t;
    t = *px;
    *px = *py;
    *py = t;
}

void swap3(int *px, int *py) {
    int *pt;
    pt = px;
    px = py;
    py = pt;
}
