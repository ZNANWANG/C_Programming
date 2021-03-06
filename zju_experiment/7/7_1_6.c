/**
 * 实验7-1-6 求一批整数中出现最多的个位数字 (20分)
 *
 * 给定一批整数，分析每个整数的每一位数字，求出现次数最多的个位数字。例如给定3个整数1234、2345、3456，其中出现最多次数的数字是3和4，均出现了3次。
 *
 * 输入格式：
 * 输入在第1行中给出正整数N（≤1000），在第二行中给出N个不超过整型范围的非负整数，数字间以空格分隔。
 *
 * 输出格式：
 * 在一行中按格式“M: n1 n2 ...”输出，其中M是最大次数，n1、n2、……为出现次数最多的个位数字，按从小到大的顺序排列。数字间以空格分隔，但末尾不得
 * 有多余空格。
 *
 * 输入样例：
 * 3
 * 1234 2345 3456
 *
 * 输出样例：
 * 3: 3 4
 *
 * @Author: Wang An
 * @Date: 5/3/2020 8:38 AM
 */
#include <stdio.h>

int main(int argc, const char *argv[]) {
    int n = 0;
    scanf("%d", &n);
    int arr[10] = {};
    char c;
    int max = 0;
    getchar();
    do {
        scanf("%c", &c);
        if (c >= '0' && c <= '9') {
            int idx = c - '0';
            arr[idx]++;
            max = max > arr[idx] ? max : arr[idx];
        }
    } while (c != '\n');

    int cnt = 0;
    int ret[10] = {};
    for (int i = 0; i < 10; i++) {
        if (arr[i] == max) {
            ret[cnt++] = i;
        }
    }

    printf("%d: ", max);
    for (int i = 0; i < cnt; i++) {
        printf("%d", ret[i]);
        if (i != cnt - 1) {
            printf(" ");
        }
    }

    return 0;
}