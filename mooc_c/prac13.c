/**
 * 正序分解非负整数
 *
 * @Author: Wang An
 * @Date: 4/26/2020 9:30 PM
 */
#include <stdio.h>

/**
 * 正序分解非负整数，注意用例：num= 7000。
 */
void resolve() {
    printf("Please input a number: \n");
    int num;
    scanf("%d", &num);
    int t = num;
    //计算整数的位数，并生成mask值。
    int count = 0;
    do {
        num /= 10;
        count++;
    } while (num != 0);

    int mask = 1;
    for (int i = 0; i < count - 1; i++) {
        mask *= 10;
    }
//    printf("mask = %d\n", mask);

    //从左到右输出整数每一位的值
    num = t;
    do {
        printf("%d", num / mask);
        if (mask > 9) {
            printf(" ");
        }
        num %= mask;
        mask /= 10;
    } while (mask != 0);
    printf("\n");
}

void resolve1() {
    printf("Please input a number: \n");
    int num;
    scanf("%d", &num);
    int t = num;
    int mask = 1;
    while (t > 9) {
        mask *= 10;
        t /= 10;
    }

    do {
        printf("%d", num / mask);
        if (mask > 9) {
            printf(" ");
        }
        num %= mask;
        mask /= 10;
    } while (mask != 0);
    printf("\n");
}

int main() {
    resolve1();
    return 0;
}
