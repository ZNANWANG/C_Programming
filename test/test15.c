/**
 * 全排列算法引申题（7_1_12未AC解法😂，但值得参考）
 *
 * 给定数字0-9各若干个。你可以以任意顺序排列这些数字，但必须全部使用。目标是使得最后得到的数尽可能小（注意0不能做首位）。例如：给定两个0，两个1，
 * 三个5，一个8，我们得到的最小的数就是10015558。
 *
 * 输入样例：
 * 0 0 1 1 5 5 5 8
 *
 * 输出样例：
 * 10015558
 *
 * @Author: Wang An
 * @Date: 5/3/2020 6:30 PM
 */
#include <stdio.h>
#include <string.h>

double min = ~(unsigned int)0/2;

void permute(int arr[], int length, int start);

void swap(int *arr, int i, int j);

int isUnique(int arr[], int length, int num);

int main(int argc, const char *argv[]) {
    int arr[50] = {};
    char c;
    int idx = 0, cnt = 0;
    do {
        scanf("%c", &c);
        if (c >= '0' && c <= '9') {
            int n = c - '0';
            for(int i = 0; i < n; i++){
                arr[idx++] = cnt;
            }
            cnt++;
        }
    } while (c != '\n');

    permute(arr, idx, 0);

    printf("%.0lf\n", min);

    return 0;
}

void permute(int arr[], int length, int start) {
    if(start >= length){
        double sum = 0;
        for(int i = 0; i < length; i++){
            if(i == 0 && arr[i] == 0){
                return;
            }
            sum = sum * 10 + arr[i];
        }
        min = min < sum ? min : sum;
    } else {
        int unique[length];
        memset(unique, -1, length);
        int cnt = 0;

        for(int i = 0; i < length; i++){
            if(isUnique(unique, cnt, arr[i])) {
                unique[cnt++] = arr[i];
                swap(arr, start, i);
                permute(arr, length, start + 1);
                swap(arr, start, i);
            }
        }
    }

}

int isUnique(int arr[], int length, int num) {
    int ret = 1;
    for(int i = 0; i < length; i++){
        if(arr[i] == num){
            ret = 0;
            break;
        }
    }
    return ret;
}

void swap(int *arr, int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}