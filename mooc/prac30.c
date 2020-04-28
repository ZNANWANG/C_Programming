/**
 * @Author: Wang An
 * @Date: 4/28/2020 11:39 PM
 */
#include <stdio.h>

void f(int *p);

void swap(int *x, int *y);

int main(){
    int a[10];

    printf("%p\n", &a);
    printf("%p\n",a);
    printf("%p\n",&a[0]);
    printf("%p\n",&a[1]); // 堆自底向上存储变量，地址变大。

    int i = 0;
    int p;
    printf("%p\n", &i);
    printf("%p\n", &p); // 栈自顶向下存储变量，地址变小。

    printf("&i = %p\n", &i); // 验证指针作为参数是否指向i。
    f(&i);

    int x = 9;
    int y = 1;
    printf("x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("x = %d, y = %d\n", x, y);
    return 0;
}

/**
 * 交换两个元素的值
 * @param x 第一个元素的指针
 * @param y 第二个元素的指针
 */
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

/**
 * 区别p和*p
 * @param p 指针
 */
void f(int *p){
    printf("p = %p\n", p);
    printf("*p = %d\n", *p);
}