//明解C语言练习3-6
//使用if语句编写一段程序,比较输入三个数值的最小值并进行输出
define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int a, b, c;

    printf("请输入一个整数:"); scanf("%d", &a);
    printf("请输入一个整数:"); scanf("%d", &b);
    printf("请输入一个整数:"); scanf("%d", &c);
    int k = 0;
    k = a;
    if (b < a)k = b;
    if (c < b)k = c;
    printf("最小值为%d", k);

    return 0;
}
//第二种写法
int main()
{
    int a, b, c;

    printf("请输入一个整数:"); scanf("%d", &a);
    printf("请输入一个整数:"); scanf("%d", &b);
    printf("请输入一个整数:"); scanf("%d", &c);
    int k = 0;
    k = a;
    if (a > b)
    {
        k = (b < c) ? b : c;
    }
    printf("最小值为%d", k);

    return 0;
}