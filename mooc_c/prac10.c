/**
 * ��Ӳ��
 *
 * @Author: Wang An
 * @Date: 4/26/2020 6:12 PM
 */
#include <stdio.h>

int main() {
    int total;
    printf("�������ܽ�\n");
    scanf("%d", &total);
    for (int one = 0; one <= total * 10; one++) {
        for (int two = 0; two <= total * 5; two++) {
            for (int five = 0; five <= total * 2; five++) {
                if (one + two * 2 + five * 5 == total * 10) {
                    printf("%d��һ�ǡ�%d�����Ǻ�%d������ܴճ�%dԪ��\n", one, two, five, total);
                }
            }
        }
    }
    return 0;
}

