/**
 * 实验8-2-6 分类统计各类字符个数 (15分)
 *
 * 本题要求实现一个函数，统计给定字符串中的大写字母、小写字母、空格、数字以及其它字符各有多少。
 *
 * 函数接口定义：
 * void StringCount( char *s );
 *
 * 其中 char *s 是用户传入的字符串。函数StringCount须在一行内按照大写字母个数 小写字母个数 空格个数 数字个数 其它字符个数的格式输出。
 *
 * 裁判测试程序样例：
 * #include <stdio.h>
 * #define MAXS 15
 *
 * void StringCount( char *s );
 * void ReadString( char *s ); // 由裁判实现，略去不表
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
 * aZ&*?
 * 093 Az
 *
 * 输出样例：
 * 2 2 1 3 4
 *
 * @Author: Wang An
 * @Date: 5/4/2020 8:57 PM
 */
#include <stdio.h>

#define MAXS 15

void StringCount(char *s);

void ReadString(char *s); /* 由裁判实现，略去不表 */

int main() {
    char s[MAXS];

    ReadString(s);
    StringCount(s);

    return 0;
}

void StringCount(char *s) {
    int digit = 0;
    int lower = 0;
    int upper = 0;
    int blank = 0;
    int other = 0;
    while (*s) {
        if (*s >= 'A' && *s <= 'Z') {
            upper++;
        } else if (*s >= 'a' && *s <= 'z') {
            lower++;
        } else if (*s >= '0' && *s <= '9') {
            digit++;
        } else if (*s == ' ') {
            blank++;
        } else {
            other++;
        }
    }
    printf("%d %d %d %d %d\n", upper, lower, blank, digit, other);
}