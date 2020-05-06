/**
 * 实验11-2-2 学生成绩链表处理 (20分)
 *
 * 本题要求实现两个函数，一个将输入的学生成绩组织成单向链表；另一个将成绩低于某分数线的学生结点从链表中删除。
 *
 * 函数接口定义：
 * struct stud_node *createlist();
 * struct stud_node *deletelist( struct stud_node *head, int min_score );
 *
 * 函数createlist利用scanf从输入中获取学生的信息，将其组织成单向链表，并返回链表头指针。链表节点结构定义如下：
 *
 * struct stud_node {
 *      int              num;      //学号
 *      char             name[20]; //姓名
 *      int              score;    //成绩
 *      struct stud_node *next;    //指向下个结点的指针
 * };
 *
 * 输入为若干个学生的信息（学号、姓名、成绩），当输入学号为0时结束。
 *
 * 函数deletelist从以head为头指针的链表中删除成绩低于min_score的学生，并返回结果链表的头指针。
 *
 * 裁判测试程序样例：
 * #include <stdio.h>
 * #include <stdlib.h>
 *
 * struct stud_node {
 *      int    num;
 *      char   name[20];
 *      int    score;
 *      struct stud_node *next;
 * };
 *
 * struct stud_node *createlist();
 * struct stud_node *deletelist( struct stud_node *head, int min_score );
 *
 * int main()
 * {
 *      int min_score;
 *      struct stud_node *p, *head = NULL;
 *
 *      head = createlist();
 *      scanf("%d", &min_score);
 *      head = deletelist(head, min_score);
 *      for ( p = head; p != NULL; p = p->next )
 *          printf("%d %s %d\n", p->num, p->name, p->score);
 *
 *      return 0;
 * }
 *
 * 输入样例：
 * 1 zhang 78
 * 2 wang 80
 * 3 li 75
 * 4 zhao 85
 * 0
 * 80
 *
 * 输出样例：
 * 2 wang 80
 * 4 zhao 85
 *
 * @Author: Wang An
 * @Date: 5/6/2020 9:25 AM
 */
#include <stdio.h>
#include <stdlib.h>

struct stud_node {
    int num;
    char name[20];
    int score;
    struct stud_node *next;
};

struct stud_node *createlist();

struct stud_node *deletelist(struct stud_node *head, int min_score);

int main() {
    int min_score;
    struct stud_node *p, *head = NULL;

    head = createlist();
    scanf("%d", &min_score);
    head = deletelist(head, min_score);
    for (p = head; p != NULL; p = p->next)
        printf("%d %s %d\n", p->num, p->name, p->score);

    return 0;
}

struct stud_node *createlist() {
    struct stud_node *cur = (struct stud_node *) malloc(sizeof(struct stud_node));
    struct stud_node *head = NULL, *tail = NULL;
    scanf("%d", &cur->num);
    while (cur->num != 0) {
        scanf("%s%d", cur->name, &cur->score);
        cur->next = NULL;
        if (head == NULL) {
            head = tail = cur;
        } else {
            tail->next = cur;
            tail = cur;
        }
        cur = (struct stud_node *) malloc(sizeof(struct stud_node));
        scanf("%d", &cur->num);
    }

    return head;
}

struct stud_node *deletelist(struct stud_node *head, int min_score) {
    struct stud_node *cur = head;
    struct stud_node *pre = NULL;
    while (cur != NULL) {
        if (cur->score < min_score) {
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