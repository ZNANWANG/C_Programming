/**
 * 实验7-1-5 选择法排序 (20分)
 *
 * 本题要求将给定的n个整数从大到小排序后输出。
 *
 * 输入格式：
 * 输入第一行给出一个不超过10的正整数n。第二行给出n个整数，其间以空格分隔。
 *
 * 输出格式：
 * 在一行中输出从大到小有序的数列，相邻数字间有一个空格，行末不得有多余空格。
 *
 * 输入样例：
 * 4
 * 5 1 7 6
 *
 * 输出样例：
 * 7 6 5 1
 *
 * @Author: Wang An
 * @Date: 5/3/2020 7:56 AM
 */
#include <stdio.h>

int main(int argc, const char *argv[]) {
    int n = 0;
    scanf("%d", &n);
    int arr[n];
    int num = 0, preIndex = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        preIndex = i - 1;
        while (preIndex >= 0 && arr[preIndex] < num) {
            arr[preIndex + 1] = arr[preIndex];
            preIndex--;
        }
        arr[preIndex + 1] = num;
    }

    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i != n - 1) {
            printf(" ");
        }
    }

    return 0;
}