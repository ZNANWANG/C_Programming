/**
 * 相邻两次malloc得到的空间是连续的
 *
 * @Author: Wang An
 * @Date: 5/1/2020 9:13 PM
 */
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int main() {
    int *p = 0;
    int *q = 0;
    p = (int *) malloc(0);
    q = (int *) malloc(0);
    printf("p = %p\n", p);
    printf("q = %p\n", q);
    printf("sizeOf(p) = %llu\n", sizeof(*p));
    printf("sizeOf(q) = %llu\n", sizeof(*q));
    printf("_mize(p) = %d\n", _msize(p));
    printf("_mize(q) = %d\n", _msize(q));

    int *r = 0;
    r = (int *) malloc(24);
    printf("r = %p\n", r);
    printf("sizeOf(r) = %llu\n", sizeof(r));
    printf("_mize(r) = %d\n", _msize(r));

    int *s = 0;
    s = (int *) malloc(1);
    printf("s = %p\n", s);

    free(p);
    free(q);
    free(r);
    free(s);

    return 0;
}