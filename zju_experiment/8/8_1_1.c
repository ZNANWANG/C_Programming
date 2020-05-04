/**
 * 实验8-1-1 利用指针找最大值 (10分)
 *
 * 本题要求实现一个简单函数，找出两个数中的最大值。
 *
 * 函数接口定义：
 * void findmax( int *px, int *py, int *pmax );
 *
 * 其中px和py是用户传入的两个整数的指针。函数findmax应找出两个指针所指向的整数中的最大值，存放在pmax指向的位置。
 *
 * 裁判测试程序样例：
 * #include <stdio.h>
 *
 * void findmax( int *px, int *py, int *pmax );
 *
 * int main()
 * {
 *      int max, x, y;
 *
 *      scanf("%d %d", &x, &y);
 *      findmax( &x, &y, &max );
 *      printf("%d\n", max);
 *
 *      return 0;
 * }
 *
 * 输入样例：
 * 3 5
 *
 * 输出样例：
 * 5
 *
 * @Author: Wang An
 * @Date: 5/4/2020 12:47 PM
 */
#include <stdio.h>

void findmax(int *px, int *py, int *pmax);

int main() {
    int max, x, y;

    scanf("%d %d", &x, &y);
    findmax(&x, &y, &max);
    printf("%d\n", max);

    return 0;
}

void findmax(int *px, int *py, int *pmax) {
    *pmax = *px > *py ? *px : *py;
}