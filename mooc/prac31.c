/**
 * @Author: Wang An
 * @Date: 4/29/2020 12:44 AM
 */
#include <stdio.h>
int main(){
    int a[] = {5, 15, 34, 54, 14, 2, 52, 72};
    int *p = &a[1];
    printf("%d\n", p[0]);
}