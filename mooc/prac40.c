/**
 * 指针运算
 *
 * *(p + n) == a[n]
 *
 * @Author: Wang An
 * @Date: 5/1/2020 6:19 PM
 */
#include <stdio.h>
int main(){
    char ac[] = {1,2,3,4,5,6,7,8,9,};
    char *p = ac; // 等价于 char *p = &ac[0];
    char *p1 = &ac[5];
    printf("p\t = %p\n", p);
    printf("p + 1\t = %p\n", p+1); // sizeOf(char) = 1
    printf("*(p+1)\t = %d\n", *(p+1));
    printf("p1 - p\t = %lld\n", p1 - p); // 表示两个指针之间有多少个元素

    int ai[] = {1,2,3,4,5,6,7,8,9,};
    int *q = ai;
    int *q1 = &ai[6];
    printf("q\t = %p\n", q);
    printf("q + 1\t = %p\n", q+1); // sizeOf(int) = 4
    printf("*(q+1)\t = %d\n", *(q+1));
    printf("q1 - q\t = %lld\n", q1 - q); // 表示两个指针之间有多少个元素

    long al[] = {1,2,3,4,5,6,7,8,9,};
    long *r = al;
    printf("r\t = %p\n", r);
    printf("r + 1\t = %p\n", r+1); // sizeOf(long) = 4

    double ad[] = {1,2,3,4,5,6,7,8,9,};
    double *s = ad;
    printf("s\t = %p\n", s);
    printf("s + 1\t = %p\n", s+1); // sizeOf(double) = 8

    return 0;
}