/**
 * 实验11-2-4 删除单链表偶数节点 (20分)
 *
 * 本题要求实现两个函数，分别将读入的数据存储为单链表、将链表中偶数值的结点删除。链表结点定义如下：
 *
 * struct ListNode {
 *      int data;
 *      struct ListNode *next;
 * };
 *
 * 函数接口定义：
 * struct ListNode *createlist();
 * struct ListNode *deleteeven( struct ListNode *head );
 *
 * 函数createlist从标准输入读入一系列正整数，按照读入顺序建立单链表。当读到−1时表示输入结束，函数应返回指向单链表头结点的指针。
 *
 * 函数deleteeven将单链表head中偶数值的结点删除，返回结果链表的头指针。
 *
 * 裁判测试程序样例：
 * #include <stdio.h>
 * #include <stdlib.h>
 *
 * struct ListNode {
 *      int data;
 *      struct ListNode *next;
 * };
 *
 * struct ListNode *createlist();
 * struct ListNode *deleteeven( struct ListNode *head );
 * void printlist( struct ListNode *head )
 * {
 *      struct ListNode *p = head;
 *      while (p) {
 *          printf("%d ", p->data);
 *          p = p->next;
 *      }
 *      printf("\n");
 * }
 *
 * int main()
 * {
 *      struct ListNode *head;
 *
 *      head = createlist();
 *      head = deleteeven(head);
 *      printlist(head);
 *
 *      return 0;
 * }
 *
 * 输入样例：
 * 1 2 2 3 4 5 6 7 -1
 *
 * 输出样例：
 * 1 3 5 7
 *
 * @Author: Wang An
 * @Date: 5/6/2020 10:44 AM
 */
#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode *next;
};

struct ListNode *createlist();

struct ListNode *deleteeven(struct ListNode *head);

void printlist(struct ListNode *head) {
    struct ListNode *p = head;
    while (p) {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

int main() {
    struct ListNode *head;

    head = createlist();
    head = deleteeven(head);
    printlist(head);

    return 0;
}

struct ListNode *createlist() {
    struct ListNode *head = NULL, *tail = NULL;
    struct ListNode *cur = (struct ListNode *) malloc(sizeof(struct ListNode));
    scanf("%d", &cur->data);
    while (cur->data != -1) {
        cur->next = NULL;
        if (head == NULL) {
            head = tail = cur;
        } else {
            tail->next = cur;
            tail = cur;
        }
        cur = (struct ListNode *) malloc(sizeof(struct ListNode));
        scanf("%d", &cur->data);
    }
    return head;
}

struct ListNode *deleteeven(struct ListNode *head) {
    struct ListNode *pre = NULL, *cur = head;
    while (cur != NULL) {
        if (cur->data % 2 == 0) {
            if (pre == NULL) {
                head = head->next;
            } else {
                pre->next = cur->next;
            }
        } else {
            pre = cur;
        }
        cur = cur->next;
    }
    return head;
}