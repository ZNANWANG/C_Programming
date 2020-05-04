/**
 * 实验6-7 使用函数输出一个整数的逆序数 (20分)
 *
 * 本题要求实现一个求整数的逆序数的简单函数。
 *
 * 函数接口定义：
 * int reverse( int number );
 *
 * 其中函数reverse须返回用户传入的整型number的逆序数。
 *
 * 裁判测试程序样例：
 * #include <stdio.h>
 *
 * int reverse( int number );
 *
 * int main()
 * {
 *      int n;
 *
 *      scanf("%d", &n);
 *      printf("%d\n", reverse(n));
 *
 *      return 0;
 * }
 *
 * 输入样例：
 * -12340
 *
 * 输出样例：
 * -4321
 *
 * @Author: Wang An
 * @Date: 5/2/2020 11:24 PM
 */
#include <stdio.h>

int reverse(int number);

int main() {
    int n;

    scanf("%d", &n);
    printf("%d\n", reverse(n));

    return 0;
}

int reverse(int number) {
    int digit = 0, ret = 0;
    do {
        digit = number % 10;
        ret = ret * 10 + digit;
        number /= 10;
    } while (number != 0);

    return ret;
}