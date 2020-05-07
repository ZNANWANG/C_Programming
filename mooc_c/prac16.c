/**
 * 一种错误的遍历方式导致死循环
 *
 * @Author: Wang An
 * @Date: 4/27/2020 10:39 AM
 */
#include <stdio.h>

int main() {
    int nums[3];
    //错误的遍历方式，导致数组越界，a[3]=0就相当于i=0，所以就会导致代码无限循环。
    for (int i = 0; i <= 3; i++) {
        nums[i] = 0;
        printf("nums[%d] = %d\n", i, nums[i]);
    }

    //正确的遍历方式，关键在于防止数组越界。
    for (int i = 0; i < sizeof(nums) / sizeof(nums[0]); i++) {
        nums[i] = 0;
        printf("nums[%d] = %d\n", i, nums[i]);
    }
}