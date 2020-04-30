/**
 * 求整数的位数及各位数字之和
 *
 * 对于给定的正整数N，求它的位数及其各位数字之和。
 *
 * 输入格式：
 * 输入在一行中给出一个不超过10^9的正整数N。
 *
 * 输出格式：
 * 在一行中输出N的位数及其各位数字之和，中间用一个空格隔开。
 *
 * 输入样例：
 * 321
 *
 * 输出样例：
 * 3 6
 *
 * @Author: Wang An
 * @Date: 4/30/2020 12:05 PM
 */
#include <stdio.h>
int main(){
    int num = 0;
    scanf("%d", &num);
    int sum = 0;
    int digit = 0;
    int count = 0;
    do{
        digit = num % 10;
        sum += digit;
        num /= 10;
        count++;
    } while(num != 0);
    printf("%d %d\n", count, sum);

    return 0;
}

