//明解C语言练习4-14
//编写一段程序,以0-9输出n.n为输入的值.例如输入25,则输出1234567890/1234567890/12345
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int no, i;

    printf("请输入一个整数：");
    scanf("%d", &no);

    for (i = 1; i <= no; i++)
    {
        printf("%d", i % 10);
    }

    return 0;
}
//还是从网上看别人的答案,吐血了||||
//有个疑问是为什么i从1开始循环第一遍次i%10也就是1%10还能打印1