/**
 * 使用函数求余弦函数的近似值
 *
 * 本题要求实现一个函数，用下列公式求cos(x)的近似值，精确到最后一项的绝对值小于e：
 *
 * cos(x) = x^0/0! − x^2/2! + x^4/4! − x^6/6! + ⋯
 *
 * 函数接口定义：
 * double funcos( double e, double x );
 *
 * 其中用户传入的参数为误差上限e和自变量x；函数funcos应返回用给定公式计算出来、并且满足误差要求的cos(x)的近似值。输入输出均在双精度范围内。
 *
 * 裁判测试程序样例：
 * #include <stdio.h>
 * #include <math.h>
 *
 * double funcos( double e, double x );
 *
 * int main()
 * {
 *      double e, x;
 *
 *      scanf("%lf %lf", &e, &x);
 *      printf("cos(%.2f) = %.6f\n", x, funcos(e, x));
 *
 *      return 0;
 * }
 *
 * 输入样例：
 * 0.01 -3.14
 *
 * 输出样例：
 * cos(-3.14) = -0.999899
 *
 * @Author: Wang An
 * @Date: 5/1/2020 12:37 PM
 */
#include <stdio.h>
#include <math.h>

double funcos(double e, double x);

int main() {
    double e, x;

    scanf("%lf %lf", &e, &x);
    printf("cos(%.2f) = %.6f\n", x, funcos(e, x));

    return 0;
}

double funcos(double e, double x) {
    int flag = 1, count = 0;
    double sum = 0, fact = 1; // 注意fact精度很高，需要用double，不能使用int。
    while(1){
        if(count % 2 == 0) {
            double temp = pow(x, count) / fact;
//            printf("temp = %lf\n", temp);
            sum += temp * flag;
//            printf("sum = %lf\n", sum);
            if(temp < e){
                break;
            }
            flag *= -1;
        }
        count++;
        fact *= count;
    }
    return sum;
}