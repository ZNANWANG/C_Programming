/**
 * strcat()
 *
 * @Author: Wang An
 * @Date: 5/2/2020 9:20 AM
 */
#include <stdio.h>
#include <string.h>

char *mycat(char *dst, const char *src);

char *mycat1(char *dst, const char *src);

char *mycat2(char *dst, const char *src);

int main(int argc, const char *argv[]) {
    char a[] = "Hello, ";
    printf("sizeof(a) = %lld\n", sizeof(a));
    char b[] = "world!";
    printf("strcat(a, b) = %s\n", strcat(a, b));
//    printf("mycat(a, b) = %s\n", mycat(a, b));
//    printf("mycat1(a, b) = %s\n", mycat1(a, b));
//    printf("mycat2(a, b) = %s\n", mycat2(a, b));

    // 因为字符串数组a的长度不够，且strcat()不会进行越界检查，拼接过程实际上使用了不属于a的内存空间，所以在接下来对a的遍历中，不属于a的内存空
    // 间可能会被改变，进而无法保证a能够指向拼接字符串。
    int j = 0;
    while (a[j]) {
        char temp = a[j];
        printf("a[%d] = %c\n", j++, temp);
    }

    printf("a = %s\n", a);
    printf("strlen(a) = %lld\n", strlen(a)); // strlen()是函数，值需要在运行时才能得出
    printf("sizeof(a) = %lld\n", sizeof(a)); // sizeof是运算符，值在编译时已计算好

    // 遍历字符串数组a的过程只能保证sizeof(a)/sizeif(a[0])个元素保持不变，之后的元素已经越界，不归a管，所以可能被改变，所以遍历有可能发生死
    // 循环（假如一直找不到字符串终止符'\0')。
    int i = 0;
    while (a[i]) {
        char temp = a[i];
        printf("a[%d] = %c\n", i++, temp);
    }
}

char *mycat(char *dst, const char *src) {
    char *ret = dst;
    while (*dst) {
        dst++;
    }
    while (*src) {
        *dst++ = *src++;
    }
    *dst = '\0';
    return ret;
}

char *mycat1(char *dst, const char *src) {
    int idx1 = 0;
    while (dst[idx1] != '\0') {
        idx1++;
    }
    int idx2 = 0;
    while (src[idx2] != '\0') {
        dst[idx1++] = src[idx2++];
    }
    dst[idx1] = src[idx2];
    return dst;
}

char *mycat2(char *dst, const char *src) {
    char *ret = dst;
    while (*dst) {
        dst++;
    }

    while (*dst++ = *src++);

    return ret;
}