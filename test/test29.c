/**
 * 趋势科技选择题
 *
 * @Author: Wang An
 * @Date: 5/7/2020 8:55 PM
 */
#include <stdio.h>

void fun(int *p);

int main(){
    int r = 30;
    int *p = &r;
    fun(p);
    printf("%d\n", *p);
}

void fun(int *p) {
    int q = 20;
    p = &q;
}
