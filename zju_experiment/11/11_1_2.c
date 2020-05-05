/**
 * 实验11-1-2 输出月份英文名 (15分)
 *
 * 本题要求实现函数，可以返回一个给定月份的英文名称。
 *
 * 函数接口定义：
 * char *getmonth( int n );
 *
 * 函数getmonth应返回存储了n对应的月份英文名称的字符串头指针。如果传入的参数n不是一个代表月份的数字，则返回空指针NULL。
 *
 * 裁判测试程序样例：
 * #include <stdio.h>
 *
 * char *getmonth( int n );
 *
 * int main()
 * {
 *      int n;
 *      char *s;
 *
 *      scanf("%d", &n);
 *      s = getmonth(n);
 *      if ( s==NULL ) printf("wrong input!\n");
 *      else printf("%s\n", s);
 *
 *      return 0;
 * }
 * 输入样例1：
 * 5
 *
 * 输出样例1：
 * May
 *
 * 输入样例2：
 * 15
 *
 * 输出样例2：
 * wrong input!
 *
 * @Author: Wang An
 * @Date: 5/5/2020 10:15 PM
 */
#include <stdio.h>

char *getmonth(int n);

int main() {
    int n;
    char *s;

    scanf("%d", &n);
    s = getmonth(n);
    if (s == NULL) printf("wrong input!\n");
    else printf("%s\n", s);

    return 0;
}

char *getmonth(int n) {
    if (n == 1) {
        return "January";
    } else if (n == 2) {
        return "February";
    } else if (n == 3) {
        return "March";
    } else if (n == 4) {
        return "April";
    } else if (n == 5) {
        return "May";
    } else if (n == 6) {
        return "June";
    } else if (n == 7) {
        return "July";
    } else if (n == 8) {
        return "August";
    } else if (n == 9) {
        return "September";
    } else if (n == 10) {
        return "October";
    } else if (n == 11) {
        return "November";
    } else if (n == 12) {
        return "December";
    } else {
        return NULL;
    }
}