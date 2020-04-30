/**
 * 计算个人所得税
 *
 * 假设个人所得税为：税率×(工资−1600)。请编写程序计算应缴的所得税，其中税率定义为：
 *
 * 当工资不超过1600时，税率为0；
 * 当工资在区间(1600, 2500]时，税率为5%；
 * 当工资在区间(2500, 3500]时，税率为10%；
 * 当工资在区间(3500, 4500]时，税率为15%；
 * 当工资超过4500时，税率为20%。
 *
 * 输入格式:
 * 输入在一行中给出非负工资。
 *
 * 输出格式:
 * 在一行输出个人所得税，精确到小数点后2位。
 *
 * 输入样例1:
 * 1600
 *
 * 输出样例1:
 * 0.00
 *
 * 输入样例2:
 * 1601
 *
 * 输出样例2:
 * 0.05
 *
 * 输入样例3:
 * 3000
 *
 * 输出样例3:
 * 140.00
 *
 * 输入样例4:
 * 4000
 *
 * 输出样例4:
 * 360.00
 *
 * 输入样例5:
 * 5000
 *
 * 输出样例5:
 * 680.00
 *
 * @Author: Wang An
 * @Date: 4/30/2020 9:48 AM
 */
#include <stdio.h>

int main() {
    double salary = 0;
    scanf("%lf", &salary);
    double rate = 0;
    double tax;
    if (salary < 0) {
        tax = 0;
    } else if (salary <= 1600) {
        tax = 0;
    } else if (salary <= 2500) {
        rate = 0.05;
        tax = (salary - 1600) * rate;
    } else if (salary <= 3500) {
        rate = 0.10;
        tax = (salary - 1600) * rate;
    } else if (salary < 4500) {
        rate = 0.15;
        tax = (salary - 1600) * rate;
    } else {
        rate = 0.20;
        tax = (salary - 1600) * rate;
    }

    printf("%.2lf", tax);

    return 0;
}