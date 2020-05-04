/**
 * 实验7-2-10 简易连连看 (20分)
 *
 * 本题要求实现一个简易连连看游戏模拟程序。
 *
 * 给定一个2N×2N的方阵网格游戏盘面，每个格子中放置一些符号。这些符号一定是成对出现的，同一个符号可能不止一对。程序读入玩家给出的一对位置(x1​​,y​1)
 * 和(x2,y​2)，判断这两个位置上的符号是否匹配。如果匹配成功，则将两个符号消为“*”并输出消去后的盘面；否则输出“Uh-oh”。若匹配错误达到3次，则输出
 * “Game Over”并结束游戏。或者当全部符号匹配成功，则输出“Congratulations!”，然后结束游戏。
 *
 * 输入格式：
 * 输入在一行中给一个正整数N（<5）。随后2N行，每行2N个大写英文字母（其间以1个空格分隔），表示游戏盘面。盘面之后给出一个正整数K，随后K行，每行按
 * 照格式“x1 y1​​ x2 y​2”给出一个玩家的输入。注意格子的行、列编号是从1到2N。
 *
 * 输出格式：
 * 根据玩家的每一步输入，输出相应的结果。输出盘面时注意，每行字符间以1个空格分隔，行末不得有多余空格。
 *
 * 输入样例1：
 * 2
 * I T I T
 * Y T I A
 * T A T Y
 * I K K T
 * 11
 * 1 1 1 3
 * 4 2 4 3
 * 3 1 4 2
 * 2 2 1 2
 * 3 1 2 4
 * 4 4 3 1
 * 2 1 3 4
 * 3 3 1 4
 * 4 1 2 3
 * 2 4 3 2
 * 1 1 2 2
 *
 * 输出样例1：
 * * T * T
 * Y T I A
 * T A T Y
 * I K K T
 * * T * T
 * Y T I A
 * T A T Y
 * I * * T
 * Uh-oh
 * * * * T
 * Y * I A
 * T A T Y
 * I * * T
 * Uh-oh
 * * * * T
 * Y * I A
 * * A T Y
 * I * * *
 * * * * T
 * * * I A
 * * A T *
 * I * * *
 * * * * *
 * * * I A
 * * A * *
 * I * * *
 * * * * *
 * * * * A
 * * A * *
 * * * * *
 * Congratulations!
 *
 * 输入样例2：
 * 2
 * I T I T
 * Y T I A
 * T A T Y
 * I K K T
 * 5
 * 1 1 4 4
 * 1 1 2 3
 * 1 1 2 3
 * 2 2 4 1
 * 2 2 3 3
 *
 * 输出样例2：
 * Uh-oh
 * * T I T
 * Y T * A
 * T A T Y
 * I K K T
 * Uh-oh
 * Uh-oh
 * Game Over
 *
 * @Author: Wang An
 * @Date: 5/3/2020 11:07 PM
 */
#include <stdio.h>

int main(int argc, const char *argv[]) {
    int n = 0;
    scanf("%d", &n);
    int len = 2 * n;
    char matrix[len][len];
    char c;
    getchar(); // 读掉换行符
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < len; j++) {
            scanf("%c", &c);
            matrix[i][j] = c;
            getchar();
        }
    }

    int k = 0;
    scanf("%d", &k);
    int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
    int stars = 0;
    int wrong = 0;
    for (int i = 0; i < k; i++) {
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
//        printf("x1 = %d, y1 = %d, x2 = %d, y2 = %d\n", x1, y1, x2, y2);
        if (matrix[x1 - 1][y1 - 1] == matrix[x2 - 1][y2 - 1]
            && matrix[x1 - 1][y1 - 1] != '*' && matrix[x2 - 1][y2 - 1] != '*') {
            stars += 2;
            if (stars == len * len) {
                printf("Congratulations!\n");
                break;
            } else {
                matrix[x1 - 1][y1 - 1] = '*';
                matrix[x2 - 1][y2 - 1] = '*';

                for (int a = 0; a < len; a++) {
                    for (int b = 0; b < len; b++) {
                        printf("%c", matrix[a][b]);
                        if (b != len - 1) {
                            printf(" ");
                        }
                    }
                    printf("\n");
                }
            }
        } else {
            wrong++;
            printf("Uh-oh\n");
            if (wrong == 3) {
                printf("Game Over\n");
                break;
            }
        }
    }

    return 0;
}