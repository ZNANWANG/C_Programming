/**
 * 指针最常见错误 —— 未初始化就开始使用
 *
 * @Author: Wang An
 * @Date: 5/1/2020 5:12 PM
 */
#include <stdio.h>

int main(){
    int a = 6;
    int *p;
//    int *p = 0; // 当指针指向不明时，有可能指向不可读写的地方，例如地址为0的地方，这个时候就会出错。
    *p = a;
    printf("%d\n", *p);

    return 0;
}