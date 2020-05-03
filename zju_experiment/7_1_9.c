/**
 * 实验7-1-9 数字加密 (15分)
 *
 * 输入一个四位数，将其加密后输出。方法是将该数每一位上的数字加9，然后除以10取余，做为该位上的新数字，最后将千位和十位上的数字互换，百位和个位上
 * 的数字互换，组成加密后的新四位数。例如输入1257，经过加9取余后得到新数字0146，再经过两次换位后得到4601。
 *
 * 输入格式：
 * 输入在一行中给出一个四位的整数x，即要求被加密的数。
 *
 * 输出格式：
 * 在一行中按照格式“The encrypted number is V”输出加密后得到的新数V。
 *
 * 输入样例：
 * 1257
 *
 * 输出样例：
 * The encrypted number is 4601
 *
 * @Author: Wang An
 * @Date: 5/3/2020 11:25 AM
 */
#include <stdio.h>
#include <math.h>

void swap(int arr[], int i, int j);

void encrypt();

void encrypt1();

int get_num_of_digits(int x);

int main(int argc, const char *argv[]) {
    encrypt();

    return 0;
}

/**
 * 不能AC，因为有前导0，有参考价值。
 */
void encrypt1() {
    int x = 0;
    int length = 4;
    int arr[length];
    scanf("%d", &x);
    int n = get_num_of_digits(x);
    int t = pow(10, n - 1);
    int digit = 0, idx = 0;
    do {
        digit = x / t;
        arr[idx++] = (digit + 9) % 10;
        x %= t;
        t /= 10;
    } while (t != 0);

    //
    {
        for (int i = 0; i < length; i++) {
            printf("arr[%d] = %d\n", i, arr[i]);
        }
    }
    //

    for (int i = 0; i < length / 2; i++) {
        swap(arr, i, i + 2);
    }

    printf("The encrypted number is ");
    for (int i = 0; i < length; i++) {
        printf("%d", arr[i]);
    }
    printf("\n");
}

int get_num_of_digits(int x) {
    int num = 0;
    do {
        num++;
        x /= 10;
    } while (x != 0);
    return num;
}

void encrypt() {
    int length = 4;
    int arr[length];
    int digit = 0, idx = 0;
    char c;
    for (int i = 0; i < 4l; i++) {
        scanf("%c", &c);
//        printf("c = %c\n", c);
        arr[idx++] = (c - '0' + 9) % 10;
    }

    //
    {
        for (int i = 0; i < length; i++) {
            printf("arrp[%d] = %d\n", i, arr[i]);
        }
    }
    //

    for (int i = 0; i < length / 2; i++) {
        swap(arr, i, i + 2);
    }

    printf("The encrypted number is ");
    for (int i = 0; i < length; i++) {
        printf("%d", arr[i]);
    }
    printf("\n");
}

void swap(int arr[], int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
