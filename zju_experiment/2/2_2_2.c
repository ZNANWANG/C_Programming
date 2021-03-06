/**
 * 实验2-2-2 计算摄氏温度 (10分)
 *
 * 给定一个华氏温度F，本题要求编写程序，计算对应的摄氏温度C。计算公式：C=5×(F−32)/9。题目保证输入与输出均在整型范围内。
 *
 * 输入格式:
 * 输入在一行中给出一个华氏温度。
 *
 * 输出格式:
 * 在一行中按照格式“Celsius = C”输出对应的摄氏温度C的整数值。
 *
 * 输入样例:
 * 150
 *
 * 输出样例:
 * Celsius = 65
 *
 * @Author: Wang An
 * @Date: 4/29/2020 5:29 PM
 */
#include <stdio.h>

int convertFToC(int fahr);

int main() {
    int fahr = 0;
    scanf("%d", &fahr);
    int celsius = convertFToC(fahr);
    printf("Celsius = %d\n", celsius);
    return 0;
}

int convertFToC(int fahr) {
    int celsius = 5 * (fahr - 32) / 9;
    return celsius;
}
