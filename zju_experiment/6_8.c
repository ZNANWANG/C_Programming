/**
 * 实验6-8 简单计算器 (20分)
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
 * @Date: 5/2/2020 4:51 PM
 */
#include <stdio.h>

void getResult();

void getResult1();

int main(int argc, const char *argv[]) {
    getResult();

    return 0;
}

void getResult1() {
    int operand, ret, isInvalid = 0;
    char operator = '0';
    scanf("%d", &ret);
    while (operator != '=') {
        scanf("%c", &operator);
        if (operator == '=') {
            break;
        }
        scanf("%d", &operand);
        if (operator == '+') {
            ret += operand;
        } else if (operator == '-') {
            ret -= operand;
        } else if (operator == '*') {
            ret *= operand;
        } else if (operator == '/') {
            if (operand != 0) {
                ret /= operand;
            } else {
                isInvalid = 1;
            }
        } else {
            isInvalid = 1;
        }
    }

    if (isInvalid) {
        printf("ERROR\n");
    } else {
        printf("%d\n", ret);
    }
}

void getResult() {
    int a, b;
    char c;
    scanf("%d", &a);
    while (scanf("%c", &c)) {
        switch (c) {
            case '+':
                scanf("%d", &b);
                a += b;
                break;
            case '-':
                scanf("%d", &b);
                a -= b;
                break;
            case '*':
                scanf("%d", &b);
                a *= b;
                break;
            case '/':
                scanf("%d", &b);
                if (b == 0) {
                    printf("ERROR");
                    return;
                } else {
                    a /= b;
                }
                break;
            case '=':
                printf("%d", a);
                return;
            default:
                printf("ERROR");
                return;
        }
    }
}
