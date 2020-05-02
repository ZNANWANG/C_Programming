/**
 * 实验4-2-4 换硬币 (20分)
 *
 * 将一笔零钱换成5分、2分和1分的硬币，要求每种硬币至少有一枚，有几种不同的换法？
 *
 * 输入格式:
 * 输入在一行中给出待换的零钱数额x∈(8,100)。
 *
 * 输出格式:
 * 要求按5分、2分和1分硬币的数量依次从大到小的顺序，输出各种换法。每行输出一种换法，格式为：“fen5:5分硬币数量, fen2:2分硬币数量, fen1:1分硬
 * 币数量, total:硬币总数量”。最后一行输出“count = 换法个数”。
 *
 * 输入样例:
 * 13
 *
 * 输出样例:
 * fen5:2, fen2:1, fen1:1, total:4
 * fen5:1, fen2:3, fen1:2, total:6
 * fen5:1, fen2:2, fen1:4, total:7
 * fen5:1, fen2:1, fen1:6, total:8
 * count = 4
 *
 * @Author: Wang An
 * @Date: 5/1/2020 8:21 AM
 */
#include <stdio.h>

void getResult();

int main() {
    getResult();

    return 0;
}

/**
 * 要求按5分、2分和1分硬币的数量依次从大到小的顺序，输出各种换法。
 */
void getResult() {
    int num = 0;
    scanf("%d", &num);
    int count = 0;
    for (int five = num / 5; five > 0; five--) {
        for (int two = num / 2; two > 0; two--) {
            for (int one = num; one > 0; one--) {
                if (one + 2 * two + 5 * five == num) {
                    count++;
                    printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n", five, two, one, (one + two + five));
                }
            }
        }
    }
    printf("count = %d\n", count);

}