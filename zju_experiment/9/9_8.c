/**
 * 实验9-8 通讯录排序 (20分)
 *
 * 输入n个朋友的信息，包括姓名、生日、电话号码，本题要求编写程序，按照年龄从大到小的顺序依次输出通讯录。题目保证所有人的生日均不相同。
 *
 * 输入格式:
 * 输入第一行给出正整数n（<10）。随后n行，每行按照“姓名 生日 电话号码”的格式给出一位朋友的信息，其中“姓名”是长度不超过10的英文字母组成的字符串，
 * “生日”是yyyymmdd格式的日期，“电话号码”是不超过17位的数字及+、-组成的字符串。
 *
 * 输出格式:
 * 按照年龄从大到小输出朋友的信息，格式同输出。
 *
 * 输入样例:
 * 3
 * zhang 19850403 13912345678
 * wang 19821020 +86-0571-88018448
 * qian 19840619 13609876543
 *
 * 输出样例:
 * wang 19821020 +86-0571-88018448
 * qian 19840619 13609876543
 * zhang 19850403 13912345678
 *
 * @Author: Wang An
 * @Date: 5/5/2020 4:39 PM
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isElder(char *prey, char *prem, char *pred, char *tmpy, char *tmpm, char *tmpd);

int main(int argc, const char *argv[]) {
    int n = 0;
    scanf("%d", &n);
    getchar();
    char **name = (char **) malloc(n * sizeof(char *));
    char **year = (char **) malloc(n * sizeof(char *));
    char **month = (char **) malloc(n * sizeof(char *));
    char **day = (char **) malloc(n * sizeof(char *));
    char **phone = (char **) malloc(n * sizeof(char *));

    int preIndex = 0;
    char c;
    for (int i = 0; i < n; i++) {
        name[i] = (char *) malloc(11 * sizeof(char));
        memset(name[i], 0, 11 * sizeof(char));
        year[i] = (char *) malloc(5 * sizeof(char));
        memset(year[i], 0, 5 * sizeof(char));
        month[i] = (char *) malloc(3 * sizeof(char));
        memset(month[i], 0, 3 * sizeof(char));
        day[i] = (char *) malloc(3 * sizeof(char));
        memset(day[i], 0, 3 * sizeof(char));
        phone[i] = (char *) malloc(18 * sizeof(char));
        memset(phone[i], 0, 18 * sizeof(char));
        scanf("%s ", name[i]);
        for (int j = 0; j < 4; j++) {
            c = getchar();
            *(year[i] + j) = c;
        }
//        printf("year[%d] = %s\n", i, year[i]);

        for (int j = 0; j < 2; j++) {
            c = getchar();
            *(month[i] + j) = c;
        }
//        printf("month[%d] = %s\n", i, month[i]);

        for (int j = 0; j < 2; j++) {
            c = getchar();
            *(day[i] + j) = c;
        }
//        printf("day[%d] = %s\n", i, day[i]);
        getchar();

        scanf("%s", phone[i]);
//        printf("phone[%d] = %s\n", i, phone[i]);

        preIndex = i - 1;
        char *ty = (char *) malloc(5 * sizeof(char));
        char *tm = (char *) malloc(3 * sizeof(char));
        char *td = (char *) malloc(3 * sizeof(char));
        char *tn = (char *) malloc(11 * sizeof(char));
        char *tp = (char *) malloc(18 * sizeof(char));
        strcpy(ty, year[i]);
        strcpy(tm, month[i]);
        strcpy(td, day[i]);
        strcpy(tn, name[i]);
        strcpy(tp, phone[i]);
        // 年纪从大到小插入排序
        while (preIndex >= 0 && isElder(year[preIndex], month[preIndex], day[preIndex], ty, tm, td)) {
            strcpy(year[preIndex + 1], year[preIndex]);
            strcpy(month[preIndex + 1], month[preIndex]);
            strcpy(day[preIndex + 1], day[preIndex]);
            strcpy(name[preIndex + 1], name[preIndex]);
            strcpy(phone[preIndex + 1], phone[preIndex]);
            preIndex--;
        }
        strcpy(year[preIndex + 1], ty);
        strcpy(month[preIndex + 1], tm);
        strcpy(day[preIndex + 1], td);
        strcpy(name[preIndex + 1], tn);
        strcpy(phone[preIndex + 1], tp);
    }

    for (int i = 0; i < n; i++) {
        printf("%s %s%s%s %s\n", name[i], year[i], month[i], day[i], phone[i]);
    }

    return 0;
}

/**
 * 判断年龄大小
 * @param prey 排在前面的人的生日年份
 * @param prem 排在前面的人的生日月份
 * @param pred 排在前面的人的生日天数
 * @param tmpy 当前的人的生日年份
 * @param tmpm 当前的人的生日月份
 * @param tmpd 当前的人的生日天数
 * @return 0 —— 前面的人的年龄小；1 —— 当前的人的年龄小
 */
int isElder(char *prey, char *prem, char *pred, char *tmpy, char *tmpm, char *tmpd) {
    int ret = 0;
    int ty = strcmp(prey, tmpy);
    if (ty == 0) {
        int tm = strcmp(prem, tmpm);
        if (tm == 0) {
            int td = strcmp(pred, tmpd);
            if (td > 0) {
                ret = 1;
            }
        } else if (tm > 0) {
            ret = 1;
        }
    } else if (ty > 0) {
        ret = 1;
    }

    return ret;
}