/**
 * 实验10-2 判断满足条件的三位数 (15分)
 *
 * 本题要求实现一个函数，统计给定区间内的三位数中有两位数字相同的完全平方数（如144、676）的个数。
 *
 * 函数接口定义：
 * int search( int n );
 *
 * 其中传入的参数int n是一个三位数的正整数（最高位数字非0）。函数search返回[101, n]区间内所有满足条件的数的个数。
 *
 * 裁判测试程序样例：
 * #include <stdio.h>
 * #include <math.h>
 *
 * int search( int n );
 *
 * int main()
 * {
 *      int number;
 *
 *      scanf("%d",&number);
 *      printf("count=%d\n",search(number));
 *
 *      return 0;
 * }
 *
 * 输入样例：
 * 500
 *
 * 输出样例：
 * count=6
 *
 * @Author: Wang An
 * @Date: 5/5/2020 9:02 PM
 */
#include <stdio.h>
#include <math.h>

#define eps 1e-6

int search(int n);

int isSpecialPerfectSquare(int num);

int main() {
    int number;

    scanf("%d", &number);
    printf("count=%d\n", search(number));

    return 0;
}


int search(int n) {
    int cnt = 0;
    for (int i = 101; i <= n; i++) {
        if (isSpecialPerfectSquare(i)) {
            cnt++;
//            printf("i = %d\n", i);
        }
    }
    return cnt;
}

int isSpecialPerfectSquare(int num) {
    int ret = 0, digit = 0, square = 0;
    square = sqrt(num);
    if (square * square == num) {
        int arr[10] = {};
        do {
            digit = num % 10;
            arr[digit]++;
            if (arr[digit] == 2) {
                ret = 1;
                break;
            }
            num /= 10;
        } while (num != 0);
    }

    return ret;
}
