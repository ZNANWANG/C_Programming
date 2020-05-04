/**
 * 将字符串数组初始化为空字符串后，数组的每个元素都是'\0'。
 *
 * @Author: Wang An
 * @Date: 5/4/2020 9:26 PM
 */
#include <stdio.h>

int main(int argc, const char *argv[]) {
    char str[10] = "";
    for (int i = 0; i < 10; i++) {
        printf("str[%d] = %d\n", i, str[i]);
    }
}