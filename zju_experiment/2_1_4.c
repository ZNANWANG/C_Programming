/**
 * 计算平均分
 *
 * 已知某位学生的数学、英语和计算机课程的成绩分别是87分、72分和93分，求该生3门课程的平均成绩（结果按整型输出）。
 *
 * 输入格式：
 * 本题无输入
 *
 * 输出格式：
 * 按照下列格式输出结果：
 *
 * math = 87, eng = 72, comp = 93, average = 计算所得的平均成绩
 *
 * @Author: Wang An
 * @Date: 4/29/2020 4:52 PM
 */
#include <stdio.h>

int getAverage(int math, int eng, int comp);

int main() {
    int math = 87;
    int eng = 72;
    int comp = 93;
    int average = getAverage(math, eng, comp);
    printf("math = 87, eng = 72, comp = 93, average = %d\n", average);

    return 0;
}

int getAverage(int math, int eng, int comp) {
    return (math + eng + comp) / 3;
}
