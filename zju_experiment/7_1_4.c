/**
 * 实验7-1-4 找出不是两个数组共有的元素 (20分)
 *
 * 给定两个整型数组，本题要求找出不是两者共有的元素。
 *
 * 输入格式:
 * 输入分别在两行中给出两个整型数组，每行先给出正整数N（≤20），随后是N个整数，其间以空格分隔。
 *
 * 输出格式:
 * 在一行中按照数字给出的顺序输出不是两数组共有的元素，数字间以空格分隔，但行末不得有多余的空格。题目保证至少存在一个这样的数字。同一数字不重复输出。
 *
 * 输入样例:
 * 10 3 -5 2 8 0 3 5 -15 9 100
 * 11 6 4 8 2 6 -5 9 0 100 8 1
 *
 * 输出样例:
 * 3 5 -15 6 4 1
 *
 * @Author: Wang An
 * @Date: 5/3/2020 12:20 AM
 */
#include <stdio.h>

int isSingleNum(int number, int array[], int length);

int main(int argc, const char *argv[]) {
    int n1 = 0;
    scanf("%d", &n1);
    int array1[n1];
    int num = 0;
    for (int i = 0; i < n1; i++) {
        scanf("%d", &num);
        array1[i] = num;
    }
    int n2 = 0;
    scanf("%d", &n2);
    int array2[n2];
    for (int i = 0; i < n2; i++) {
        scanf("%d", &num);
        array2[i] = num;
    }

    int n3 = n1 + n2;
    int ret[n3];
    int cnt = 0;
    for (int i = 0; i < n1; i++) {
        int t = array1[i];
        if (isSingleNum(t, array2, n2) && isSingleNum(t, ret, cnt)) {
            ret[cnt++] = t;
        }
    }

    for (int i = 0; i < n2; i++) {
        int t = array2[i];
        if (isSingleNum(t, array1, n1) && isSingleNum(t, ret, cnt)) {
            ret[cnt++] = t;
        }
    }

    for (int i = 0; i < cnt; i++) {
        printf("%d", ret[i]);
        if (i != cnt - 1) {
            printf(" ");
        }
    }

    return 0;
}

int isSingleNum(int number, int array[], int length) {
    int ret = 1;
    for (int i = 0; i < length; i++) {
        if (number == array[i]) {
            ret = 0;
            break;
        }
    }
    return ret;
}
