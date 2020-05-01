/**
 * main()函数可以赋参数
 *
 * @Author: Wang An
 * @Date: 5/1/2020 10:57 PM
 */
#include <stdio.h>

int main(int argc, char const *argv[]){
    int i;
    for(i = 0; i < argc; i++){
        printf("%d:%s\n", i, argv[i]);
    }

    return 0;
}