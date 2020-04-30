/**
 * 计算油费
 *
 * 现在90号汽油6.95元/升、93号汽油7.44元/升、97号汽油7.93元/升。为吸引顾客，某自动加油站推出了“自助服务”和“协助服务”两个服务等级，分别可得到
 * 5%和3%的折扣。
 *
 * 本题要求编写程序，根据输入顾客的加油量a，汽油品种b（90、93或97）和服务类型c（m - 自助，e - 协助），计算并输出应付款。
 *
 * 输入格式：
 * 输入在一行中给出两个整数和一个字符，分别表示顾客的加油量a，汽油品种b（90、93或97）和服务类型c（m - 自助，e - 协助）。
 *
 * 输出格式：
 * 在一行中输出应付款额，保留小数点后2位。
 *
 * 输入样例：
 * 40 97 m
 *
 * 输出样例：
 * 301.34
 *
 * @Author: Wang An
 * @Date: 4/30/2020 10:47 AM
 */
#include <stdio.h>

int main() {
    int amount = 0, gasoline = 0;
    char service = 'm';
    scanf("%d %d %c", &amount, &gasoline, &service);
    double price = 0;
    if (gasoline == 90) {
        price = 6.95;
    } else if (gasoline == 93) {
        price = 7.44;
    } else if (gasoline == 97) {
        price = 7.93;
    }
    double discount = 0;
    if (service == 'm') {
        discount = 0.05;

    } else if (service == 'e') {
        discount = 0.03;
    }
    double payment = amount * price * (1 - discount);
    printf("%.2lf\n", payment);

    return 0;
}