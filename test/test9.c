/**
 * scanf探究
 *
 * 假如注释掉setbuf(stdin,NULL);，一旦输入一个不是数字的字符，程序会无限输出0。至于为什么一直输出0是因为scanf对于接受失败的数据会送回stdin
 * 缓冲区，之前输入的字母会一直存在。在这个死循环中，scanf一遍遍读缓冲区的字母，也就会一直输出已一大串0。要想像输入数字那样可以循环输入，必须清
 * 除掉缓冲区的数据：setbuf(stdin,NULL);，这个语句加到scanf后面，
 *
 * @Author: Wang An
 * @Date: 5/2/2020 5:10 PM
 */
#include <stdio.h>

int main(void) {
    int x = 0;

    while (1) {
        x = scanf("%d", &x);
        setbuf(stdin, NULL);
        printf("%d", x);
    }

    return 0;
}