/**
 * 实验7-1-11 求整数序列中出现次数最多的数 (15分)
 *
 * 本题要求统计一个整型序列中出现次数最多的整数及其出现次数。
 *
 * 输入格式：
 * 输入在一行中给出序列中整数个数N（0<N≤1000），以及N个整数。数字间以空格分隔。
 *
 * 输出格式：
 * 在一行中输出出现次数最多的整数及其出现次数，数字间以空格分隔。题目保证这样的数字是唯一的。
 *
 * 输入样例：
 * 10 3 2 -1 5 3 4 3 0 3 2
 *
 * 输出样例：
 * 3 4
 *
 * @Author: Wang An
 * @Date: 5/3/2020 12:46 PM
 */
#include <stdio.h>
#include <string.h>

void getResult1();

void getResult();

int getIndexOfArray(int arr[], int n, int num);

int main(int argc, const char *argv[]) {
    getResult();

    return 0;
}

void getResult() {
    int N = 0;
    scanf("%d", &N);
    int maxCnt = 0;
    int n = 0;
    int num[N];
    memset(num, 0, N);
    int cnt[N];
    memset(cnt, 0, N);
    int unique = 0;
    for (int i = 0; i < N; i++) {
        scanf("%d", &n);
        int idx = getIndexOfArray(num, unique, n);
        if (idx != -1) {
            cnt[idx]++;
            maxCnt = maxCnt > cnt[idx] ? maxCnt : cnt[idx];
        } else {
            num[unique] = n;
            cnt[unique] = 1;
            maxCnt = maxCnt > cnt[unique] ? maxCnt : cnt[unique];
            unique++;
        }
    }

    //
//    {
//        for(int i = 0; i < unique; i++){
//            printf("num[%d] = %d\t", i, num[i]);
//            printf("cnt[%d] = %d\n", i, cnt[i]);
//        }
//    }
    //

//    printf("maxCnt = %d\n", maxCnt);
    for (int i = 0; i < unique; i++) {
        if (cnt[i] == maxCnt) {
            printf("%d %d\n", num[i], cnt[i]);
            break;
        }
    }
}

int getIndexOfArray(int arr[], int n, int num) {
    int idx = -1;
    for (int i = 0; i < n; i++) {
        if (num == arr[i]) {
            idx = i;
            break;
        }
    }
    return idx;
}

/**
 * 错误做法，只能处理有范围的正整数，数组过于稀疏，空间复杂度过大，放在这以供参考，还没学过hashmap。
 */
void getResult1() {
    int N = 0;
    scanf("%d", &N);
    int maxCnt = 0;
    int num = 0;
    int length = 1000;
    int arr[length];
    memset(arr, 0, length);
    for (int i = 0; i < N; i++) {
        scanf("%d", &num);
        arr[num]++;
        if (maxCnt < arr[num]) {
            maxCnt = arr[num];
        }
    }

    for (int i = 0; i < length; i++) {
        if (arr[i] == maxCnt) {
            printf("%d %d\n", i, arr[i]);
            break;
        }
    }
}
