/**
 * �������в�������
 *
 * @Author: Wang An
 * @Date: 4/28/2020 1:30 PM
 */
#include <stdio.h>

int search(int array[], int length, int x);

int main() {
    int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int length = sizeof(array) / sizeof(array[0]);
    int x;
    int ret;
    printf("Please input a number:\n");
    scanf("%d", &x);
    ret = search(array, length, x);
    if (ret == -1) {
        printf("%d�������в�����", x);
    } else if (ret != 1) {
        printf("%d�������е�%d��λ����", x, ret);
    }
    return 0;
}

/**
 * �������б�������Ŀ������
 * @param array int������������
 * @param length ���鳤��
 * @param x Ŀ������
 * @return -1 ���� �������Ҳ���Ŀ����������[1,length]��Χ�ڵ�һ������ ���� Ŀ�������������е�λ��
 */
int search(int array[], int length, int x) {
    int ret = -1;
    for (int i = 0; i < length; i++) {
        if (array[i] == x) {
            ret = i + 1;
            break;
        }
    }
    return ret;
}
