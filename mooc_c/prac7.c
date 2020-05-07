/**
 * 猜数字
 *
 * @Author: Wang An
 * @Date: 4/26/2020 5:25 PM
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void guessNumber(int target);

int main() {
    srand(time(0));
    int target = rand() % 100;
    printf("我已经想好一个数了，");
    guessNumber(target);
    return 0;
}

void guessNumber(int target) {
    int number;
    int count = 0;
    do {
        printf("请输入一个数字：\n");
        scanf("%d", &number);
        if (number > target) {
            count++;
            printf("你猜的数字大了。");
        } else if (number < target) {
            count++;
            printf("你猜的数字小了。");
        }
    } while (number != target);
    printf("恭喜你猜对了！你总共猜了%d次。", count);
}
