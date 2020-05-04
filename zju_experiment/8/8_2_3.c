/**
 * 实验8-2-3 删除字符 (20分)
 *
 * 本题要求实现一个删除字符串中的指定字符的简单函数。
 *
 * 函数接口定义：
 * void delchar( char *str, char c );
 *
 * 其中char *str是传入的字符串，c是待删除的字符。函数delchar的功能是将字符串str中出现的所有c字符删除。
 *
 * 裁判测试程序样例：
 * #include <stdio.h>
 * #define MAXN 20
 *
 * void delchar( char *str, char c );
 * void ReadString( char s[] ); // 由裁判实现，略去不表
 *
 * int main()
 * {
 *      char str[MAXN], c;
 *
 *      scanf("%c\n", &c);
 *      ReadString(str);
 *      delchar(str, c);
 *      printf("%s\n", str);
 *
 *      return 0;
 * }
 * 输入样例：
 * a
 * happy new year
 *
 * 输出样例：
 * hppy new yer
 *
 * @Author: Wang An
 * @Date: 5/4/2020 8:04 PM
 */
#include <stdio.h>

#define MAXN 20

void delchar(char *str, char c);

void ReadString(char s[]); /* 由裁判实现，略去不表 */

int main() {
    char str[MAXN], c;

    scanf("%c\n", &c);
    ReadString(str);
    delchar(str, c);
    printf("%s\n", str);

    return 0;
}

void ReadString(char s[]) {
    scanf("%[^\n]", s);
}

/**
 * 测试用例：
 * a
 * aa
 */
void delchar(char *str, char c) {
    while (*str) {
        if (*str == c) {
            char *p = str;
            while (*p) {
                *p = *(p + 1);
                p++;
            }
            str--;
        }
        str++;
    }
}