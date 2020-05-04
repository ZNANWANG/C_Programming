/**
 * 实验8-1-8 报数 (20分)
 *
 * 报数游戏是这样的：有n个人围成一圈，按顺序从1到n编好号。从第一个人开始报数，报到m（<n）的人退出圈子；下一个人从1开始报数，报到m的人退出圈子。
 * 如此下去，直到留下最后一个人。
 *
 * 本题要求编写函数，给出每个人的退出顺序编号。
 *
 * 函数接口定义：
 * void CountOff( int n, int m, int out[] );
 *
 * 其中n是初始人数；m是游戏规定的退出位次（保证为小于n的正整数）。函数CountOff将每个人的退出顺序编号存在数组out[]中。因为C语言数组下标是从0开
 * 始的，所以第i个位置上的人是第out[i-1]个退出的。
 *
 * 裁判测试程序样例：
 * #include <stdio.h>
 * #define MAXN 20
 *
 * void CountOff( int n, int m, int out[] );
 *
 * int main()
 * {
 *      int out[MAXN], n, m;
 *      int i;
 *
 *      scanf("%d %d", &n, &m);
 *      CountOff( n, m, out );
 *      for ( i = 0; i < n; i++ )
 *          printf("%d ", out[i]);
 *      printf("\n");
 *
 *      return 0;
 * }
 *
 * 输入样例：
 * 11 3
 *
 * 输出样例：
 * 4 10 1 7 5 2 11 9 3 6 8
 *
 * @Author: Wang An
 * @Date: 5/4/2020 6:07 PM
 */
#include <stdio.h>

#define MAXN 20

void CountOff(int n, int m, int out[]);

int main() {
    int out[MAXN], n, m;
    int i;

    scanf("%d %d", &n, &m);
    CountOff(n, m, out);
    for (i = 0; i < n; i++)
        printf("%d ", out[i]);
    printf("\n");

    return 0;
}

void CountOff(int n, int m, int out[]) {
    int a = 0, b = 0, cnt = 0, idx = 0;
    int arr[n];
    for (int i = 0; i < n; i++) {
        arr[i] = 1; // 切忌数组越界
    }

    while (cnt < n) {
        a++;
        if (arr[idx] == 0) {
            b++;
        } else {
            if ((a - b) % m == 0) {
                arr[idx] = 0;
                cnt++;
                out[idx] = cnt;
            }
        }

        idx++;
        idx %= n;
    }
}
