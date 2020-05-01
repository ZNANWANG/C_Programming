/**
 * 指针应用场景三：
 * 函数返回运算的状态，结果通过指针返回。
 * 常用的套路是让函数返回特殊的不在有效范围内的值来表示出错，例如0、-1；但是当任何数值都是可能的有效结果时，结果就得分开返回了。
 *
 * @Author: Wang An
 * @Date: 5/1/2020 5:04 PM
 */
#include <stdio.h>

int divide(int a, int b, double *c);

int main(){
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);
    printf("a = %d, b = %d\n", a, b);
    double c = 0;
    if(divide(a,b,&c)){
        printf("%d / %d = %.3lf\n", a, b, c);
    }

    return 0;
}

int divide(int a, int b, double *c) {
    int ret = 1;
    if(b == 0){
        ret = 0;
    } else {
        *c = a * 1.0/b;
    }

    return ret;
}
