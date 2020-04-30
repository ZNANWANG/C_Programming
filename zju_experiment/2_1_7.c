/**
 * 整数152的各位数字
 *
 * 本题要求编写程序，输出整数152的个位数字、十位数字和百位数字的值。
 *
 * 输入格式：
 * 本题无输入。
 *
 * 输出格式：
 * 按照以下格式输出：
 *
 * 152 = 个位数字 + 十位数字*10 + 百位数字*100
 *
 * @Author: Wang An
 * @Date: 4/29/2020 5:07 PM
 */
#include <stdio.h>

int main() {
    int number = 152;
    int onesPlace = number % 10;
    number /= 10;
    int tensPlace = number % 10;
    number /= 10;
    int hundredsPlace = number % 10;
    number /= 10;
    printf("152 = %d + %d*10 + %d*100\n", onesPlace, tensPlace, hundredsPlace);

    return 0;
}