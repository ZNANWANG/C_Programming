/**
 * 实验8-1-4 使用函数的选择法排序 (25分)
 *
 * 本题要求实现一个用选择法对整数数组进行简单排序的函数。
 *
 * 函数接口定义：
 * void sort( int a[], int n );
 *
 * 其中a是待排序的数组，n是数组a中元素的个数。该函数用选择法将数组a中的元素按升序排列，结果仍然在数组a中。
 *
 * 裁判测试程序样例：
 * #include <stdio.h>
 * #define MAXN 10
 *
 * void sort( int a[], int n );
 *
 * int main()
 * {
 *      int i, n;
 *      int a[MAXN];
 *
 *      scanf("%d", &n);
 *      for( i=0; i<n; i++ )
 *          scanf("%d", &a[i]);
 *
 *       sort(a, n);
 *
 *      printf("After sorted the array is:");
 *      for( i = 0; i < n; i++ )
 *          printf(" %d", a[i]);
 *      printf("\n");
 *
 *      return 0;
 * }
 *
 * 输入样例：
 * 4
 * 5 1 7 6
 *
 * 输出样例：
 * After sorted the array is: 1 5 6 7
 *
 * @Author: Wang An
 * @Date: 5/4/2020 12:56 PM
 */
#include <stdio.h>

#define MAXN 10

void sort(int a[], int n);

int main() {
    int i, n;
    int a[MAXN];

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    sort(a, n);

    printf("After sorted the array is:");
    for (i = 0; i < n; i++)
        printf(" %d", a[i]);
    printf("\n");

    return 0;
}

/**
 * 冒泡排序
 * @param a 待排序数组
 * @param n 数组长度
 */
void sort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                int tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }
}