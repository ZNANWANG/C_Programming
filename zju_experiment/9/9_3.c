/**
 * 实验9-3 计算平均成绩 (15分)
 *
 * 给定N个学生的基本信息，包括学号（由5个数字组成的字符串）、姓名（长度小于10的不包含空白字符的非空字符串）和成绩（[0,100]区间内的整数），要求
 * 计算他们的平均成绩，并顺序输出平均线以下的学生名单。
 *
 * 输入格式：
 * 输入在一行中给出正整数N（≤10）。随后N行，每行给出一位学生的信息，格式为“学号 姓名 成绩”，中间以空格分隔。
 *
 * 输出格式：
 * 首先在一行中输出平均成绩，保留2位小数。然后按照输入顺序，每行输出一位平均线以下的学生的姓名和学号，间隔一个空格。
 *
 * 输入样例：
 * 5
 * 00001 zhang 70
 * 00002 wang 80
 * 00003 qian 90
 * 10001 li 100
 * 21987 chen 60
 *
 * 输出样例：
 * 80.00
 * zhang 00001
 * chen 21987
 *
 * @Author: Wang An
 * @Date: 5/5/2020 12:06 PM
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[]) {
    char **name = (char **) malloc(10 * sizeof(char *));
    char **id = (char **) malloc(10 * sizeof(char *));
    double *grade = (double *) malloc(10 * sizeof(double));
    int N = 0;
    scanf("%d", &N);
    double avg = 0, sum = 0;
    for (int i = 0; i < N; i++) {
        name[i] = (char *) malloc(80 * sizeof(char));
        id[i] = (char *) malloc(5 * sizeof(char));
        scanf("%s %s %lf", id[i], name[i], &grade[i]);
        sum += grade[i];
    }
    avg = sum / N;
    printf("%.2lf\n", avg);
    for (int i = 0; i < N; i++) {
        if (grade[i] < avg) {
            printf("%s %s\n", name[i], id[i]);
        }
    }

    return 0;
}