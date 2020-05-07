/**
 * C语言中bool类型数据实质上是0或者1，使用前需要导入：#include <stdbool.h>
 *
 * @Author: Wang An
 * @Date: 4/26/2020 11:09 AM
 */
#include <stdio.h>
#include <stdbool.h>

int main() {
    bool t = true;
    printf("t = %d", t);
    return 0;
}