//明解C语言练习3-7
//使用if语句编写一段程序,比较输入四个数值的最大值并进行输出
define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int a, b, c，d;

    printf("请输入一个整数:"); scanf("%d", &a);
    printf("请输入一个整数:"); scanf("%d", &b);
    printf("请输入一个整数:"); scanf("%d", &c);
    printf("请输入一个整数:"); scanf("%d", &d);
    int k = 0;
    max = a;
    if (b > a)max = b;
    if (c > b)max = c;
    printf("最小值为%d", max);

    return 0;
}
//第二种写法
int main()
{
    int a, b, c, d;

    printf("请输入一个整数:"); scanf("%d", &a);
    printf("请输入一个整数:"); scanf("%d", &b);
    printf("请输入一个整数:"); scanf("%d", &c);
    printf("请输入一个整数:"); scanf("%d", &d);
    int max = 0;
    max = a;
    if (a < b)
    {
        max = (b > c) ? b : c;
    }
    printf("最大值为%d", max);

    return 0;
}
//第三种写法
int main()
{
    int a, b, c, d;

    printf("请输入一个整数:"); scanf("%d", &a);
    printf("请输入一个整数:"); scanf("%d", &b);
    printf("请输入一个整数:"); scanf("%d", &c);
    printf("请输入一个整数:"); scanf("%d", &d);
    int max = 0;
    max = a;
    if (a < b && a< c && a< d) {
        if (b > a&& b > c&& b > d)
        {
            max = b;
        }
        else if (c > b&& c > a&& c > d)
        {
            max = c;
        }
        else if (d > a&& d > c&& d > b)
        {
            max = d;
        }
    }
    printf("最大值为%d", max);

    return 0;
}
//第四种写法
int main()
{
    int a, b, c, d;

    printf("请输入一个整数:"); scanf("%d", &a);
    printf("请输入一个整数:"); scanf("%d", &b);
    printf("请输入一个整数:"); scanf("%d", &c);
    printf("请输入一个整数:"); scanf("%d", &d);
    int six = 0;
    int num = 0;
    int max = 0;
    six = (a > b) ? a : b;
    num = (c > d) ? c : d;
    max = (six > num) ? six : num;
    printf("最大值为%d", max);

    return 0;
}