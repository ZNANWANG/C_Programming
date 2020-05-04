/**
 * 实验7-3-1 字符串逆序 (15分)
 *
 * 输入一个字符串，对该字符串进行逆序，输出逆序后的字符串。
 *
 * 输入格式：
 * 输入在一行中给出一个不超过80个字符长度的、以回车结束的非空字符串。
 *
 * 输出格式：
 * 在一行中输出逆序后的字符串。
 *
 * 输入样例：
 * Hello World!
 *
 * 输出样例：
 * !dlroW olleH
 *
 * @Author: Wang An
 * @Date: 5/4/2020 7:30 AM
 */
#include <stdio.h>
#include <string.h>

void reverse_string();

void reverse_string1();

void reverse_string2();

void reverse_string3();

int main(int argc, const char *argv[]) {
    reverse_string3();

    return 0;
}

void reverse_string3() {
    char arr[1000];
    int cnt = 0;
    while ((arr[cnt++] = getchar()) != '\n');

    for (int i = cnt - 2; i >= 0; i--) {
        printf("%c", arr[i]);
    }
}

void reverse_string2() {
    char c;
    char arr[1000];
    scanf("%[^\n]", &arr);
    getchar();
    int cnt = strlen(arr);
//    printf("cnt = %d\n", cnt);
    while (arr[--cnt] && cnt >= 0) {
        printf("%c", arr[cnt]);
    }

}

void reverse_string1() {
    char c;
    char arr[1000];
    gets(arr);
    int cnt = strlen(arr);
//    printf("cnt = %d\n", cnt);
    while (arr[--cnt] && cnt >= 0) {
        printf("%c", arr[cnt]);
    }
}

void reverse_string() {
    char c;
    char arr[1000];
    int cnt = 0;
    scanf("%c", &c);
    while (c != '\n') {
        arr[cnt++] = c;
        scanf("%c", &c);
    }

    for (int i = 0; i < cnt; i++) {
        printf("%c", arr[cnt - 1 - i]);
    }
}
