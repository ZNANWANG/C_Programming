/**
 * 字符串常量本身就是一个指针
 *
 * @Author: Wang An
 * @Date: 5/5/2020 10:31 PM
 */
#include <stdio.h>

char *getStr(int n);

int main(int argc, const char *argv[]) {
    int n = 0;
    scanf("%d", &n);
    char *p = getStr(n);
    printf("p = %p\n", p); // 地址是字符串常量地址
    printf("&p = %p\n", &p); // 地址是存放指针的单元的地址
    if (p == NULL) printf("Wrong input!\n");
    else printf("%s\n", p);

    char arr[] = "Amazing!"; // 字符串也可以赋给数组
    printf("arr = %p\n", arr); // 地址是数组的首元素地址，并非是字符串常量地址
    printf("&arr = %p\n", &arr); // &arr表示的地址和arr一样
    printf("arr = %s\n", arr);

    return 0;
}

char *getStr(int n) {
    if (n == 0) {
        return NULL;
    } else {
        printf("the address fo \"Amazing!\" is %p\n", "Amazing!");
        return "Amazing!";
    }
}
