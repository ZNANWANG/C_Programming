/**
 * 实验3-7 统计学生成绩 (15分)
 *
 * 本题要求编写程序读入N个学生的百分制成绩，统计五分制成绩的分布。百分制成绩到五分制成绩的转换规则：
 *
 * 大于等于90分为A；
 * 小于90且大于等于80为B；
 * 小于80且大于等于70为C；
 * 小于70且大于等于60为D；
 * 小于60为E。
 *
 * 输入格式:
 * 输入在第一行中给出一个正整数N（≤1000），即学生人数；第二行中给出N个学生的百分制成绩，其间以空格分隔。
 *
 * 输出格式:
 * 在一行中输出A、B、C、D、E对应的五分制成绩的人数分布，数字间以空格分隔，行末不得有多余空格。
 *
 * 输入样例:
 * 7
 * 77 54 92 73 60 65 69
 *
 * 输出样例:
 * 1 0 2 3 1
 *
 * @Author: Wang An
 * @Date: 4/30/2020 10:01 AM
 */
#include <stdio.h>

void getResult();

void getResult1();

int main() {
    getResult1();

    return 0;
}

/**
 * 对比getResult1()和getResult()的循环结构。
 */
void getResult1() {
    int n = 0;
    scanf("%d", &n);
    int A = 0, B = 0, C = 0, D = 0, E = 0;
    int mark = 0;
    int count = 0;
    do {
        scanf("%d", &mark);
        if (mark < 0) {

        } else if (mark < 60) {
            E++;
        } else if (mark < 70) {
            D++;
        } else if (mark < 80) {
            C++;
        } else if (mark < 90) {
            B++;
        } else if (mark <= 100) {
            A++;
        }
        count++;
    } while (count < n);
    printf("%d %d %d %d %d", A, B, C, D, E);
}

void getResult() {
    int n = 0;
    scanf("%d", &n);
    int A = 0, B = 0, C = 0, D = 0, E = 0;
    int mark = 0;
    scanf("%d", &mark);
    for (int i = 0; i < n; i++) {
        if (mark < 0) {

        } else if (mark < 60) {
            E++;
        } else if (mark < 70) {
            D++;
        } else if (mark < 80) {
            C++;
        } else if (mark < 90) {
            B++;
        } else if (mark <= 100) {
            A++;
        }

        // 需要额外的判断，不如do-while循环体。
        if (i < n - 1) {
            scanf("%d", &mark);
        }
    }
    printf("%d %d %d %d %d", A, B, C, D, E);
}

