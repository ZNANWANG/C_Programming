/**
 * const指针和const数组 —— const用法分析
 *
 * 转换
 * 总是可以把一个非const的值转换成为const
 *      void f(const int* x);
 *      int a = 15;
 *      f(&a); // OK
 *      const int b = a;
 *      f(&b); // Ok
 *      b = a + 1; // Error!
 *
 * 使用场景：
 * 当要传递的参数类型比地址大的时候，这是常用的手段：既能用比较少的字节数传递值给参数，又能避免函数对外面的变量的修改。
 *
 * const数组：
 * const int a[] = {1,2,3,4,5}
 * 数组变量已经是const的指针了，这里的const表明数组的每个单元都是const int，所以必须通过初始化进行赋值。
 *
 * @Author: Wang An
 * @Date: 5/1/2020 5:49 PM
 */
#include <stdio.h>

void f(const int array[]);

int main(){
    int a = 8;
    printf("a = %d\n", a);
    int * const p = &a;
    *p = 6;
    printf("a = %d\n", a);
//    p++; // p是常量指针，不可修改值。
    const int *q = &a; // 也可以写成int const *q = &a;
    a = 10;
//    *q = 9; // 表示不能通过q指针去修改a的值，但是并不会使a变成const。
    q++; // q指针可以修改值，也就是指针指向。

    const int array[] = {1,2,3,4,5};
//    array[0] = 9; // const表明数组的每个单元都是const int，只读不能修改。
    f(array);
    printf("a[0] = %d\n", array[0]);
}

/**
 * 保护数组值
 * 因为把数组传入函数时传递的是地址，所以那个函数内部可以修改数组的值，为了保护数组不被函数破坏，可以设置参数为const。
 * 注：当去掉参数的const时，数组的值仍然可以被改变。
 *
 * @param array const数组
 */
void f(const int array[]) {
//    array[0] = 9; // 保护数组值
}
