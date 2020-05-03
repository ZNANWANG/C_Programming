/**
 * 实验7-2-1 求矩阵各行元素之和 (15分)
 *
 * 本题要求编写程序，求一个给定的m×n矩阵各行元素之和。
 *
 * 输入格式：
 * 输入第一行给出两个正整数m和n（1≤m,n≤6）。随后m行，每行给出n个整数，其间以空格分隔。
 *
 * 输出格式：
 * 每行输出对应矩阵行元素之和。
 *
 * 输入样例：
 * 3 2
 * 6 3
 * 1 -8
 * 3 12
 *
 * 输出样例：
 * 9
 * -7
 * 15
 *
 * @Author: Wang An
 * @Date: 5/3/2020 7:41 PM
 */
#include <stdio.h>
int main(int argc, const char *argv[]){
    int m = 0, n = 0;
    scanf("%d %d", &m, &n);
    int num = 0;
    for(int i = 0; i < m; i++){
        int sum = 0;
        for(int j = 0; j < n; j++){
            scanf("%d", &num);
            sum += num;
        }
        printf("%d\n", sum);
    }

    return 0;
}