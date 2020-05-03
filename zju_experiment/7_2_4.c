/**
 * 实验7-2-4 计算天数 (15分)
 *
 * 本题要求编写程序计算某年某月某日是该年中的第几天。
 *
 * 输入格式:
 * 输入在一行中按照格式“yyyy/mm/dd”（即“年/月/日”）给出日期。注意：闰年的判别条件是该年年份能被4整除但不能被100整除、或者能被400整除。闰年的
 * 2月有29天。
 *
 * 输出格式:
 * 在一行输出日期是该年中的第几天。
 *
 * 输入样例1:
 * 2009/03/02
 *
 * 输出样例1:
 * 61
 *
 * 输入样例2:
 * 2000/03/02
 *
 * 输出样例2:
 * 62
 *
 * 鸣谢湖北汽车工业学院袁科老师补充数据
 *
 * @Author: Wang An
 * @Date: 5/3/2020 8:06 PM
 */
#include <stdio.h>

int isLeapYear(int year);

void input(int *year, int *month, int *day);

void input1(int *year, int *month, int *day);

int main(int argc, const char *argv[]){
    int year = 0, month = 0, day = 0;
    input1(&year, &month, &day);

    //
//    {
//        printf("year = %d, month = %d, day = %d\n", year, month, day);
//    }
    //

    int sum = 0;
    for(int i = 1; i < month; i++){
        if(i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12){
            sum += 31;
        } else if(i == 4 || i == 6 || i == 9 || i == 11){
            sum += 30;
        } else {
            if(isLeapYear(year)){
                sum += 29;
            } else {
                sum += 28;
            }
        }
    }

    printf("%d\n", sum + day);

    return 0;
}

void input1(int *year, int *month, int *day) {
    int n = 0;
    scanf("%d", &n);
    *year = n;
    getchar();
    scanf("%d", &n);
    *month = n;
    getchar();
    scanf("%d", &n);
    *day = n;
}

void input(int *year, int *month, int *day) {
    char c;
    scanf("%c", &c);
    int sum = 0;
    while(c != '/'){
        int t = c - '0';
        sum = sum * 10 + t;
        scanf("%c", &c);
    }
    *year = sum;
    sum = 0;

    scanf("%c", &c);
    while(c != '/'){
        int t = c - '0';
        sum = sum * 10 + t;
        scanf("%c", &c);
    }
    *month = sum;
    sum = 0;

    scanf("%c", &c);
    while(c != '\n'){
        int t = c - '0';
        sum = sum * 10 + t;
        scanf("%c", &c);
    }
    *day = sum;
}

int isLeapYear(int year) {
    int ret = 0;
    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
        ret = 1;
    }
    return ret;
}
