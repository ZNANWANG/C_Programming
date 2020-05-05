/**
 * 测试printf()对于字符数组和整形数组的输出
 *
 * 注：
 * 例一：printf("%d\n", *p);
 * printf中的%d参数要求你提供一个整数，而p是个指针，它指向的是整数，这时用*p表示p指向的整数。如果你用p的话，将把指针的地址取值进行输出。
 *
 * 例二：printf("%s\n", p);
 * printf中的%s参数要求你提供一个指针，而p就是一个指针变量，可以直接写变量名p
 *
 * 所以，参数使用时要满足printf对参数的要求。
 *
 * @Author: Wang An
 * @Date: 5/5/2020 12:22 PM
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[]) {
    int *nums = (int *) malloc(3 * sizeof(int)); // 长度为3的整型数组
    char *chars = (char *) malloc(3 * sizeof(char)); // 长度为3的字符数组
    scanf("%d %s", nums, chars); // 输出整型数组首位元素和字符数组全部值
    printf("%d %s\n", *nums, chars); // 输出字符数组和整数型数组的区别
    printf("%p\n", nums); // 输出整型数组首地址（十六进制）
    printf("%d\n", nums); // 输出整型数组首地址值（十进制）
    printf("%p\n", &nums[0]); // 输出整型数组首地址（十六进制）
    printf("%d\n", *nums); // 输出整型数组首位元素
    printf("%d\n", nums[0]); // 输出整型数组首位元素
    printf("%p\n", chars); // 输出常量空间首地址（十六进制），较小
    printf("%p\n", &chars); // 输出指针存放地址，较大
    printf("%d\n", chars); // 输出常量空间首地址值（十进制）
    printf("%d\n", &chars[0]); // 输出常量空间首地址值（十进制）
    printf("%c\n", chars); // 输出常量空间十六进制地址后两位数作为ASCII码代表的字符
    printf("%c\n", chars[0]); // 输出字符数组首位元素

    return 0;
}