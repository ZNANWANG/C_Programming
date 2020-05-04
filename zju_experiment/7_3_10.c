/**
 * 实验7-3-10 删除重复字符 (20分)
 *
 * 本题要求编写程序，将给定字符串去掉重复的字符后，按照字符ASCII码顺序从小到大排序后输出。
 *
 * 输入格式：
 * 输入是一个以回车结束的非空字符串（少于80个字符）。
 *
 * 输出格式：
 * 输出去重排序后的结果字符串。
 *
 * 输入样例：
 * ad2f3adjfeainzzzv
 *
 * 输出样例：
 * 23adefijnvz
 *
 * @Author: Wang An
 * @Date: 5/4/2020 10:58 AM
 */
#include <stdio.h>

int isUnique(const char arr[], int length, char c);

int main(int argc, const char *argv[]) {
    char c;
    char arr[80] = {};

//    {
//        for (int i = 0; i < 80; i++) {
//            printf("%d ", arr[i]);
//        }
//    }

    int cnt = 0, preIndex = 0;
    while ((c = getchar()) != '\n') {
        if (isUnique(arr, cnt, c)) {
            // 插入排序
            preIndex = cnt - 1;
            while (preIndex >= 0 && arr[preIndex] > c) {
                arr[preIndex + 1] = arr[preIndex];
                preIndex--;
            }
            arr[preIndex + 1] = c;
            cnt++;
        }
    }

    for (int i = 0; i < cnt; i++) {
        printf("%c", arr[i]);
    }

    return 0;
}

/**
 * 检查重复
 * @param arr 数组
 * @param length 数组长度
 * @param c 待检查元素
 * @return 0 —— 元素已经存在于数组中； 1 —— 元素不存在于数组中
 */
int isUnique(const char arr[], int length, char c) {
    int ret = 1;
    for (int i = 0; i < length; i++) {
        if (c == arr[i]) {
            ret = 0;
            break;
        }
    }
    return ret;
}
