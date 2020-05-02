/**
 * malloc
 *
 * @Author: Wang An
 * @Date: 5/1/2020 9:02 PM
 */
#include <stdio.h>
#include <stdlib.h>

int main() {
    void *p = 0;
    int cnt = 0;
    while ((p = malloc(100 * 1024 * 1024))) {
        cnt++;
    }
    printf("Allocate %d00M memory.\n", cnt);

    return 0;
}