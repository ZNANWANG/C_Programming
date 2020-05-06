/**
 * 实验11-2-8 单链表结点删除 (20分)
 *
 * 本题要求实现两个函数，分别将读入的数据存储为单链表、将链表中所有存储了某给定值的结点删除。链表结点定义如下：
 *
 * struct ListNode {
 *      int data;
 *      ListNode *next;
 * };
 *
 * 函数接口定义：
 * struct ListNode *readlist();
 * struct ListNode *deletem( struct ListNode *L, int m );
 *
 * 函数readlist从标准输入读入一系列正整数，按照读入顺序建立单链表。当读到−1时表示输入结束，函数应返回指向单链表头结点的指针。
 *
 * 函数deletem将单链表L中所有存储了m的结点删除。返回指向结果链表头结点的指针。
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
 * struct ListNode *readlist();
 * struct ListNode *deletem( struct ListNode *L, int m );
 * void printlist( struct ListNode *L )
 * {
 *      struct ListNode *p = L;
 *      while (p) {
 *          printf("%d ", p->data);
 *          p = p->next;
 *      }
 *      printf("\n");
 * }
 *
 * int main()
 * {
 *      int m;
 *      struct ListNode *L = readlist();
 *      scanf("%d", &m);
 *      L = deletem(L, m);
 *      printlist(L);
 *
 *      return 0;
 * }
 *
 * 输入样例：
 * 10 11 10 12 10 -1
 * 10
 *
 * 输出样例：
 * 11 12
 *
 * @Author: Wang An
 * @Date: 5/6/2020 2:15 PM
 */
#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode *next;
};

struct ListNode *readlist();

struct ListNode *deletem(struct ListNode *L, int m);

void printlist(struct ListNode *L) {
    struct ListNode *p = L;
    while (p) {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

int main() {
    int m;
    struct ListNode *L = readlist();
    printlist(L);
    scanf("%d", &m);
    L = deletem(L, m);
    printlist(L);

    return 0;
}

struct ListNode *readlist() {
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

struct ListNode *deletem(struct ListNode *L, int m) {
    struct ListNode *cur = L, *pre = NULL, *head = NULL;
    while (cur != NULL) {
        if (cur->data == m) {
            if (pre != NULL) {
                pre->next = cur->next;
            }
        } else {
            if (pre == NULL) {
                pre = head = cur;
            } else {
                pre->next = cur;
                pre = cur;
            }
        }
        cur = cur->next;
    }
    return head;
}