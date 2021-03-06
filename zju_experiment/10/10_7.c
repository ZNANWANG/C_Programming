/**
 * 实验10-7 递归求Fabonacci数列 (10分)
 *
 * 本题要求实现求Fabonacci数列项的函数。Fabonacci数列的定义如下：
 *
 * f(n)=f(n−2)+f(n−1) (n≥2)，其中f(0)=0，f(1)=1。
 *
 * 函数接口定义：
 * int f( int n );
 *
 * 函数f应返回第n个Fabonacci数。题目保证输入输出在长整型范围内。建议用递归实现。
 *
 * 裁判测试程序样例：
 * #include <stdio.h>
 *
 * int f( int n );
 *
 * int main()
 * {
 *      int n;
 *
 *      scanf("%d", &n);
 *      printf("%d\n", f(n));
 *
 *      return 0;
 * }
 *
 * 输入样例：
 * 6
 *
 * 输出样例：
 * 8
 *
 * @Author: Wang An
 * @Date: 5/5/2020 9:54 PM
 */
#include <stdio.h>

int f(int n);

int main() {
    int n;

    scanf("%d", &n);
    printf("%d\n", f(n));

    return 0;
}

int f(int n) {
    if (n == 0 || n == 1) {
        return n;
    } else {
        return f(n - 1) + f(n - 2);
    }
}