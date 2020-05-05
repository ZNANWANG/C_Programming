/**
 * 实验9-7 找出总分最高的学生 (15分)
 *
 * 给定N个学生的基本信息，包括学号（由5个数字组成的字符串）、姓名（长度小于10的不包含空白字符的非空字符串）和3门课程的成绩（[0,100]区间内的整
 * 数），要求输出总分最高学生的姓名、学号和总分。
 *
 * 输入格式：
 * 输入在一行中给出正整数N（≤10）。随后N行，每行给出一位学生的信息，格式为“学号 姓名 成绩1 成绩2 成绩3”，中间以空格分隔。
 *
 * 输出格式：
 * 在一行中输出总分最高学生的姓名、学号和总分，间隔一个空格。题目保证这样的学生是唯一的。
 *
 * 输入样例：
 * 5
 * 00001 huanglan 78 83 75
 * 00002 wanghai 76 80 77
 * 00003 shenqiang 87 83 76
 * 10001 zhangfeng 92 88 78
 * 21987 zhangmeng 80 82 75
 *
 * 输出样例：
 * zhangfeng 10001 258
 *
 * @Author: Wang An
 * @Date: 5/5/2020 4:28 PM
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[]) {
    int n = 0;
    scanf("%d", &n);
    getchar();
    char **id = (char **) malloc(n * sizeof(char *));
    char **name = (char **) malloc(n * sizeof(char *));
    int *grade = (int *) malloc(n * sizeof(int));

    int maxIndex = 0, grade1 = 0, grade2 = 0, grade3 = 0;
    for (int i = 0; i < n; i++) {
        id[i] = (char *) malloc(6 * sizeof(char));
        name[i] = (char *) malloc(10 * sizeof(char));
        scanf("%s %s %d %d %d", id[i], name[i], &grade1, &grade2, &grade3);
//        getchar();
        grade[i] = grade1 + grade2 + grade3;
        maxIndex = grade[maxIndex] > grade[i] ? maxIndex : i;
    }

    printf("%s %s %d\n", name[maxIndex], id[maxIndex], grade[maxIndex]);

    return 0;
}