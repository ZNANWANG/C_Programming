/**
 * 求1到100的和
 *
 * 本题要求编写程序，计算表达式 1 + 2 + 3 + ... + 100 的值。
 *
 * 输入格式：
 * 本题无输入。
 *
 * 输出格式：
 * 按照以下格式输出：
 *
 * sum = 累加和
 *
 * @Author: Wang An
 * @Date: 4/29/2020 10:02 PM
 */
#include <stdio.h>

int getSum(int begin, int end);

int main() {
    int begin = 0;
    int end = 100;
    int sum = getSum(begin, end);
    printf("sum = %d\n", sum);
    return 0;
}

int getSum(int begin, int end) {
    int sum = 0;
    for (int i = begin; i <= end; i++) {
        sum += i;
    }
    return sum;
}
