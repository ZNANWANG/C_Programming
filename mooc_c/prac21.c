/**
 * 测验错题集锦
 *
 * @Author: Wang An
 * @Date: 4/27/2020 10:56 PM
 */
#include<stdio.h>

int main() {
    //不能通过编译，因为if后面没加大括号，两个分号导致if和else被分开了。
//    int i  =6;
//    if ( i<= 6 )
//        printf("hello\n");;
//    else
//    printf("bye-bye\n");;

    //短路求值
    int x = 0, y = 0, z = 0;
    z = (x == 1) && (y = 2);
    printf("%d ", y);

    // sizeOf是静态运算符，根据C99规范， sizeof是一个编译时刻就起效果的运算符，在其内的任百何运算都没有意义， j = sizeof(i++); 在编译的时
    // 候被度翻译成 j=sizeof((i++的数据类型)) 也就是 j = sizeof(int); 也就是 j= 4; (32bit系统，如果是16位系统，则j=2) 然后才会继续编
    // 译成最终问的程序，当然在最终程序执行的答时候，自然不会执行任何++i了。
    int i = 10;
    long long t = sizeof(i++);
    printf("%d", i);

    // i%=4后i的取值有七种可能：-3，-2，-1，0，1，2，3

    return 0;
}