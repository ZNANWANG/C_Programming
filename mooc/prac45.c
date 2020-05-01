/**
 * strlen()
 *
 * @Author: Wang An
 * @Date: 5/1/2020 11:09 PM
 */
#include <stdio.h>
#include <string.h>

size_t mylen(const char *line);

int main(int argc, char const *argv[]){
    char line[] = "hello";
    printf("mylen = %llu\n", mylen(line));
    printf("strlen = %llu\n", strlen(line));
    printf("sizeOf(line) = %llu\n", sizeof(line));

    return 0;
}

/**
 * 遍历字符串数组
 *
 * @param line 字符串数组
 * @return 字符串有效元素个数（不包括\0)
 */
size_t mylen(const char *line) {
    int idx = 0;
    while(line[idx] != '\0'){
        idx++;
    }
    return idx;
}
