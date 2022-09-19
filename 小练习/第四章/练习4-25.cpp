//明解C语言
//练习4-25
//具体看书中图例
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int a, l, i;
    int j;

    puts("让我们来画一个金字塔。");
    printf("金字塔有几层：");
    scanf("%d", &i);


    for (j = 1; j <= i; j++)
    {
        for (a = 1; a <= j - 1; a++)
        {
            putchar(' ');
        }
        for (l = 1; l <= (i - j) * 2 + 1; l++)
        {
            printf("%d", j % 10);
        }
        putchar('\n');
    }

    return 0;
}
//这是别人写的代码答案,还需要巩固.并没有完全看明白