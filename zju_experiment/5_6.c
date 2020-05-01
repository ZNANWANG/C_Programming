/**
 * 使用函数判断完全平方数
 *
 * 本题要求实现一个判断整数是否为完全平方数的简单函数。
 *
 * 函数接口定义：
 * int IsSquare( int n );
 *
 * 其中n是用户传入的参数，在长整型范围内。如果n是完全平方数，则函数IsSquare必须返回1，否则返回0。
 *
 * 裁判测试程序样例：
 * #include <stdio.h>
 * #include <math.h>
 *
 * int IsSquare( int n );
 *
 * int main()
 * {
 *      int n;
 *
 *      scanf("%d", &n);
 *      if ( IsSquare(n) ) printf("YES\n");
 *      else printf("NO\n");
 *
 *      return 0;
 * }
 *
 * 输入样例1：
 * 10
 *
 * 输出样例1：
 * NO
 *
 * 输入样例2：
 * 100
 *
 * 输出样例2：
 * YES
 *
 * 鸣谢安阳师范学院段晓云老师修正数据~
 *
 * @Author: Wang An
 * @Date: 5/1/2020 12:09 PM
 */
#include <stdio.h>
#include <math.h>

int IsSquare(int n);

int main() {
    int n;

    scanf("%d", &n);
    if (IsSquare(n)) printf("YES\n");
    else printf("NO\n");

    return 0;
}

int IsSquare(int n) {
    int ret = 0;
    int t = sqrt(n);
    if(pow(t, 2) == n){
        ret = 1;
    }
    return ret;
}