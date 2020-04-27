/**
 * 输出数组中大于算术平均数的整数
 *
 * @Author: Wang An
 * @Date: 4/26/2020 9:53 PM
 */
#include <stdio.h>

void getGreatNumber() {
    int count = 0;
    int number;
    int sum = 0;
    int nums[100];
    //计算算术平均数
    scanf("%d", &number);
    while (number != -1) {
        nums[count] = number;
        count++;
        sum += number;
        scanf("%d", &number);
    }
    double average = 1.0 * sum / count;
    printf("The average number is %f\n", average);

    //输出数组中大于算术平均数的数字
    for (int i = 0; i < count; i++) {
        if (nums[i] > average) {
            printf("%d ", nums[i]);
        }
    }
    printf("\n");
}

int main() {
    getGreatNumber();
    return 0;
}