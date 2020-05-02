/**
 * 实验2-1-3 计算物体自由下落的距离 (5分)
 *
 * 一个物体从100米的高空自由落下。编写程序，求它在前3秒内下落的垂直距离。设重力加速度为10米/秒^2。
 *
 * 输入格式:
 * 本题目没有输入。
 *
 * 输出格式:
 * 按照下列格式输出
 *
 * height = 垂直距离值
 *
 * 结果保留2位小数。
 *
 * @Author: Wang An
 * @Date: 4/29/2020 4:41 PM
 */
#include <stdio.h>

double freeFall(int height, int time, int g);

int main() {
    const int g = 10;
    int height = 100;
    int time = 3;
    double distance = freeFall(height, time, g);
    printf("height = %.2f\n", distance);

    return 0;
}

double freeFall(int height, int time, int g) {
    double distance = 0.5 * g * time * time;
    if (distance >= height) {
        distance = height;
    }
    return distance;
}
