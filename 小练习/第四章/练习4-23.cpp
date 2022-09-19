//明解C语言练习4-23
//具体看书
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int i, j, len;
    printf("请输入一个整数:");
    scanf("%d", &len);
    for (i = 1; i <= len; i++)
    {
        for (j = 1; j <= len - i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
//看不懂题,算是抄答案了也是,会代码是一方面,阅读理解也是一方面啊

int main()
{
    int i, j, len;
    printf("请输入一个整数:");
    scanf("%d", &len);
    for (i = 1; i <= len; i++)
    {
        for (j = 1; j <= i - 1; j++)
        {
            putchar(' ');
        }
        for (j = 1; j <= len - i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}