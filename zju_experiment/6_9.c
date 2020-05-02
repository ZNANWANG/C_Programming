/**
 * 实验6-9 统计一行文本的单词个数 (15分)
 *
 * 本题目要求编写程序统计一行字符中单词的个数。所谓“单词”是指连续不含空格的字符串，各单词之间用空格分隔，空格数可以是多个。
 *
 * 输入格式:
 * 输入给出一行字符。
 *
 * 输出格式:
 * 在一行中输出单词个数。
 *
 * 输入样例:
 * Let's go to room 209.
 *
 * 输出样例:
 * 5
 *
 * @Author: Wang An
 * @Date: 5/2/2020 6:13 PM
 */
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

#define STOP '\n'

void countNumberOfWords();

void countNumberOfWords1();

int main(int argc, const char *argv[]) {
    countNumberOfWords1();

    return 0;
}

void countNumberOfWords1() {
    int num_words = 0;
    char c;
    bool word_in = false;
    while ((c = getchar()) != STOP) {
        if (!word_in && !isspace(c)) {
            num_words++;
            word_in = true;
        }
        if (isspace(c)) {
            word_in = false;
        }
    }
    printf("%d\n", num_words);

}

void countNumberOfWords() {
    int cnt = 0;
    int letter = 0;
    char c;
    scanf("%c", &c);
    while (c != '\n') {
        if (c == ' ') {
            if (letter > 0) {
                cnt++;
                letter = 0;
            }
        } else {
            letter++;
        }
        scanf("%c", &c);
    }

    if (letter > 0) {
        cnt++;
    }

    printf("%d", cnt);
}
