/**
 * 实验2-4-1 统计各位数字之和是5的数 (20分)
 *
 * 本题要求实现两个函数：一个函数判断给定正整数的各位数字之和是否等于5；另一个函数统计给定区间内有多少个满足上述要求的整数，并计算这些整数的和。
 *
 * 函数接口定义：
 * int is( int number );
 * void count_sum( int a, int b );
 *
 * 函数is判断number的各位数字之和是否等于5，是则返回1，否则返回0。
 *
 * 函数count_sum利用函数is统计给定区间[a, b]内有多少个满足上述要求（即令is返回1）的整数，并计算这些整数的和。最后按照格式
 *
 * count = 满足条件的整数个数, sum = 这些整数的和
 *
 * 进行输出。题目保证0<a≤b≤10000。
 *
 * 裁判测试程序样例：
 * #include <stdio.h>
 *
 * int is( int number );
 * void count_sum( int a, int b );
 *
 * int main()
 * {
 *      int a, b;
 *
 *      scanf("%d %d", &a, &b);
 *      if (is(a)) printf("%d is counted.\n", a);
 *      if (is(b)) printf("%d is counted.\n", b);
 *      count_sum(a, b);
 *
 *      return 0;
 * }
 *
 * 输入样例：
 * 104 999
 *
 * 输出样例：
 * 104 is counted.
 * count = 15, sum = 3720
 *
 * @Author: Wang An
 * @Date: 5/1/2020 11:17 AM
 */
#include <stdio.h>

int is(int number);

void count_sum(int a, int b);

int main() {
    int a, b;

    scanf("%d %d", &a, &b);
    if (is(a)) printf("%d is counted.\n", a);
    if (is(b)) printf("%d is counted.\n", b);
    count_sum(a, b);

    return 0;
}

int is(int number) {
    int ret = 0, digit = 0, sum = 0;
    do {
        digit = number % 10;
        sum += digit;
        number /= 10;
    } while (number != 0);
    if (sum == 5) {
        ret = 1;
    }
    return ret;
}

void count_sum(int a, int b) {
    int count = 0, sum = 0;
    for (int i = a; i <= b; i++) {
        if (is(i)) {
            count++;
            sum += i;
        }
    }
    printf("count = %d, sum = %d", count, sum);
}
