/**
 * strcpy()
 *
 * 复制一个字符串
 * char *dst = (char*)malloc(strlen(src) + 1);
 * strcpy(dst, src);
 *
 * @Author: Wang An
 * @Date: 5/2/2020 12:04 AM
 */
#include <stdio.h>
#include <string.h>

char *mooccpy1(char *dst, const char *src);

char *mooccpy2(char *dst, const char *src);

char *mooccpy3(char *dst, const char *src);

int main(int argc, const char *argv[]) {
    char src[] = "abc";
    char dst[] = "abc";
    strcpy(dst, src);
    return 0;
}

char *mooccpy1(char *dst, const char *src) {
    int idx = 0;
    while (src[idx] != '\0') { //等价于while(src[idx])
        dst[idx] = src[idx];
        idx++;
    }
    dst[idx] = '\0'; //千万注意！！！
    return dst;
}

char *mooccpy2(char *dst, const char *src) {
    char *ret = dst;
    while (*src) {
        *dst++ = *src++;
    }
    *dst = '\0'; //千万注意！！！
    return ret;
}

char *mooccpy3(char *dst, const char *src) {
    char *ret = dst;
    while (*dst++ = *src++);
    return ret;
}