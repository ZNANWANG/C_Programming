/**
 * 实验2-1-6 计算华氏温度 (5分)
 *
 * 本题要求编写程序，计算摄氏温度26°C 对应的华氏温度。计算公式：F=9×C/5+32，式中：C表示摄氏温度，F表示华氏温度，输出数据要求为整型。
 *
 * 输入格式:
 * 本题目没有输入。
 *
 * 输出格式:
 * 按照下列格式输出
 *
 * celsius = 26, fahr = 对应的华氏温度整数值
 *
 * @Author: Wang An
 * @Date: 4/29/2020 5:00 PM
 */
#include <stdio.h>

int convertCToF(int celsius);

int main() {
    int celsius = 26;
    int fahr = convertCToF(celsius);
    printf("celsius = 26, fahr = %d\n", fahr);

    return 0;
}

int convertCToF(int celsius) {
    int fahr = 0;
    fahr = 9 * celsius / 5 + 32;
    return fahr;
}
