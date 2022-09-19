//明解C语言练习3-10
//编写一段程序,读取输入的三个值,若三个值相同则输出有三个值相同,两个值则输出有两个值相同。若没有一个相同则输出三个值各不相同
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int a, b, c;

    printf("请输入一个整数:"); scanf("%d", &a);
    printf("请输入一个整数:"); scanf("%d", &b);
    printf("请输入一个整数:"); scanf("%d", &c);
    if(a==b&&b==c)
    {
    	printf("三个值相同");
    }
    else if(a==b||b==c||c==a)
    {
    	printf("有两个值相同");
    }
    else
    	printf("三个值各不相同");
    return 0;
}
//代码在测试时如果输入的不是整数则输出错误直接显示两次请输入一个整数和三个值各不相同
int main()
{
    int a, b, c;

    printf("请输入一个整数:"); scanf("%d", &a);
    printf("请输入一个整数:"); scanf("%d", &b);
    printf("请输入一个整数:"); scanf("%d", &c);
    if (a == b && b == c)
    {
        printf("三个值相同");
    }
    else if (a == b || b == c || c == a)
    {
        printf("有两个值相同");
    }
    else if (a != b && b != c)
        printf("三个值各不相同");
    return 0;
}