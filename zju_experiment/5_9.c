/**
 * 使用函数输出水仙花数
 *
 * 水仙花数是指一个N位正整数（N≥3），它的每个位上的数字的N次幂之和等于它本身。例如：153=1^3+5^3+3^3。本题要求编写两个函数，一个判断给定整数是
 * 否水仙花数，另一个按从小到大的顺序打印出给定区间(m,n)内所有的水仙花数。
 *
 * 函数接口定义：
 * int narcissistic( int number );
 * void PrintN( int m, int n );
 *
 * 函数narcissistic判断number是否为水仙花数，是则返回1，否则返回0。
 *
 * 函数PrintN则打印开区间(m, n)内所有的水仙花数，每个数字占一行。题目保证100≤m≤n≤10000。
 *
 * 裁判测试程序样例：
 * #include <stdio.h>
 *
 * int narcissistic( int number );
 * void PrintN( int m, int n );
 *
 * int main()
 * {
 *      int m, n;
 *
 *      scanf("%d %d", &m, &n);
 *      if ( narcissistic(m) ) printf("%d is a narcissistic number\n", m);
 *      PrintN(m, n);
 *      if ( narcissistic(n) ) printf("%d is a narcissistic number\n", n);
 *
 *      return 0;
 * }
 *
 * 输入样例：
 * 153 400
 *
 * 输出样例：
 * 153 is a narcissistic number
 * 370
 * 371
 *
 * @Author: Wang An
 * @Date: 5/1/2020 12:22 PM
 */
#include <stdio.h>

int narcissistic(int number);

void PrintN(int m, int n);

int main() {
    int m, n;

    scanf("%d %d", &m, &n);
    if (narcissistic(m)) printf("%d is a narcissistic number\n", m);
    PrintN(m, n);
    if (narcissistic(n)) printf("%d is a narcissistic number\n", n);

    return 0;
}

int narcissistic(int number) {
    int ret = 0;
    int digit = 0, sum = 0, count = 0, n = number;
    do {
        count++;
        n /= 10;
    } while (n != 0);

    n = number;
    do{
        digit = n % 10;
        int t = 1;
        for(int i = 0; i < count; i++){
            t *= digit;
        }
        sum += t;
        n /= 10;
    } while(n != 0);

    if(sum == number){
        ret = 1;
    }
    return ret;
}

void PrintN(int m, int n) {
    for(int i = m + 1; i < n; i++){
        if(narcissistic(i)){
            printf("%d\n", i);
        }
    }
}