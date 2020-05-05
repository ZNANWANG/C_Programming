/**
 * 实验10-1 圆形体体积计算器 (20分)
 *
 * 本题要求实现一个常用圆形体体积的计算器。计算公式如下：
 *
 * 球体体积 V=4/3×​​πr^3 ，其中r是球体半径。圆柱体体积 V=πhr^​2，其中r是底圆半径，h是高。圆锥体体积 V=1/3×πhr^2，其中r是底圆半径，h是高。
 *
 * 输入格式：
 * 在每次计算之前，要求输出如下界面：
 *
 * 1-Ball
 * 2-Cylinder
 * 3-Cone
 * other-Exit
 * Please enter your command:
 *
 * 然后从标准输入读进一个整数指令。
 *
 * 输出格式：
 * 如果读入的指令是1或2或3，则执行相应的体积计算；如果是其他整数，则程序结束运行。
 *
 * 当输入为1时，在计算球体体积之前，打印Please enter the radius:，然后读入球体半径，完成计算；
 * 当输入为2时，在计算圆柱体体积之前，打印Please enter the radius and the height:，然后读入底圆半径和高，完成计算；
 * 当输入为3时，在计算圆锥体体积之前，打印Please enter the radius and the height:，然后读入底圆半径和高，完成计算。
 * 计算结果在一行内输出，保留小数点后两位。
 *
 * 输入样例：
 * 1
 * 2
 * 3
 * 2.4 3
 * 0
 *
 * 输出样例：
 * 1-Ball
 * 2-Cylinder
 * 3-Cone
 * other-Exit
 * Please enter your command:
 * Please enter the radius:
 * 33.51
 * 1-Ball
 * 2-Cylinder
 * 3-Cone
 * other-Exit
 * Please enter your command:
 * Please enter the radius and the height:
 * 18.10
 * 1-Ball
 * 2-Cylinder
 * 3-Cone
 * other-Exit
 * Please enter your command:
 *
 * @Author: Wang An
 * @Date: 5/5/2020 8:38 PM
 */
#include <stdio.h>
#include <math.h>

#define PI acos(-1)

int main(int argc, const char *argv[]) {
    double cnd = 0, radius = 0, height = 0, volume = 0;
    printf("1-Ball\n"
           "2-Cylinder\n"
           "3-Cone\n"
           "other-Exit\n"
           "Please enter your command:\n");
    scanf("%lf", &cnd);
    while (cnd == 1 || cnd == 2 || cnd == 3) {
        if (cnd == 1) {
            printf("Please enter the radius:\n");
            scanf("%lf", &radius);
            volume = 4.0 / 3 * PI * pow(radius, 3);
            printf("%.2lf\n", volume);
        } else if (cnd == 2) {
            printf("Please enter the radius and the height:\n");
            scanf("%lf%lf", &radius, &height);
            volume = PI * pow(radius, 2) * height;
            printf("%.2lf\n", volume);
        } else if (cnd == 3) {
            printf("Please enter the radius and the height:\n");
            scanf("%lf%lf", &radius, &height);
            volume = 1.0 / 3 * PI * pow(radius, 2) * height;
            printf("%.2lf\n", volume);
        }
        printf("1-Ball\n"
               "2-Cylinder\n"
               "3-Cone\n"
               "other-Exit\n"
               "Please enter your command:\n");
        scanf("%lf", &cnd);
    }

    return 0;
}