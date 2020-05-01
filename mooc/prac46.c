/**
 * strcmp()
 *
 * @Author: Wang An
 * @Date: 5/1/2020 11:16 PM
 */
#include <stdio.h>
#include <string.h>

int mycmp(const char *s1, const char *s2);

int mooccmp1(const char *s1, const char *s2);

int mooccmp2(const char *s1, const char *s2);

int main(int argc, const char *argv[]){
    char s1[] = "cbc";
    char s2[] = "abc ";
    printf("s1 == s2 = %d\n", s1 == s2); // 恒不相等 —— Array comparison always evaluates to false
    printf("strcmp(s1, s2) = %d\n", strcmp(s1, s2)); // 0 - 相等， 1 - s1大， -1 - s2大
    printf("mycmp(s1, s2) = %d\n", mycmp(s1, s2));
    printf("mooccmp1(s1, s2) = %d\n", mooccmp1(s1, s2));
    printf("mooccmp2(s1, s2) = %d\n", mooccmp2(s1, s2));

//    char str1[50] = { 0 };
//    char str2[50] = { 0 };
//    int i = 1;
//
//    do {
//        printf("******第%d次输入******\n", i);
//        gets(str1);
//        gets(str2);
//        i++;
//    } while ( strcmp(str1, str2) );

    return 0;
}

int mycmp(const char *s1, const char *s2) {
    int ret = 0;
    int idx = 0;
    while(s1[idx] != '\0' && s2[idx] != '\0'){
        if(s1[idx] > s2[idx]){
            return s1[idx] - s2[idx];
        } else if(s1[idx] < s2[idx]){
            return s1[idx] - s2[idx];
        }
        idx++;
    }

    if(s1[idx] == '\0' && s2[idx] == '\0'){
        ret = 0;
    } else {
        ret = s1[idx] - s2[idx];
    }

    return ret;
}

int mooccmp1(const char *s1, const char *s2) {
    while(*s1 == *s2 && *s1 != '\0'){
        s1++;
        s2++;
    }
    return *s1 - *s2;
}

int mooccmp2(const char *s1, const char *s2) {
    int idx = 0;
    while(s1[idx] == s2[idx] && s1[idx] != '\0'){
        idx++;
    }
    return s1[idx] - s2[idx];
}