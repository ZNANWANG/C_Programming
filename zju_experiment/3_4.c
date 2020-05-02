/**
 * 实验3-4 统计字符 (15分)
 *
 * 本题要求编写程序，输入10个字符，统计其中英文字母、空格或回车、数字字符和其他字符的个数。
 *
 * 输入格式:
 * 输入为10个字符。最后一个回车表示输入结束，不算在内。
 *
 * 输出格式:
 * 在一行内按照
 *
 * letter = 英文字母个数, blank = 空格或回车个数, digit = 数字字符个数, other = 其他字符个数的格式输出。
 *
 * 输入样例:
 * aZ &
 * 09 Az
 *
 * 输出样例:
 * letter = 4, blank = 3, digit = 2, other = 1
 *
 * @Author: Wang An
 * @Date: 4/30/2020 9:19 AM
 */
#include <stdio.h>

int main() {
    char array[10];
    scanf("%c%c%c%c%c%c%c%c%c%c", &array[0], &array[1], &array[2], &array[3], &array[4],
          &array[5], &array[6], &array[7], &array[8], &array[9]);
    int letter = 0;
    int digit = 0;
    int blank = 0;
    int other = 0;
    for (int i = 0; i < 10; i++) {
        if (array[i] >= '0' && array[i] <= '9') {
            digit++;
        } else if ((array[i] >= 'a' && array[i] <= 'z') || (array[i] >= 'A' && array[i] <= 'Z')) {
            letter++;
        } else if (array[i] == ' ' || array[i] == '\n') {
            blank++;
        } else {
            other++;
        }
    }
    printf("letter = %d, blank = %d, digit = %d, other = %d\n", letter, blank, digit, other);

    return 0;
}