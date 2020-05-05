/**
 * 实验10-9 十进制转换二进制 (15分)
 *
 * 本题要求实现一个函数，将正整数n转换为二进制后输出。
 *
 * 函数接口定义：
 * void dectobin( int n );
 *
 * 函数dectobin应在一行中打印出二进制的n。建议用递归实现。
 *
 * 裁判测试程序样例：
 * #include <stdio.h>
 *
 * void dectobin( int n );
 *
 * int main()
 * {
 *      int n;
 *
 *      scanf("%d", &n);
 *      dectobin(n);
 *
 *      return 0;
 * }
 *
 * 输入样例：
 * 10
 *
 * 输出样例：
 * 1010
 *
 * @Author: Wang An
 * @Date: 5/5/2020 10:00 PM
 */
#include <stdio.h>

void dectobin(int n);

int main() {
    int n;

    scanf("%d", &n);
    dectobin(n);

    return 0;
}

void dectobin(int n) {
    if (n == 1 || n == 0) {
        printf("%d", n);
    } else {
        dectobin(n / 2);
        printf("%d", n % 2);
    }
}