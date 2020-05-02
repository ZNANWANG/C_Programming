/**
 * 实验4-2-9 梅森数 (20分)
 *
 * 形如2^​n −1的素数称为梅森数（Mersenne Number）。例如2^2−1=3、2^3−1=7都是梅森数。1722年，双目失明的瑞士数学大师欧拉证明了
 * 2​^31 −1=2147483647是一个素数，堪称当时世界上“已知最大素数”的一个记录。
 *
 * 本题要求编写程序，对任一正整数n（n<20），输出所有不超过2^n−1的梅森数。
 *
 * 输入格式：
 * 输入在一行中给出正整数n（n<20）。
 *
 * 输出格式：
 * 按从小到大的顺序输出所有不超过2^n−1的梅森数，每行一个。如果完全没有，则输出“None”。
 *
 * 输入样例：
 * 6
 *
 * 输出样例：
 * 3
 * 7
 * 31
 *
 * @Author: Wang An
 * @Date: 5/1/2020 11:05 AM
 */
#include <stdio.h>
#include <math.h>

int isPrime(int num);

int main() {
    int n = 0;
    scanf("%d", &n);
    int count = 0;
    for (int i = 1; i <= n; i++) {
        int temp = pow(2, i) - 1;
        if (isPrime(temp)) {
            count++;
            printf("%d\n", temp);
        }
    }

    if (count == 0) {
        printf("None\n");
    }

    return 0;
}

int isPrime(int num) {
    int ret = 1;
    if (num < 3) {
        return num > 1;
    } else if (num % 2 == 0) {
        return 0;
    }

    for (int i = 3; i < num; i += 2) {
        if (num % i == 0) {
            ret = 0;
            break;
        }
    }
    return ret;
}