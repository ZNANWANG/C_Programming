/**
 * 实验2-2-8 阶梯电价 (15分)
 *
 * 为了提倡居民节约用电，某省电力公司执行“阶梯电价”，安装一户一表的居民用户电价分为两个“阶梯”：月用电量50千瓦时（含50千瓦时）以内的，电价为
 * 0.53元/千瓦时；超过50千瓦时的，超出部分的用电量，电价上调0.05元/千瓦时。请编写程序计算电费。
 *
 * 输入格式:
 * 输入在一行中给出某用户的月用电量（单位：千瓦时）。
 *
 * 输出格式:
 * 在一行中输出该用户应支付的电费（元），结果保留两位小数，格式如：“cost = 应付电费值”；若用电量小于0，则输出"Invalid Value!"。
 *
 * 输入样例1:
 * 10
 *
 * 输出样例1:
 * cost = 5.30
 *
 * 输入样例2:
 * 100
 *
 * 输出样例2:
 * cost = 55.50
 *
 * @Author: Wang An
 * @Date: 4/29/2020 6:46 PM
 */
#include <stdio.h>

double getCost(int kwh);

int main() {
    int kwh = 0;
    scanf("%d", &kwh);
    double cost = getCost(kwh);
    if (cost == -1) {
        printf("Invalid Value!\n");
    } else {
        printf("cost = %.2f\n", cost);
    }

    return 0;
}

double getCost(int kwh) {
    double cost = 0;
    if (kwh < 0) {
        cost = -1;
    } else if (kwh <= 50) {
        cost = kwh * 0.53;
    } else {
        cost = 50 * 0.53 + (kwh - 50) * 0.58;
    }
    return cost;
}
