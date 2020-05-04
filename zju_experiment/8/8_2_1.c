/**
 * 实验8-2-1 找最小的字符串 (15分)
 *
 * 本题要求编写程序，针对输入的N个字符串，输出其中最小的字符串。
 *
 * 输入格式：
 * 输入第一行给出正整数N；随后N行，每行给出一个长度小于80的非空字符串，其中不会出现换行符，空格，制表符。
 *
 * 输出格式：
 * 在一行中用以下格式输出最小的字符串：
 *
 * Min is: 最小字符串
 *
 * 输入样例：
 * 5
 * Li
 * Wang
 * Zha
 * Jin
 * Xian
 *
 * 输出样例：
 * Min is: Jin
 *
 * @Author: Wang An
 * @Date: 5/4/2020 9:46 PM
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int mycmp(char *str1, char *str2);

int main(int argc, const char *argv[]) {
    int N = 0;
    scanf("%d", &N);
    char **p = (char **) malloc(N * sizeof(char *));
    if (p == NULL) {
        printf("malloc failed!\n");
        return -1;
    }

    p[0] = (char *) malloc(80 * sizeof(char)); // 动态分配内存
    scanf("%s", p[0]);
//    printf("p[%d] = %s\n", 0, p[0]);
    char *min = p[0];

    for (int i = 1; i < N; i++) {
        p[i] = (char *) malloc(80 * sizeof(char));
        scanf("%s", p[i]);
//        printf("p[%d] = %s\n", i, p[i]);
        if (mycmp(min, p[i]) > 0) {
            min = p[i];
        }
    }

    printf("Min is: %s\n", min);

    return 0;
}

int mycmp(char *str1, char *str2) {
    while (*str1 == *str2 && *str1) {
        str1++;
        str2++;
    }
    return *str1 - *str2;
}
