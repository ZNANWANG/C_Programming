/**
 * 结构体
 *
 * @Author: Wang An
 * @Date: 4/28/2020 8:13 PM
 */
#include <stdio.h>

int main() {
    struct {
        int amount;
        char *name;
    } coins[] = {
            {1,  "penny"},
            {5,  "nickel"},
            {10, "dime"},
            {25, "quarter"},
            {50, "half-dollar"},
    };
    int k;
    printf("Please input a number:\n");
    scanf("%d", &k);
    for (int i = 0; i < sizeof(coins) / sizeof(coins[0]); i++) {
        if (k == coins[i].amount) {
            printf("%s\n", coins[i].name);
            break;
        }
    }

    return 0;
}