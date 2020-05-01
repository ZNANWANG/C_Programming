/**
 * 使用函数求最大公约数
 *
 * 本题要求实现一个计算两个数的最大公约数的简单函数。
 *
 * 函数接口定义：
 * int gcd( int x, int y );
 *
 * 其中x和y是两个正整数，函数gcd应返回这两个数的最大公约数。
 *
 * 裁判测试程序样例：
 * #include <stdio.h>
 *
 * int gcd( int x, int y );
 *
 * int main()
 * {
 *      int x, y;
 *
 *      scanf("%d %d", &x, &y);
 *      printf("%d\n", gcd(x, y));
 *
 *      return 0;
 * }
 *
 * 输入样例：
 * 32 72
 *
 * 输出样例：
 * 8
 *
 * 感谢集美大学蓝华斌同学修正测试数据！
 *
 * @Author: Wang An
 * @Date: 5/1/2020 1:30 PM
 */
#include <stdio.h>

int gcd( int x, int y );

int main()
{
    int x, y;

    scanf("%d %d", &x, &y);
    printf("%d\n", gcd(x, y));

    return 0;
}

int gcd( int x, int y ){
    int min = x < y ? x : y;
    int gcd = 0;
    for(int i = 1; i <= min; i++){
        if(x % i == 0 && y % i == 0){
            gcd = i;
        }
    }
    return gcd;
}