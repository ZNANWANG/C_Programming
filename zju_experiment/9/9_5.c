/**
 * 实验9-5 查找书籍 (20分)
 *
 * 给定n本书的名称和定价，本题要求编写程序，查找并输出其中定价最高和最低的书的名称和定价。
 *
 * 输入格式:
 * 输入第一行给出正整数n（<10），随后给出n本书的信息。每本书在一行中给出书名，即长度不超过30的字符串，随后一行中给出正实数价格。题目保证没有同样
 * 价格的书。
 *
 * 输出格式:
 * 在一行中按照“价格, 书名”的格式先后输出价格最高和最低的书。价格保留2位小数。
 *
 * 输入样例:
 * 3
 * Programming in C
 * 21.5
 * Programming in VB
 * 18.5
 * Programming in Delphi
 * 25.0
 *
 * 输出样例:
 * 25.00, Programming in Delphi
 * 18.50, Programming in VB
 *
 * @Author: Wang An
 * @Date: 5/5/2020 4:05 PM
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[]) {
    char **book = (char **) malloc(10 * sizeof(char *));
    double *price = (double *) malloc(10 * sizeof(double));
    int n = 0, maxIndex = 0, minIndex = 0;
    scanf("%d", &n);
//    printf("n = %d\n", n);
    getchar();

    for (int i = 0; i < n; i++) {
        book[i] = (char *) malloc(30 * sizeof(char));
        scanf("%[^\n]", book[i]); // gets() is deprecated
        getchar();
//        printf("book[%d] = %s\n", i, book[i]);
        scanf("%lf", &price[i]);
//        printf("price[%d] = %lf\n", i, price[i]);
        getchar();
        maxIndex = price[maxIndex] > price[i] ? maxIndex : i;
        minIndex = price[minIndex] < price[i] ? minIndex : i;
    }

    printf("%.2lf, %s\n", price[maxIndex], book[maxIndex]);
    printf("%.2lf, %s\n", price[minIndex], book[minIndex]);

    return 0;
}