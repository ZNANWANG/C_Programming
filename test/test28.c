/**
 * 打印CLK_TCK（机器时钟每秒所走的打点数）以及测试printf()输出格式
 *
 * @Author: Wang An
 * @Date: 5/6/2020 9:05 PM
 */
#include <stdio.h>
#include <time.h>

int main(int argc, const char *argv[]){
    printf("CLK_TCK = %d\n", CLK_TCK); // 1000
    printf("%10.2e\n", 1.0); // 10表示输出字符串整体长度最小应该等于10，不足的话左边补空格，即右对齐。
    printf("%-15.2e%d\n", 1.0, 2); // 左对齐，右边补空格。

    return 0;
}