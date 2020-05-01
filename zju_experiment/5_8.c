/**
 * 使用函数统计指定数字的个数
 *
 * 本题要求实现一个统计整数中指定数字的个数的简单函数。
 *
 * 函数接口定义：
 * int CountDigit( int number, int digit );
 *
 * 其中number是不超过长整型的整数，digit为[0, 9]区间内的整数。函数CountDigit应返回number中digit出现的次数。
 *
 * 裁判测试程序样例：
 * #include <stdio.h>
 *
 * int CountDigit( int number, int digit );
 *
 * int main()
 * {
 *      int number, digit;
 *
 *      scanf("%d %d", &number, &digit);
 *      printf("Number of digit %d in %d: %d\n", digit, number, CountDigit(number, digit));
 *
 *      return 0;
 * }
 *
 * 输入样例：
 * -21252 2
 *
 * 输出样例：
 * Number of digit 2 in -21252: 3
 *
 * @Author: Wang An
 * @Date: 5/1/2020 12:16 PM
 */
#include <stdio.h>

int CountDigit(int number, int digit);

int main() {
    int number, digit;

    scanf("%d %d", &number, &digit);
    printf("Number of digit %d in %d: %d\n", digit, number, CountDigit(number, digit));

    return 0;
}

int CountDigit(int number, int digit) {
    int t = 0, count = 0;
    if(number < 0){
        number *= -1;
    }
    do {
        t = number % 10;
        if (t == digit) {
            count++;
        }
        number /= 10;
    } while (number != 0);
    return count;
}