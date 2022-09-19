//明解C语言练习3-9
//使用if语句改写练习3-6代码,达到同样效果
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int a, b, c;

    printf("请输入一个整数:"); scanf("%d", &a);
    printf("请输入一个整数:"); scanf("%d", &b);
    printf("请输入一个整数:"); scanf("%d", &c);
    int six = 0;
    int num = 0;
    int max = 0;
    six = (a < b) ? a : b;
    max = (six < c) ? six : c;
    printf("最小值为%d", max);

    return 0;
}