/**
 * 实验11-2-6 奇数值结点链表 (20分)
 *
 * 本题要求实现两个函数，分别将读入的数据存储为单链表、将链表中奇数值的结点重新组成一个新的链表。链表结点定义如下：
 *
 * struct ListNode {
 *      int data;
 *      ListNode *next;
 * };
 *
 * 函数接口定义：
 * struct ListNode *readlist();
 * struct ListNode *getodd( struct ListNode **L );
 *
 * 函数readlist从标准输入读入一系列正整数，按照读入顺序建立单链表。当读到−1时表示输入结束，函数应返回指向单链表头结点的指针。
 *
 * 函数getodd将单链表L中奇数值的结点分离出来，重新组成一个新的链表。返回指向新链表头结点的指针，同时将L中存储的地址改为删除了奇数值结点后的链表
 * 的头结点地址（所以要传入L的指针）。
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
 * struct ListNode *getodd( struct ListNode **L );
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
 *      struct ListNode *L, *Odd;
 *      L = readlist();
 *      Odd = getodd(&L);
 *      printlist(Odd);
 *      printlist(L);
 *
 *      return 0;
 * }
 *
 * 输入样例：
 * 1 2 2 3 4 5 6 7 -1
 *
 * 输出样例：
 * 1 3 5 7
 * 2 2 4 6
 *
 * @Author: Wang An
 * @Date: 5/6/2020 1:17 PM
 */
#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode *next;
};

struct ListNode *readlist();

struct ListNode *getodd(struct ListNode **L);

void printlist(struct ListNode *L) {
    struct ListNode *p = L;
    while (p) {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

int main() {
    struct ListNode *L, *Odd;
    L = readlist();
    printlist(L);
    Odd = getodd(&L);
    printlist(Odd);
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

struct ListNode *getodd(struct ListNode **L) {
    struct ListNode *linkedList = *L;
    struct ListNode *oddHead = NULL, *oddTail = NULL, *evenHead = NULL, *evenTail = NULL;
    struct ListNode *cur = (struct ListNode *) malloc(sizeof(struct ListNode));
    while (linkedList != NULL) {
        if (linkedList->data % 2 == 1) {
            cur->data = linkedList->data;
            cur->next = NULL;
            if (oddHead == NULL) {
                oddHead = oddTail = cur;
            } else {
                oddTail->next = cur;
                oddTail = cur;
            }
            cur = (struct ListNode *) malloc(sizeof(struct ListNode));
        } else {
            if (evenHead == NULL) {
                evenHead = evenTail = linkedList;
            } else {
                evenTail->next = linkedList;
                evenTail = linkedList;
            }
        }
        linkedList = linkedList->next;
        // 防止全是奇数的情况下报错
        if (linkedList == NULL) {
            if (evenTail != NULL) {
                evenTail->next = NULL;
            }
        }
    }
    *L = evenHead;
    return oddHead;
}