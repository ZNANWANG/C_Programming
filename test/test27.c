/**
 * 测试修改指针指向的字符串单个字符遇到的问题 —— 常量字符串不可修改
 *
 * @Author: Wang An
 * @Date: 5/6/2020 10:16 AM
 */
#include <stdio.h>

int main(int argc, const char *argv[]) {
    char arr[] = "Hello, world!";
    printf("arr = %s\n", arr);
    arr[0] = 'A';
    printf("arr = %s\n", arr);

    char *p = "Hello, world!";
    printf("p = %s\n", p);
    *p = 'A'; //程序异常退出，因为常量字符串不可被修改。
    printf("p = %s\n", p);
}