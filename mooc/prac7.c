/**
 * ������
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
    printf("���Ѿ����һ�����ˣ�");
    guessNumber(target);
    return 0;
}

void guessNumber(int target) {
    int number;
    int count = 0;
    do {
        printf("������һ�����֣�\n");
        scanf("%d", &number);
        if (number > target) {
            count++;
            printf("��µ����ִ��ˡ�");
        } else if (number < target) {
            count++;
            printf("��µ�����С�ˡ�");
        }
    } while (number != target);
    printf("��ϲ��¶��ˣ����ܹ�����%d�Ρ�", count);
}
