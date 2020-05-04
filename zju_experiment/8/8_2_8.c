/**
 * 实验8-2-8 字符串排序 (20分)
 *
 * 本题要求编写程序，读入5个字符串，按由小到大的顺序输出。
 *
 * 输入格式：
 * 输入为由空格分隔的5个非空字符串，每个字符串不包括空格、制表符、换行符等空白字符，长度小于80。
 *
 * 输出格式：
 * 按照以下格式输出排序后的结果：
 *
 * After sorted:
 * 每行一个字符串
 *
 * 输入样例：
 * red yellow blue green white
 *
 * 输出样例：
 * After sorted:
 * blue
 * green
 * red
 * white
 * yellow
 *
 * @Author: Wang An
 * @Date: 5/4/2020 10:46 PM
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[]) {
    char **pString = (char **) malloc(5 * sizeof(char *));
    char *tmp = (char *) malloc(80 * sizeof(char));
    for (int i = 0; i < 5; i++) {
        pString[i] = (char *) malloc(80 * sizeof(char));
        scanf("%s", pString[i]);
        strcpy(tmp, pString[i]);
//        printf("pString[%d] = %s\n", i, pString[i]);
        int preIndex = i - 1;
        while (preIndex >= 0 && strcmp(pString[preIndex], tmp) > 0) {
            strcpy(pString[preIndex + 1], pString[preIndex]);
            preIndex--;
        }
        strcpy(pString[preIndex + 1], tmp);
    }

    printf("After sorted:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\n", pString[i]);
    }

    return 0;
}