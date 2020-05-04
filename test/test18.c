/**
 * scanf()会为字符数组末尾自动填充\0
 *
 * @Author: Wang An
 * @Date: 5/4/2020 9:43 AM
 */
#include <stdio.h>
#include <string.h>

int main(int argc, const char *argv[]) {
    char arr[4] = {1, 1, 1, 1,};
    scanf("%[^\n]", arr);
    printf("arr = %s\n", arr);

    for (int i = 0; i < 4; i++) {
        printf("arr[%d] = %d\t", i, arr[i]);
    }
    printf("\n");
    printf("strlen(arr) = %d\n", strlen(arr));

    return 0;
}