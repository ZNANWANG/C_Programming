/**
 * 实验11-2-7 统计专业人数 (15分)
 *
 * 本题要求实现一个函数，统计学生学号链表中专业为计算机的学生人数。链表结点定义如下：
 *
 * struct ListNode {
 *      char code[8];
 *      struct ListNode *next;
 * };
 *
 * 这里学生的学号共7位数字，其中第2、3位是专业编号。计算机专业的编号为02。
 *
 * 函数接口定义：
 * int countcs( struct ListNode *head );
 *
 * 其中head是用户传入的学生学号链表的头指针；函数countcs统计并返回head链表中专业为计算机的学生人数。
 *
 * 裁判测试程序样例：
 * #include <stdio.h>
 * #include <stdlib.h>
 * #include <string.h>
 *
 * struct ListNode {
 *      char code[8];
 *      struct ListNode *next;
 * };
 *
 * struct ListNode *createlist(); //裁判实现，细节不表
 * int countcs( struct ListNode *head );
 *
 * int main()
 * {
 *      struct ListNode  *head;
 *
 *      head = createlist();
 *      printf("%d\n", countcs(head));
 *
 *      return 0;
 * }
 *
 * 输入样例：
 * 1021202
 * 2022310
 * 8102134
 * 1030912
 * 3110203
 * 4021205
 * #
 *
 * 输出样例：
 * 3
 *
 * @Author: Wang An
 * @Date: 5/6/2020 1:42 PM
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ListNode {
    char code[8];
    struct ListNode *next;
};

struct ListNode *createlist(); /*裁判实现，细节不表*/
int countcs(struct ListNode *head);

int main() {
    struct ListNode *head;

    head = createlist();
    {
        struct ListNode *p = head;
        while (p != NULL) {
            printf("%s ", p->code);
            p = p->next;
        }
        printf("\n");
    }
    printf("%d\n", countcs(head));

    return 0;
}

struct ListNode *createlist() {
    struct ListNode *head = NULL, *tail = NULL;
    struct ListNode *cur = (struct ListNode *) malloc(sizeof(struct ListNode));
    scanf("%s", cur->code);
    while (strcmp(cur->code, "#") != 0) {
        cur->next = NULL;
        if (head == NULL) {
            head = tail = cur;
        } else {
            tail->next = cur;
            tail = cur;
        }
        cur = (struct ListNode *) malloc(sizeof(struct ListNode));
        scanf("%s", cur->code);
    }
    return head;
}

int countcs(struct ListNode *head) {
    int cnt = 0;
    while (head != NULL) {
        char *code = head->code;
        if (*(code + 1) == '0' && *(code + 2) == '2') {
            cnt++;
        }
        head = head->next;
    }
    return cnt;
}