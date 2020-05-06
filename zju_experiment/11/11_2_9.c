/**
 * 实验11-2-9 链表逆置 (20分)
 *
 * 本题要求实现一个函数，将给定单向链表逆置，即表头置为表尾，表尾置为表头。链表结点定义如下：
 *
 * struct ListNode {
 *      int data;
 *      struct ListNode *next;
 * };
 *
 * 函数接口定义：
 * struct ListNode *reverse( struct ListNode *head );
 *
 * 其中head是用户传入的链表的头指针；函数reverse将链表head逆置，并返回结果链表的头指针。
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
 * struct ListNode *createlist(); //裁判实现，细节不表
 * struct ListNode *reverse( struct ListNode *head );
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
 *      struct ListNode  *head;
 *
 *      head = createlist();
 *      head = reverse(head);
 *      printlist(head);
 *
 *      return 0;
 * }
 *
 * 输入样例：
 * 1 2 3 4 5 6 -1
 *
 * 输出样例：
 * 6 5 4 3 2 1
 *
 * @Author: Wang An
 * @Date: 5/6/2020 2:34 PM
 */
#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode *next;
};

struct ListNode *createlist(); /*裁判实现，细节不表*/
struct ListNode *reverse(struct ListNode *head);

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
    printlist(head);
    head = reverse(head);
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

/**
 * 创造新的结点
 * @param head 链表头结点
 * @return 反转链表的头结点
 */
struct ListNode *reverse1(struct ListNode *head) {
    struct ListNode *cur = NULL, *h = NULL;
    while (head != NULL) {
        cur = (struct ListNode *) malloc(sizeof(struct ListNode));
        cur->data = head->data;
        cur->next = NULL;
        if (h == NULL) {
            h = cur;
        } else {
            cur->next = h;
            h = cur;
        }
        head = head->next;
    }
    return h;
}

/**
 * 调整结点指向
 * @param head 链表头结点
 * @return 反转链表的头结点
 */
struct ListNode *reverse(struct ListNode *head) {
    struct ListNode *cur = NULL, *h = NULL;
    while (head != NULL) {
        if (h == NULL) {
            h = cur = head;
            head = head->next;
            h->next = NULL;
        } else {
            cur = head;
            head = head->next;
            cur->next = h;
            h = cur;
        }
    }
    return h;
}