/**
 * 实验11-2-5 链表拼接 (20分)
 *
 * 本题要求实现一个合并两个有序链表的简单函数。链表结点定义如下：
 *
 * struct ListNode {
 *      int data;
 *      struct ListNode *next;
 * };
 *
 * 函数接口定义：
 * struct ListNode *mergelists(struct ListNode *list1, struct ListNode *list2);
 *
 * 其中list1和list2是用户传入的两个按data升序链接的链表的头指针；函数mergelists将两个链表合并成一个按data升序链接的链表，并返回结果链表的头
 * 指针。
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
 * struct ListNode *mergelists(struct ListNode *list1, struct ListNode *list2);
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
 *      struct ListNode  *list1, *list2;
 *
 *      list1 = createlist();
 *      list2 = createlist();
 *      list1 = mergelists(list1, list2);
 *      printlist(list1);
 *
 *      return 0;
 * }
 *
 * 输入样例：
 * 1 3 5 7 -1
 * 2 4 6 -1
 *
 * 输出样例：
 * 1 2 3 4 5 6 7
 *
 * @Author: Wang An
 * @Date: 5/6/2020 10:54 AM
 */
#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode *next;
};

struct ListNode *createlist(); /*裁判实现，细节不表*/
struct ListNode *mergelists(struct ListNode *list1, struct ListNode *list2);

void printlist(struct ListNode *head) {
    struct ListNode *p = head;
    while (p) {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

int main() {
    struct ListNode *list1, *list2;

    list1 = createlist();
    printlist(list1);
    list2 = createlist();
    printlist(list2);
    list1 = mergelists(list1, list2);
    printlist(list1);

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
 * 先赋予头指针，再循环合并链表。
 * @param list1 链表1头指针
 * @param list2 链表2头指针
 * @return 将两个链表合并成一个按data升序链接的链表
 */
struct ListNode *mergelists1(struct ListNode *list1, struct ListNode *list2) {
    struct ListNode *p = NULL, *q = NULL;
    if (list1 == NULL && list2 == NULL) {
        return NULL;
    } else if (list1 != NULL && list2 == NULL) {
        return list1;
    } else if (list1 == NULL && list2 != NULL) {
        return list2;
    } else {
        if (list1->data < list2->data) {
            p = q = list1;
            list1 = list1->next;
        } else {
            p = q = list2;
            list2 = list2->next;
        }
    }

    while (list1 != NULL || list2 != NULL) {
        if (list1 == NULL) {
            p->next = list2;
            break;
        } else if (list2 == NULL) {
            p->next = list1;
            break;
        } else if (list1->data < list2->data) {
            p->next = list1;
            p = list1;
            list1 = list1->next;
        } else {
            p->next = list2;
            p = list2;
            list2 = list2->next;
        }
    }

    return q;
}

/**
 * 直接循环合并链表
 * @param list1 链表1头指针
 * @param list2 链表2头指针
 * @return 将两个链表合并成一个按data升序链接的链表
 */
struct ListNode *mergelists(struct ListNode *list1, struct ListNode *list2) {
    struct ListNode *p = NULL, *q = NULL;

    while (list1 != NULL || list2 != NULL) {
        if (list1 == NULL) {
            if (p == NULL) {
                p = q = list2;
                break;
            } else {
                p->next = list2;
                break;
            }
        } else if (list2 == NULL) {
            if (p == NULL) {
                p = q = list1;
                break;
            } else {
                p->next = list1;
                break;
            }
        } else if (list1->data < list2->data) {
            if (p == NULL) {
                p = q = list1;
            } else {
                p->next = list1;
                p = list1;
            }
            list1 = list1->next;
        } else {
            if (p == NULL) {
                p = q = list2;
            } else {
                p->next = list2;
                p = list2;
            }
            list2 = list2->next;
        }
    }

    return q;
}