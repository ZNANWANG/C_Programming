/**
 * 测试数组越界
 *
 * @Author: Wang An
 * @Date: 5/1/2020 11:43 PM
 */
#include <stdio.h>

int main(int argc, const char *argv[]){
    char a[] = "hello";
    for(int i = 0; i < 10; i++){
        printf("a[%d] = %d\t", i, a[i]);
    }
    printf("\n");
}