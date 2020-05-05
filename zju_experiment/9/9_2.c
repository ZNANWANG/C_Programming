/**
 * 实验9-2 时间换算 (15分)
 *
 * 本题要求编写程序，以hh:mm:ss的格式输出某给定时间再过n秒后的时间值（超过23:59:59就从0点开始计时）。
 *
 * 输入格式：
 * 输入在第一行中以hh:mm:ss的格式给出起始时间，第二行给出整秒数n（<60）。
 *
 * 输出格式：
 * 输出在一行中给出hh:mm:ss格式的结果时间。
 *
 * 输入样例：
 * 11:59:40
 * 30
 *
 * 输出样例：
 * 12:00:10
 *
 * @Author: Wang An
 * @Date: 5/5/2020 11:52 AM
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[]) {
    int hr = 0, min = 0, sec = 0, inc = 0;
    scanf("%d:%d:%d", &hr, &min, &sec);
//    printf("hr = %d, min = %d, sec = %d\n", hr, min, sec);
    getchar();
    scanf("%d", &inc);
//    printf("inc = %d\n", inc);

    int total = hr * 60 * 60 + min * 60 + sec + inc;
    int day = 24 * 60 * 60;
    total %= day;

    hr = total / (60 * 60);
    total %= (60 * 60);
    min = total / 60;
    total %= 60;
    sec = total;

    printf("%02d:%02d:%02d\n", hr, min, sec);

    return 0;
}