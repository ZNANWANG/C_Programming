/**
 * 实验3-5 查询水果价格 (15分)
 *
 * 给定四种水果，分别是苹果（apple）、梨（pear）、桔子（orange）、葡萄（grape），单价分别对应为3.00元/公斤、2.50元/公斤、4.10元/公斤、
 * 10.20元/公斤。
 *
 * 首先在屏幕上显示以下菜单：
 *
 * [1] apple
 * [2] pear
 * [3] orange
 * [4] grape
 * [0] exit
 *
 * 用户可以输入编号1~4查询对应水果的单价。当连续查询次数超过5次时，程序应自动退出查询；不到5次而用户输入0即退出；输入其他编号，显示价格为0。
 *
 * 输入格式:
 * 输入在一行中给出用户连续输入的若干个编号。
 *
 * 输出格式:
 * 首先在屏幕上显示菜单。然后对应用户的每个输入，在一行中按格式“price = 价格”输出查询结果，其中价格保留两位小数。当用户连续查询次数超过5次、或
 * 主动输入0时，程序结束。
 *
 * 输入样例1:
 * 3 -1 0 2
 *
 * 输出样例1:
 * [1] apple
 * [2] pear
 * [3] orange
 * [4] grape
 * [0] exit
 * price = 4.10
 * price = 0.00
 *
 * 输入样例2:
 * 1 2 3 3 4 4 5 6 7 8
 *
 * 输出样例2:
 * [1] apple
 * [2] pear
 * [3] orange
 * [4] grape
 * [0] exit
 * price = 3.00
 * price = 2.50
 * price = 4.10
 * price = 4.10
 * price = 10.20
 *
 * @Author: Wang An
 * @Date: 4/30/2020 9:32 AM
 */
#include <stdio.h>

void getResult();

void getResult1();

int main() {
    getResult1();

    return 0;
}

/**
 * 对比getResult1()和getResult()的循环结构。
 */
void getResult1() {
    printf("[1] apple\n"
           "[2] pear\n"
           "[3] orange\n"
           "[4] grape\n"
           "[0] exit\n");
    double price[4] = {3.00, 2.50, 4.10, 10.20};
    int a;
    int count = 0;

    do {
        scanf("%d", &a);
        if (a == 0) { // 除了第一轮以外都是多余的判断，不如while循环体。
            break;
        } else if (a > 0 && a < 5) {
            printf("price = %.2lf\n", price[a - 1]);
        } else {
            printf("price = 0.00\n");
        }
        count++;
    } while (a != 0 && count < 5);
}

void getResult() {
    printf("[1] apple\n"
           "[2] pear\n"
           "[3] orange\n"
           "[4] grape\n"
           "[0] exit\n");
    double price[4] = {3.00, 2.50, 4.10, 10.20};
    int a;
    int count = 0;
    scanf("%d", &a);
    while (a != 0 && count < 5) {
        if (a > 0 && a < 5) {
            printf("price = %.2lf\n", price[a - 1]);
        } else {
            printf("price = 0.00\n");
        }
        count++;
        scanf("%d", &a);
    }
}
