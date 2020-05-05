/**
 * 实验11-2-1 建立学生信息链表 (20分)
 *
 * 本题要求实现一个将输入的学生成绩组织成单向链表的简单函数。
 *
 * 函数接口定义：
 * void input();
 *
 * 该函数利用scanf从输入中获取学生的信息，并将其组织成单向链表。链表节点结构定义如下：
 *
 * struct stud_node {
 *      int              num;      //学号
 *      char             name[20]; //姓名
 *      int              score;    //成绩
 *      struct stud_node *next;    //指向下个结点的指针
 * };
 *
 * 单向链表的头尾指针保存在全局变量head和tail中。
 *
 * 输入为若干个学生的信息（学号、姓名、成绩），当输入学号为0时结束。
 *
 * 裁判测试程序样例：
 * #include <stdio.h>
 * #include <stdlib.h>
 * #include <string.h>
 *
 * struct stud_node {
 *      int    num;
 *      char   name[20];
 *      int    score;
 *      struct stud_node *next;
 * };
 * struct stud_node *head, *tail;
 *
 * void input();
 *
 * int main()
 * {
 *      struct stud_node *p;
 *
 *      head = tail = NULL;
 *      input();
 *      for ( p = head; p != NULL; p = p->next )
 *           printf("%d %s %d\n", p->num, p->name, p->score);
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
 *
 * 输出样例：
 * 1 zhang 78
 * 2 wang 80
 * 3 li 75
 * 4 zhao 85
 *
 * @Author: Wang An
 * @Date: 5/5/2020 11:44 PM
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stud_node {
    int num;
    char name[20];
    int score;
    struct stud_node *next;
};
struct stud_node *head, *tail;

void input();

int main() {
    struct stud_node *p;

    head = tail = NULL;
    input();
    for (p = head; p != NULL; p = p->next)
        printf("%d %s %d\n", p->num, p->name, p->score);

    return 0;
}

void input() {

}