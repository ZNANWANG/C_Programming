/**
 * putchar()
 *
 * @Author: Wang An
 * @Date: 5/1/2020 10:14 PM
 */
#include <stdio.h>

int main(int argc, char const *argv[]){
    int ch;
    while((ch = getchar()) != EOF){
        putchar(ch);
    }
    printf("EOF\n"); //用debug输入Crtl+D看结果

    return 0;
}