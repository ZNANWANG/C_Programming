/**
 * 实验11-1-3 查找星期 (15分)
 *
 * 本题要求实现函数，可以根据下表查找到星期，返回对应的序号。
 *
 * 序号	星期
 * 0	Sunday
 * 1	Monday
 * 2	Tuesday
 * 3	Wednesday
 * 4	Thursday
 * 5	Friday
 * 6	Saturday
 * 函数接口定义：
 * int getindex( char *s );
 *
 * 函数getindex应返回字符串s序号。如果传入的参数s不是一个代表星期的字符串，则返回-1。
 *
 * 裁判测试程序样例：
 * #include <stdio.h>
 * #include <string.h>
 *
 * #define MAXS 80
 *
 * int getindex( char *s );
 *
 * int main()
 * {
 *      int n;
 *      char s[MAXS];
 *
 *      scanf("%s", s);
 *      n = getindex(s);
 *      if ( n==-1 ) printf("wrong input!\n");
 *      else printf("%d\n", n);
 *
 *      return 0;
 * }
 *
 * 输入样例1：
 * Tuesday
 *
 * 输出样例1：
 * 2
 *
 * 输入样例2：
 * today
 *
 * 输出样例2：
 * wrong input!
 *
 * @Author: Wang An
 * @Date: 5/5/2020 10:58 PM
 */
#include <stdio.h>
#include <string.h>

#define MAXS 80

int getindex(char *s);

int main() {
    int n;
    char s[MAXS];

    scanf("%s", s);
    n = getindex(s);
    if (n == -1) printf("wrong input!\n");
    else printf("%d\n", n);

    return 0;
}

int getindex(char *s) {
    int ret = -1;
    if (strcmp(s, "Sunday") == 0) {
        ret = 0;
    } else if (strcmp(s, "Monday") == 0) {
        ret = 1;
    } else if (strcmp(s, "Tuesday") == 0) {
        ret = 2;
    } else if (strcmp(s, "Wednesday") == 0) {
        ret = 3;
    } else if (strcmp(s, "Thursday") == 0) {
        ret = 4;
    } else if (strcmp(s, "Friday") == 0) {
        ret = 5;
    } else if (strcmp(s, "Saturday") == 0) {
        ret = 6;
    }
    return ret;
}
