/**
 * @Author: Wang An
 * @Date: 4/29/2020 2:16 PM
 */
#include <stdio.h>

void f() {
    char word[8];
    char word2[8];
    scanf("%7s", word);
    scanf("%7s", word2);
    printf("%s##%s##\n", word, word2);
}

int main() {
    f();

    return 0;
}
