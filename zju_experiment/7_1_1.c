/**
 * 实验7-1-1 简化的插入排序 (15分)
 *
 * 本题要求编写程序，将一个给定的整数插到原本有序的整数序列中，使结果序列仍然有序。
 *
 * 输入格式：
 * 输入在第一行先给出非负整数N（<10）；第二行给出N个从小到大排好顺序的整数；第三行给出一个整数X。
 *
 * 输出格式：
 * 在一行内输出将X插入后仍然从小到大有序的整数序列，每个数字后面有一个空格。
 *
 * 输入样例：
 * 5
 * 1 2 4 5 7
 * 3
 *
 * 输出样例：
 * 1 2 3 4 5 7
 *
 * @Author: Wang An
 * @Date: 5/2/2020 11:50 PM
 */
#include <stdio.h>

int main(int argc, const char *argv[]) {
    int n = 0;
    scanf("%d", &n);
    int sorted[n + 1];
    int num = 0, idx = 0;
    while (idx < n) {
        scanf("%d", &num);
        sorted[idx++] = num;
//        printf("%d\t", num);
    }
    scanf("%d", &num);

    int preIndex = idx - 1;
    while (preIndex >= 0 && sorted[preIndex] > num) {
        sorted[preIndex + 1] = sorted[preIndex];
        preIndex--;
    }
    sorted[preIndex + 1] = num;

    for (int i = 0; i <= n; i++) {
        printf("%d ", sorted[i]);
    }

    return 0;
}