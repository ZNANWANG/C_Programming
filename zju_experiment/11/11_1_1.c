/**
 * 实验11-1-1 英文单词排序 (25分)
 *
 * 本题要求编写程序，输入若干英文单词，对这些单词按长度从小到大排序后输出。如果长度相同，按照输入的顺序不变。
 *
 * 输入格式：
 * 输入为若干英文单词，每行一个，以#作为输入结束标志。其中英文单词总数不超过20个，英文单词为长度小于10的仅由小写英文字母组成的字符串。
 *
 * 输出格式：
 * 输出为排序后的结果，每个单词后面都额外输出一个空格。
 *
 * 输入样例：
 * blue
 * red
 * yellow
 * green
 * purple
 * #
 *
 * 输出样例：
 * red blue green yellow purple
 *
 * @Author: Wang An
 * @Date: 5/5/2020 11:48 PM
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int mycmp(char *str1, char *str2);

int main(int argc, const char *argv[]) {
    char **words = (char **) malloc(20 * sizeof(char *));
    int idx = 0, preIndex = 0;
    words[idx] = (char *) malloc(10 * sizeof(char));
    scanf("%s", words[idx]);
//    printf("words[%d] = %s\n", idx, words[idx]);
    char *tmp = (char *) malloc(10 * sizeof(char));
    while (strcmp(words[idx], "#") != 0) {
        preIndex = idx - 1;
        strcpy(tmp, words[idx]);
        while (preIndex >= 0 && mycmp(words[preIndex], tmp) > 0) {
            strcpy(words[preIndex + 1], words[preIndex]);
            preIndex--;
        }
        strcpy(words[preIndex + 1], tmp);
        idx++;
        words[idx] = (char *) malloc(10 * sizeof(char));
        scanf("%s", words[idx]);
//        printf("words[%d] = %s\n", idx, words[idx]);
    }

    for (int i = 0; i < idx; i++) {
        printf("%s ", words[i]);
    }

    free(words);
    free(tmp);

    return 0;
}

int mycmp(char *str1, char *str2) {
    int ret = -1;
    if (strlen(str1) > strlen(str2)) {
        ret = 1;
    }
    return ret;
}
