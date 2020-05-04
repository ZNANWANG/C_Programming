/**
 * 实验7-1-13 装箱问题 (20分)
 *
 * 假设有N项物品，大小分别为s1、s2、……、si、……、sN，其中si为满足1 ≤ si ≤100的整数。要把这些物品装入到容量为100的一批箱子（序号1-N）中。装
 * 箱方法是：对每项物品, 顺序扫描箱子，把该物品放入足以能够容下它的第一个箱子中。请写一个程序模拟这种装箱过程，并输出每个物品所在的箱子序号，以及
 * 放置全部物品所需的箱子数目。
 *
 * 输入格式：
 * 输入第一行给出物品个数N（≤1000）；第二行给出N个正整数s​i（1 ≤ si​​ ≤100，表示第i项物品的大小）。
 *
 * 输出格式：
 * 按照输入顺序输出每个物品的大小及其所在的箱子序号，每个物品占1行，最后一行输出所需的箱子数目。
 *
 * 输入样例：
 * 8
 * 60 70 80 90 30 40 10 20
 *
 * 输出样例：
 * 60 1
 * 70 2
 * 80 3
 * 90 4
 * 30 1
 * 40 5
 * 10 1
 * 20 2
 * 5
 *
 * @Author: Wang An
 * @Date: 5/3/2020 7:11 PM
 */
#include <stdio.h>
#include <string.h>

int checkBox(int box[], int length, int good);

int main(int argc, const char *argv[]) {
    int N = 0;
    scanf("%d", &N);
    int box[N];
    // 不能写成memset(box, 0, N)，这样只能把前sizeof(box)/sizeof(box[0])位初始化为0。
    memset(box, 0, sizeof(box));
    int good = 0;
    int max = 0;
    for (int i = 0; i < N; i++) {
        scanf("%d", &good);
        printf("%d ", good);
        int num = checkBox(box, N, good);
        max = max > num ? max : num;
        printf("%d\n", num);
    }
    printf("%d\n", max);

    return 0;
}

int checkBox(int box[], int length, int good) {
    int num = 0;
    for (int i = 0; i < length; i++) {
        if (box[i] + good <= 100) {
            box[i] += good;
            num = i;
            break;
        }
    }

    //
//    {
//        for(int i = 0; i < length; i++){
//            printf("box[%d] = %d", i, box[i]);
//            if((i + 1) % 5 == 0){
//                printf("\n");
//            } else {
//                printf("\t");
//            }
//        }
//    }
    //

    return num + 1;
}
