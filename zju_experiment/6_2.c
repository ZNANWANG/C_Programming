/**
 * 实验6-2 分类统计字符个数 (15分)
 *
 * 本题要求实现一个函数，统计给定字符串中英文字母、空格或回车、数字字符和其他字符的个数。
 *
 * 函数接口定义：
 * void StringCount( char s[] );
 *
 * 其中 char s[] 是用户传入的字符串。函数StringCount须在一行内按照
 *
 * letter = 英文字母个数, blank = 空格或回车个数, digit = 数字字符个数, other = 其他字符个数
 *
 * 的格式输出。
 *
 * 裁判测试程序样例：
 * #include <stdio.h>
 * #define MAXS 15
 *
 * void StringCount( char s[] );
 * void ReadString( char s[] );
 *
 * int main()
 * {
 *      char s[MAXS];
 *
 *      ReadString(s);
 *      StringCount(s);
 *
 *      return 0;
 * }
 *
 * 输入样例：
 * aZ &
 * 09 Az
 *
 * 输出样例：
 * letter = 4, blank = 3, digit = 2, other = 1
 *
 * @Author: Wang An
 * @Date: 5/2/2020 10:17 PM
 */
#include <stdio.h>

#define MAXS 15

void StringCount(char s[]);

void ReadString(char s[]); /* 由裁判实现，略去不表 */

int main() {
    char s[MAXS];

    ReadString(s);
    StringCount(s);

    return 0;
}

void StringCount(char s[]) {
    int digit = 0;
    int letter = 0;
    int blank = 0;
    int other = 0;
    char c;
    int i = 0;
    while ((c = s[i++]) != '\0') {
        if (c >= '0' && c <= '9') {
            digit++;
        } else if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z') {
            letter++;
        } else if (c == ' ' || c == '\n') {
            blank++;
        } else {
            other++;
        }
    }
    printf("letter = %d, blank = %d, digit = %d, other = %d\n", letter, blank, digit, other);
}
