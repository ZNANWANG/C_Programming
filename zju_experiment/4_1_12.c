/**
 * 实验4-1-12 黑洞数 (20分)
 *
 * 黑洞数也称为陷阱数，又称“Kaprekar问题”，是一类具有奇特转换特性的数。
 *
 * 任何一个各位数字不全相同的三位数，经有限次“重排求差”操作，总会得到495。最后所得的495即为三位黑洞数。所谓“重排求差”操作即组成该数的数字重排后
 * 的最大数减去重排后的最小数。（6174为四位黑洞数。）
 *
 * 例如，对三位数207：
 *
 * 第1次重排求差得：720 - 27 ＝ 693；
 * 第2次重排求差得：963 - 369 ＝ 594；
 * 第3次重排求差得：954 - 459 ＝ 495；
 * 以后会停留在495这一黑洞数。如果三位数的3个数字全相同，一次转换后即为0。
 *
 * 任意输入一个三位数，编程给出重排求差的过程。
 *
 * 输入格式：
 * 输入在一行中给出一个三位数。
 *
 * 输出格式：
 * 按照以下格式输出重排求差的过程：
 *
 * 序号: 数字重排后的最大数 - 重排后的最小数 = 差值
 *
 * 序号从1开始，直到495出现在等号右边为止。
 *
 * 输入样例：
 * 123
 *
 * 输出样例：
 * 1: 321 - 123 = 198
 * 2: 981 - 189 = 792
 * 3: 972 - 279 = 693
 * 4: 963 - 369 = 594
 * 5: 954 - 459 = 495
 *
 * @Author: Wang An
 * @Date: 4/30/2020 5:59 PM
 */
#include <stdio.h>

int getMax(int digit1, int digit2, int digit3);

int getMin(int digit1, int digit2, int digit3);

int getMid(int digit1, int digit2, int digit3, int max, int min);

int main() {
    int num = 0;
    scanf("%d", &num);
    int count = 0;
    do {
        int digit1 = num % 10;
        num /= 10;
        int digit2 = num % 10;
        num /= 10;
        int digit3 = num % 10;
        int max = getMax(digit1, digit2, digit3);
        int min = getMin(digit1, digit2, digit3);
        int mid = getMid(digit1, digit2, digit3, max, min);

        int maxComb = max * 100 + mid * 10 + min;
        int minComb = min * 100 + mid * 10 + max;
        count++;
        num = maxComb - minComb;
        printf("%d: %d - %d = %d\n", count, maxComb, minComb, num);
    } while (num != 495);

    return 0;
}

/**
 * 寻找三数中的中间数，没有全排列算法就是这么硬核。
 * @param digit1 第一个数字
 * @param digit2 第二个数字
 * @param digit3 第三个数字
 * @param max 三数中的最大数
 * @param min 三数中的最小数
 * @return 三数中的中间数
 */
int getMid(int digit1, int digit2, int digit3, int max, int min) {
    int mid = 0;
    if (max == digit1 && min == digit2) {
        mid = digit3;
    } else if (max == digit1 && min == digit3) {
        mid = digit2;
    } else if (max == digit2 && min == digit1) {
        mid = digit3;
    } else if (max == digit2 && min == digit3) {
        mid = digit1;
    } else if (max == digit3 && min == digit1) {
        mid = digit2;
    } else if (max == digit3 && min == digit2) {
        mid = digit1;
    }
    return mid;
}

int getMin(int digit1, int digit2, int digit3) {
    int min = digit1 < digit2 ? digit1 : digit2;
    min = min < digit3 ? min : digit3;
    return min;
}

int getMax(int digit1, int digit2, int digit3) {
    int max = digit1 > digit2 ? digit1 : digit2;
    max = max > digit3 ? max : digit3;
    return max;
}