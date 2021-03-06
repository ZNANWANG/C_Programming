/**
 * 实验8-1-9 输出学生成绩 (20分)
 *
 * 本题要求编写程序，根据输入学生的成绩，统计并输出学生的平均成绩、最高成绩和最低成绩。建议使用动态内存分配来实现。
 *
 * 输入格式：
 * 输入第一行首先给出一个正整数N，表示学生的个数。接下来一行给出N个学生的成绩，数字间以空格分隔。
 *
 * 输出格式：
 * 按照以下格式输出：
 *
 * average = 平均成绩
 * max = 最高成绩
 * min = 最低成绩
 *
 * 结果均保留两位小数。
 *
 * 输入样例：
 * 3
 * 85 90 95
 *
 * 输出样例：
 * average = 90.00
 * max = 95.00
 * min = 85.00
 *
 * @Author: Wang An
 * @Date: 5/4/2020 9:34 PM
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[]) {
    int n = 0;
    scanf("%d", &n);
    getchar();
    double *arr = (double *) malloc(n * sizeof(double));
    double avg = 0, max = -1, min = 101, sum = 0;
    for (int i = 0; i < n; i++) {
        scanf("%lf", arr + i);
        double num = *(arr + i);
        sum += num;
        max = max > num ? max : num;
        min = min < num ? min : num;
    }
    avg = sum / n;
    printf("average = %.2lf\n"
           "max = %.2lf\n"
           "min = %.2lf\n", avg, max, min);

    return 0;
}