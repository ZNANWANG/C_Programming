/**
 * 习题2.1 简单计算器 (20分)
 *
 * 模拟简单运算器的工作。假设计算器只能进行加减乘除运算，运算数和结果都是整数，四种运算符的优先级相同，按从左到右的顺序计算。
 *
 * 输入格式:
 * 输入在一行中给出一个四则运算算式，没有空格，且至少有一个操作数。遇等号”=”说明输入结束。
 *
 * 输出格式:
 * 在一行中输出算式的运算结果，或者如果除法分母为0或有非法运算符，则输出错误信息“ERROR”。
 *
 * 输入样例:
 * 1+2*10-10/2=
 *
 * 输出样例:
 * 10
 *
 * @Author: Wang An
 * @Date: 5/7/2020 3:00 PM
 */
#include <stdio.h>

int main(int argc, const char *argv[]){
    int operand1 = 0, operand2 = 0, isError = 0;
    char operator;
    scanf("%d%c", &operand1, &operator);
    while(operator != '='){
        scanf("%d", &operand2);
        if(operator == '+'){
            operand1 += operand2;
        } else if(operator == '-'){
            operand1 -= operand2;
        } else if(operator == '*'){
            operand1 *= operand2;
        } else if(operator == '/'){
            if(operand2 == 0){
                isError = 1;
                break;
            } else {
                operand1 /= operand2;
            }
        } else {
            isError = 1;
            break;
        }
        scanf("%c", &operator);
    }

    if(isError){
        printf("ERROR\n");
    } else {
        printf("%d\n", operand1);
    }

    return 0;
}